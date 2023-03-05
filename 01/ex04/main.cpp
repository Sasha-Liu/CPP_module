/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:45:26 by sasha             #+#    #+#             */
/*   Updated: 2023/03/05 14:32:18 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <unistd.h>
#include <iostream>

int	ft_check_err(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed file string1 string2\n";
		return (1);
	}
	if (access(argv[1], F_OK))
	{
		std::cerr << "File not exist\n";
		return (1);
	}
	if (access(argv[1], R_OK))
	{
		std::cerr << "File cannot be read\n";
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cerr << "string1 cannot be empty\n";
		return (1);
	}
	return (0);
}

int	ft_open_file(std::ifstream &fin, std::ofstream &fout, char *filename)
{
	std::string	file1(filename);
	std::string	file2 = file1 + ".replace";
	
	fin.open(file1.c_str(), std::fstream::in);
	if (!fin.is_open())
	{
		fin.close();
		std::cerr << "Open fails\n";
		return (1);
	}
	fout.open(file2.c_str(), std::fstream::out | std::fstream::trunc);
	if (!fout.is_open())
	{
		fin.close();
		fout.close();
		std::cerr << "Open fails\n";
		return (1);
	}
	return (0);
}

void	ft_replace(std::string &line, std::string &s1, std::string &s2)
{
	size_t	s1_len;

	s1_len = s1.length();
	for (size_t i = 0; i < line.length(); i++)
	{
		if (line.compare(i, s1_len, s1) == 0)
		{
			line.erase(i, s1_len);
			line.insert(i, s2);
		}
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	fin;
	std::ofstream	fout;
	std::string		line;
	std::string		s1;
	std::string		s2;

	if (ft_check_err(argc, argv))
	{
		return (0);
	}
	if (ft_open_file(fin, fout, argv[1]))
	{
		return (0);
	}
	s1.assign(argv[2]);
	s2.assign(argv[3]);
	while (fin)
	{
		std::getline(fin, line, '\n');
		ft_replace(line, s1, s2);
		fout << line << "\n";
	}
	fin.close();
	fout.close();
}