/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:30:55 by sasha             #+#    #+#             */
/*   Updated: 2023/05/15 17:48:05 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <ctime>

class BitcoinExchange
{
	public:
		typedef std::map<std::string, double>	map;
		
		BitcoinExchange(void);
		~BitcoinExchange(void);
		
		bool	read_data(void);
		void	process(std::string const &file);
		
	private:
		std::map<std::string, double>	_map;

		static bool		parse_line(std::string &line, std::string &date, double &value);
		static bool		date_valid(int year, int month, int day);


		BitcoinExchange(BitcoinExchange const &b);
		BitcoinExchange	&operator=(BitcoinExchange const &b);
};

#endif