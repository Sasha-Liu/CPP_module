/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:45:25 by sasha             #+#    #+#             */
/*   Updated: 2023/05/16 13:45:14 by hsliu            ###   ########.fr       */
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
	{
		std::cerr << "Cannot open: data.csv" << std::endl;
		return (false);
	}
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
			else if (it->first != date && it == this->_map.begin())
				std::cerr << "Date not found" << std::endl;
			else
			{
				if (it->first != date)
					it--;
				std::cout << date << "=>" << value << "=" << value * it->second << std::endl;	
			}
		}
	}
}

bool	BitcoinExchange::parse_line(std::string &line, std::string &date, double &val)
{
	std::string::size_type	it0;
	std::string::size_type	it1;
	std::string::size_type	it2;
	std::string::size_type	it3;
	std::string::size_type	it4;
	std::string				value;
	
	if (line.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
	{
		std::cout << std::endl;
		return (false);
	}
	if (line.find_first_not_of("0123456789-.| ") != std::string::npos)
	{
		std::cout << "Error: Extra symbol" << std::endl;
		return (false);
	}
	it0 = line.find_first_not_of(" ", 0);
	it1 = line.find("-", 0);
	it2 = line.find("-", it1 + 1);
	it3 = line.find_first_of("| ", it2 + 1);
	if (it1 == std::string::npos || it2 == std::string::npos || it3 == std::string::npos)
	{
		std::cerr << "Error: Missing sign - or |: " << line << std::endl;
		return (false);
	}
	date = line.substr(it0, it3 - it0);
	if (!date_valid(line.substr(it0, it1 - it0),
					line.substr(it1 + 1, it2 - it1 - 1),
					line.substr(it2 + 1, it3 - it2 - 1)))
	{
		std::cerr << "Error: Invalid date: " << date << std::endl;
		return (false);
	}
	it4 = line.find_first_not_of("| ", it3);
	value = line.substr(it4, std::string::npos);
	if (!value_valid(value))
	{
		std::cout << "Error: Invalid value: " << value << std::endl;
		return (false);
	}
	val = strtod(value.c_str(), NULL);
	if (val < 0 || val > 1000)
	{
		std::cerr << "Error: Value out of range: " << value << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::date_valid(std::string const &y, std::string const &m, std::string const &d)
{
	int mon_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int	year;
	int	month;
	int	day;
	
	if (y.find_first_not_of("0123456789") != std::string::npos
			|| m.find_first_not_of("0123456789") != std::string::npos
			|| d.find_first_not_of("0123456789") != std::string::npos)
		return (false);
	year = atoi(y.c_str());
	month = atoi(m.c_str());
	day = atoi(d.c_str());
	if (year < 0)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		mon_day[1] += 1;
    if ((day > mon_day[month - 1]) || (day < 1))
        return (false);
    return (true);
}

bool	BitcoinExchange::value_valid(std::string const &value)
{
	std::string::const_iterator	i;
	
	i = value.begin();
	if (value.find(".") == std::string::npos)
	{
		if (*i == '-')
			i++;
		if (!isdigit(*i))
			return (false);
		while (isdigit(*i))
			i++;
		while (std::isspace(*i))
			i++;
		if (i == value.end())
			return (true);
		return (false);
	}
	else
	{
		if (*i == '-')
			i++;
		if (!isdigit(*i))
			return (false);
		while (isdigit(*i))
			i++;
		if (*i == '.')
			i++;
		if (!isdigit(*i))
			return (false);
		while (isdigit(*i))
			i++;
		if (i == value.end())
			return (true);
		return (false);
	}
	
}