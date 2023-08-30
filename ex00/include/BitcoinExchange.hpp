#ifndef BTC_H
# define BTC_H

# include <fstream>
# include <iostream>
# include <map>
# include <string>
# include <stdio.h>
# include <sstream>
# include <cstdlib>

class BitcoinExchange
{
  private:
	struct
	{
		double	value;
		std::string date;
	} LineData;
	std::map<std::string, double> btcData;
  public:
	BitcoinExchange();
	BitcoinExchange(char **args);
	~BitcoinExchange();
	void fillData(std::string string);
	void handleInputFile(std::string fileName);
	void checkValues( float value);
	void checkDate(int year, int month, int day);
	int isLeapYear(int year);
	void findDateAndCalculate();
	void printMap();
};

#endif