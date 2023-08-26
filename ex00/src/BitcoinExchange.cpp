#include "../include/BitcoinExchange.hpp"
#include <stdio.h>
#include <sstream>

//todo error msg need to be excat look at subject and need more test
BitcoinExchange::BitcoinExchange(){
	std::ifstream data("src/data.csv");
	if (!data.is_open())
	  throw (std::string)"cannot open data base";
	std::string line;
	getline(data, line);
	while (getline(data, line))
	{
	  fillData(line);
	};
	data.close();
};

BitcoinExchange::BitcoinExchange(char **args){
	(void)(args);

};

BitcoinExchange::~BitcoinExchange(){

};

void BitcoinExchange::fillData(std::string line)
{
	int i = 0;
	std::string key;
	std::stringstream ss(line);
	std::string token;
	while (getline(ss, token, ','))
	{
			if (i == 0)
			{
				LineData.date = token;
				i = 1;
			}
			else
				LineData.value = std::atof (token.c_str());
	}
	// printf("%f\n", LineData.value);
	// std::cout << LineData.date << " | "<< LineData.value << std::endl;
	this->btcData.insert(std::make_pair(LineData.date, LineData.value));
}

void BitcoinExchange::handleInputFile(std::string fileName)
{
	int		year;
	int		month;
	int		day;
	float	value;
	char	extra;

	std::string line;
	std::ifstream file(fileName);
	if (!file.is_open())
		throw  (std::string)"cannot open file";
	std::cout << line << std::endl;
	getline(file, line);
	if (line != "date | value")
		throw (std::string )"Error";
	bool firstLine = true;
	while (getline(file, line))
	{
		if (firstLine)
			firstLine = false;
		if (line.length() < 14)
		{
			std::cout << "Error : line" << std::endl;
			continue;
		}
		else if (sscanf((line.c_str()), "%d-%d-%d | %f%c", &year, &month, &day,
				&value, &extra) == 4)
		{
			if (std::isspace(line[13]) || line[11] != '|' || line[line.length()
				- 1] == '.')
			{
				std::cout << "Error : line format error 1" << std::endl;
				continue ;
			}
			try
			{
				checkValues( value);
				checkDate(year, month, day);
			}
			catch (std::string error)
			{
				std::cout << "Error: " << error << std::endl;
				continue ;
			}
		}
		else
			std::cout << "Error : line format" << std::endl;
		size_t	pos;

		pos = line.find(' ');
		// std::cout << value << std::endl;
		// std::cout << LineData.date << std::endl;
		// std::cout << LineData.value << std::endl;
		LineData.date = line.substr(0, pos);
		LineData.value = value;
		// std::cout << LineData.date << std::endl;
		findDateAndCalculate();
	}
	if (firstLine)
		throw (std::string)"file is empty";
}

void BitcoinExchange::checkValues(float value)
{
	if (value > 1000 || value < 0)
		throw(std::string) "A valid value must be between 0 and 1000.";
}
int BitcoinExchange::isLeapYear(int year)
{
	// todo : how?
	bool ReturnValue = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? true : false;
	return (ReturnValue);
}
void BitcoinExchange::checkDate(int year, int month, int day)
{

	if (month < 1 || month > 12 || day < 1)
		throw (std::string)"invalid date";
	int	months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month == 2 && (isLeapYear(year) == true))
		months[1] = 29;
	(day > months[month - 1]) ? throw (std::string)"invalid day" : 0;
	if (year < 2009 || (year == 2009 && month == 1 && day < 2))
	{
		throw(std::string) "min year : (2009-01-02)";
	}
	if (year > 2022 || (year == 2022 && month == 3 && day > 29))
	{
		throw(std::string) "max year (2022-03-29)";
	}
}

void BitcoinExchange::findDateAndCalculate()
{
	std::map<std::string, double>::iterator it;
	it = this->btcData.lower_bound(LineData.date);
	// if(it != this->btcData.end())
	// {
		// it = this->btcData.lower_bound(LineData.date);
	// }
	if (it == this->btcData.end())
	{
		it--;
		std::cout << (*it).first << " | " << LineData.value << std::endl;
		std::cout << (*it).second << " * " << LineData.value << std::endl;
		//todo add output here
		return ;
	}
	if (it == this->btcData.begin())
	{
		//todo add output here
		std::cerr << "cannot find any closer data" << std::endl;
		return ;
	}
	else
	{
		//todo add output here
		if ((*it).first != LineData.date)
			it--;
		std::cout <<  (*it).first << " | " << (*it).second << std::endl;
	}

}
void  BitcoinExchange::printMap()
{
    std::map<std::string, double>::const_iterator it;
    for (it = btcData.begin(); it != btcData.end(); ++it)
    {
        std::cout << it->first << std::endl;
    }
}
