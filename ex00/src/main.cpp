#include "../include/BitcoinExchange.hpp"
#include <string>
#include <map>
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error : too many args" << std::endl;
        return (1);
    } 
    try{
    BitcoinExchange  bitcoin;
    bitcoin.handleInputFile(argv[1]);
    // bitcoin.printMap();

    }
    catch(std::string error)
    {
        std::cout << "Error : " << error << std::endl;
    }
}