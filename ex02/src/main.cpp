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
        for (int index = 1; index < argc, index++)
        {
            std::stringstream readstring(argv[index]);
            if (!(readstring >> number) || !(readstring.eof()))
                throw "";
            if (number < 0)
                throw ": Negative number !";
            Vec.push_back(number);
        }
        std::cout << "                Vector" << std::endl;
        print(Vec);
        caluclateTime(Vec);
        print(Vec);
        std::cout << "vector sorting time = " << vectorSortingTime << "us" << std::endl;
    }
    catch(const char *errorMsg)
    {
        std::cout << "Error " << errorMsg;
    }
}