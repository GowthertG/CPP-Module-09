#ifndef P_HPP
#define P_HPP

#include <algorithm>
#include <iostream>
#include <deque>
#include <vector>
#include <ctime>
#include <sstream>
#include <cstddef>

#define START(x) x + 1

class PmergeMe
{

private:
public:
    PmergeMe();
    ~PmergeMe();
    
    //vector sort functions
    static void mergeInsertSortVector(std::vector<int> &container, int start, int end);
    static void mergeSortVector(std::vector<int> &container, int start, int mid, int end);
    static void insertSortVector(std::vector<int> &container, int start, int end);
    
    //calcualte time functions
    static void run(std::vector<int> &container);
};

void print(std::vector<int> &Vec);
void caluclateTime(std::vector<int> &container, int &vecTime);
int midPoint(int start, int end);

#endif