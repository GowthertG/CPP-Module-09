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
#define BEFOR  "\e[0;31m"
#define AFTER  "\e[0;32m"
#define MAG "\e[0;35m"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

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

    //deque sort functions
    static void mergeInsertSortDeque(std::deque<int> &container, int start, int end);
    static void mergeSortDeque(std::deque<int> &container, int start, int mid, int end);
    static void insertSortDeque(std::deque<int> &container, int start, int end);
    
    //calcualte time functions
    static void runV(std::vector<int> &container);
    static void runD(std::deque<int> &container);
};

void print(std::vector<int> &, std::deque<int> &);
void caluclateTime(std::vector<int> &, std::deque <int> &, int &, int &);
int midPoint(int start, int end);

#endif