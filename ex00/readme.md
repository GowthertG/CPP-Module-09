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

## Note

These are some of the key C++ standard library functions and classes used in the BitcoinExchange code. Please refer to the C++ standard library documentation for more details on these functions and their usage.
