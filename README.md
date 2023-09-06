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

# C++ Standard Library Functions Used in BitcoinExchange

This README.md file provides documentation for the C++ standard library functions used in the BitcoinExchange code.

## Functions

### 1. `std::ifstream`

- **Description:** `std::ifstream` is used to create and manage an input file stream. In the BitcoinExchange code, it is used to open and read data from the "data.csv" file.

- **Usage:**
    ```cpp
    std::ifstream data("src/data.csv");
    if (!data.is_open()) {
        throw(std::string) "cannot open data base";
    }
    ```

### 2. `std::getline`

- **Description:** `std::getline` is a function for reading lines from an input stream. In the BitcoinExchange code, it is used to read lines from the data file and populate the `btcData` map.

- **Usage:**
    ```cpp
    std::string line;
    getline(data, line);
    while (getline(data, line)) {
        // Process each line of data here
    }
    ```

### 3. `std::map`

- **Description:** `std::map` is a standard C++ container that stores key-value pairs. In the BitcoinExchange code, it is used to store date-value pairs in the `btcData` map.

- **Usage:**
    ```cpp
    std::map<std::string, float> btcData;
    ```

### 4. `std::stringstream`

- **Description:** `std::stringstream` is a class that allows for stream-based operations on strings. In the BitcoinExchange code, it is used to split CSV lines into tokens.

- **Usage:**
    ```cpp
    std::stringstream ss(line);
    std::string token;
    while (getline(ss, token, ',')) {
        // Process each token here
    }
    ```

### 5. `std::isdigit`

- **Description:** `std::isdigit` is a function that checks if a character is a decimal digit. In the BitcoinExchange code, it is used to validate the format of input data.

- **Usage:**
    ```cpp
    if (std::isdigit(line[13])) {
        // Check if character at index 13 is a digit
    }
    ```

### 6. `std::isspace`

- **Description:** `std::isspace` is a function that checks if a character is a whitespace character. In the BitcoinExchange code, it is used to validate the format of input data.

- **Usage:**
    ```cpp
    if (std::isspace(line[13])) {
        // Check if character at index 13 is a whitespace
    }
    ```

### 7. `std::cerr`

- **Description:** `std::cerr` is an output stream typically used for error messages. In the BitcoinExchange code, it is used to output error messages to the standard error stream.

- **Usage:**
    ```cpp
    std::cerr << "cannot find any closer data" << std::endl;
    ```
### 8. `std::setprecision`

- **Description:** `std::setprecision` is a manipulator for controlling the precision of floating-point values when printing them to the standard output.

- **Usage:**
    ```cpp
    std::cout << std::setprecision(7) << LineData.date << " => " << std::setprecision(7) << LineData.value << std::endl;
    ```
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
# C++ Standard Library Functions Used in RPN

This README.md file provides documentation for the C++ standard library functions used in the RPN (Reverse Polish Notation) code.

## C++ Standard Library Functions

### 1. `<cctype>`

- **Description:** The `<cctype>` header provides functions for character classification and manipulation. In the RPN code, it is used to check if characters are digits and to classify characters.

### 2. `std::isdigit`

- **Description:** `std::isdigit` is a function provided by the C++ standard library that checks if a character is a decimal digit (0-9). In the RPN code, it is used to determine if a character is a digit.

### 3. `std::string`

- **Description:** `std::string` is a standard C++ class for working with strings of characters. In the RPN code, it is used to manipulate and process strings representing RPN expressions.

### 4. `std::cout`

- **Description:** `std::cout` is an output stream provided by the C++ standard library that is used for writing data to the standard output (usually the console). In the RPN code, it is used to print the result of RPN expressions to the console.

### 5. `std::stack`

- **Description:** `std::stack` is a standard C++ container class that represents a stack data structure. In the RPN code, it is used to implement a stack for evaluating RPN expressions.
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

#### Example usage: 
```shell
$ make && ./PmergeMe 3 5 9 7 4
```
Output :
```shell
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
