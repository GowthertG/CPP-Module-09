# C++ Module 09 - My Completed Exercises

Welcome to my completed exercises for **C++ Module 09** in the **42 Network**. In this module, I've tackled challenging C++ programming tasks that emphasize leveraging the **Standard Template Library (STL)** to solve intricate problems involving bitcoin exchange rates, reverse polish notation, and advanced sorting algorithms.

## Exercise 00: Bitcoin Exchange

### Description

In this exercise, I developed a program named `btc` to calculate the value of a specific amount of bitcoin on a designated date. I harnessed a CSV-formatted database containing historical bitcoin price data to perform these calculations.

### My Approach

- Meticulously parsed the input file, extracting essential date and value information.
- Efficiently managed and manipulated data using powerful STL containers.
- Prioritized graceful error handling to ensure the program's resilience.

### How to Run

1. Clone this repository to your local machine.
2. Navigate to the 'ex00' directory.
3. Compile the program using the provided Makefile.
4. Execute the program with your desired input file.

## Exercise 01: Reverse Polish Notation

### Description

In this exercise, I designed a program named `RPN` that evaluates inverted Polish mathematical expressions. These expressions can encompass numbers less than 10 and operations such as "+", "-", "*", and "/".

### My Approach

- Devised an algorithm for efficient processing of given mathematical expressions.
- Employed STL containers to manage tokens and operands during calculations.
- Focused on robust error handling to ensure the program's reliability.

### How to Run

1. Clone this repository to your local machine.
2. Navigate to the 'ex01' directory.
3. Compile the program using the provided Makefile.
4. Run the program with your desired inverted Polish expression as an argument.

## Exercise 02: PmergeMe

### Description

For this exercise, I constructed a program named `PmergeMe` to sort positive integer sequences using a merge-insert sort algorithm. The program excels at managing large amounts of integers and employs two distinct containers.

### My Approach

- Implemented tailored merge-insert sort algorithms for each container.
- Maintained a strong focus on reliable error handling.

### How to Run

1. Clone this repository to your local machine.
2. Navigate to the 'ex02' directory.
3. Compile the program using the provided Makefile.
4. Execute the program with a sequence of positive integers as arguments.
5. The program will showcase both the unsorted and sorted sequences, along with execution times for each container.

Example usage:
```bash
$ make && ./PmergeMe 3 5 9 7 4
```
Output :
```bash
Vector befor : 3 5 9 7 4 
Deque  befor : 3 5 9 7 4 

      +------------------------+
      |         Process        |
      +------------------------+

Vector after : 3 4 5 7 9 
Deque  after : 3 4 5 7 9 

Time to process a range of 5 elements with std::vector : 3 us
Time to process a range of 5 elements with std::deque :  4 us
...
```
