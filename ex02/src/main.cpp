#include "../include/PmergeMe.hpp"


int main (int argc, char **argv)
{
    try
    {
        if (argc < 2 )
            throw ": Enter args";
        std::vector<int> Vec;
        int vectorSortingTime;
        int number;
        for (int index = 1; index < argc; index++)
        {
            std::stringstream readstring(argv[index]);
            if (!(readstring >> number) || !(readstring.eof()))
                throw "";
            if (number < 0)
                throw ": Negative number !";
            Vec.push_back(number);
        }
        std::cout << "\033[0;31mVector befor : ";
        print(Vec);
        caluclateTime(Vec, vectorSortingTime);
        std::cout << std::endl;
        std::cout << "\033[0;32mVector after : ";
        print(Vec);
        std::cout << "\033[0;34mTime to process a range of " << argc - 1 << " elements with std::vector : " << vectorSortingTime << " us " << std::endl;
    }
    catch(const char *errorMsg)
    {
        std::cout << "Error " << errorMsg << std::endl;
    }
}