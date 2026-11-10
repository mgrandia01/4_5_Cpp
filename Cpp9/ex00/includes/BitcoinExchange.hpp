/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:58:30 by mgrandia          #+#    #+#             */
/*   Updated: 2026/08/28 12:09:57 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange
{
	//TODO ortodoxal form
	private:
		std::map<std::string, double> _database;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void loadDatabase(const std::string &filename);
		void processInput(const std::string &filename);
		bool parseLine(const std::string& line, std::string& date, std::string& value);
		bool parseValue(const std::string& str, double& value);

		bool isValidDate(const std::string& date);
		double getExchangeRate(const std::string& date);
		std::string trim(const std::string& str);
};

#endif

