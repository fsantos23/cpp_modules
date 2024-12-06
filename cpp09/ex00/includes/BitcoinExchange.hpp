#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _db;
		std::map<std::string, float> _input;
		std::map<std::string, std::string> _date;

	public:
		BitcoinExchange(std::string filename, std::string input_file);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void addValues(std::string filename, std::string name);
		void sendValues();
		int checkDate(std::string date);
		int checkNumber();
		void printValue(std::string date, float value);
};

#endif
