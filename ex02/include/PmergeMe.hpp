#ifndef P_HPP
#define P_HPP
#include <deque>
#include <vector>
#include <ctime>
#include <sstream>

#define START(x) x + 1

class PmergeMe
{

private:
public:
    PmergeMe();
    ~PmergeMe();
    
    //vector sort functions
    static void mergeInsertSortVector(std::vector<int> &container, int start, int end);
    static void mergeSortVector(std::vector &container, int start, int mid, int end);
    static void insertSortVector(std::vector<int> &container, int start, int end);
    
    //calcualte time functions
    static void run(vector<int> &container);
};

#endif