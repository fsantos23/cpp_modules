#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>


class BitcoinExchange
{
	private:
		std::map<std::time_t, float> _db;
		std::map<std::time_t, float> _input;
		std::map<std::string, std::string> _date;

	public:
		BitcoinExchange(const std::string& filename, const std::string& input_file);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void addValues(const std::string& filename, const std::string& name);
		void sendValues();
		std::string formatTime(std::time_t time);
};

#endif
