/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:45:25 by sasha             #+#    #+#             */
/*   Updated: 2023/05/15 18:36:25 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)	{}
BitcoinExchange::~BitcoinExchange(void)	{}

bool	BitcoinExchange::read_data(void)
{
	std::ifstream	fin;
	std::string		line;
	std::string		date;
	std::string		rate;

	fin.open("data.csv");
	if (!fin.is_open())
		return (false);
	while (getline(fin, line))
	{
		if (line.find("date") != std::string::npos)
			continue ;
		date = line.substr(0, line.find(","));
		rate = line.substr(line.find(",") + 1, std::string::npos);
		this->_map.insert(map::value_type(date, strtod(rate.c_str(), NULL)));
	}
	return (true);
}

void	BitcoinExchange::process(std::string const &file)
{
	std::ifstream	fin;
	std::string		line;
	std::string		date;
	double			value;
	map::iterator	it;

	fin.open(file.c_str());
	if (!fin.is_open())
	{
		std::cerr << "Cannot open: " << file << std::endl;
		return ;
	}
	while (getline(fin, line))
	{
		if (line.find("date") != std::string::npos)
			continue ;
		if (parse_line(line, date, value))
		{
			it = this->_map.lower_bound(date);
			if (it == this->_map.end())
				std::cerr << "Date not found" << std::endl;
			else
				std::cout << date << "=>" << value << "=" << it->first << " " << it->second << std::endl;
		}
	}
}

bool	BitcoinExchange::parse_line(std::string &line, std::string &date, double &value)
{
	std::string::size_type	it1;
	std::string::size_type	it2;
	std::string::size_type	it3;
	std::string				val;
	int						time[3];
	
	it1 = line.find("-", 0);
	it2 = line.find("-", it1 + 1);
	it3 = line.find("|", it2 + 1);
	if (it1 == std::string::npos || it2 == std::string::npos || it3 == std::string::npos)
	{
		std::cerr << "Missing sign" << std::endl;
		return (false);
	}
	time[0] = atoi(line.substr(0, it1).c_str());
	time[1] = atoi(line.substr(it1 + 1, it2 - it1 - 1).c_str());
	time[2] = atoi(line.substr(it2 + 1, it3 - it2 - 1).c_str());
	if (!date_valid(time[0], time[1], time[2]))
	{
		std::cerr << "Invalid date" << std::endl;
		return (false);
	}
	if (line[it3 - 1] == ' ')
		date = line.substr(0, it3 - 1);
	else
		date = line.substr(0, it3);
	val = line.substr(it3 + 1, std::string::npos);
	value = strtod(val.c_str(), NULL);
	if (value < 0 || value > 1000)
	{
		std::cerr << "Invalid value" << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::date_valid(int year, int month, int day)
{
	int	leap;
	int mon_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// std::cout << "check: "<< year <<"-"<< month <<"-"<< day << std::endl;

	if (year < 0)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
		leap = 1;
	}
	else
	{
        leap = 0;
	}
	mon_day[1] += leap;
    if ((day > mon_day[month - 1]) || (day < 1))
        return (false);
    return (true);
}