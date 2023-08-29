#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe(){
};

PmergeMe::~PmergeMe(){
};


//vector sort functions
void PmergeMe::mergeInsertSortVector(std::vector<int> &container, int start, int end)
{
    int newEnd;
    if (start < end)
    {
        if ((end - start) < 10)
            insertSortVector(container, start, end);
        else{
            newEnd = midPoint(start, end);
            mergeInsertSortVector(container,  start, newEnd);
            mergeInsertSortVector(container, START(newEnd), end);
            mergeSortVector(container, start, newEnd, end);
        }
    }
};

void PmergeMe::mergeSortVector(std::vector<int> &container, int start, int mid, int end)
{
    int i, j , k;

    std::vector<int> left(mid - START(start));
    std::vector<int> right(end - mid);

    for(i = 0, i < (mid - START(start)), ++i)
        left[i] = container[start + i];
    for(j = 0, j < (end - mid), ++j)
        right[j] = container[mid + 1 + i];
    i = 0;
    j = 0;
    k = start;

    while(i < (mid - start + 1) && (end - mid))
    {
        if (left[i] <= right[j])
            container[k++] = left[i++];
        else
            container[k++] = right[j++];
    }

    while(i < (mid - START(start)))
        container[k++] =  left[i++];
    while (j < (end - mid))
        container[k++] = right[j++];
};

void PmergeMe::insertSortVector(std::vector<int> &container, int start, int end)
{
    for(int index = START(start), index <= index <= end, index++)
    {
        int hold = container[index];
        int j = index - 1;
        for(; j >= start && container[j] > hold, --j)
            container[j + 1] = container[j];
        container[j + 1] = hold;
    }
};

//calcualte time functions

void PmergeMe::run(std::vector<int> &container)
{
    mergeInsertSortVector(container, 0, container.size() - 1);
};

void caluclateTime(std::vector<int> &container, int &vecTime)
{
    std::clock_t start = std::clock();
    PmergeMe::run(container);
    std::colock_t end = std::clock();
    double elapsad = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
    vecTime = elapsad;
}
// calculate the middle pont within a given range
int midPoint(int start , int end)
{
    return (start + (end - start) / 2);
}

void print(std::vector<int> &Vec)
{
    typedef typename std::vector<int>::const_iterator iterator;
    for (iterator it = Vec.begin(); it != Vec.end(); ++it)
		std::cout << *it << " ";
    std::cout << std::endl;
}