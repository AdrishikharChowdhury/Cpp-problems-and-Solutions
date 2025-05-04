# Lecture-30: Matrix Operations in C++

## Overview
This repository contains two C++ programs demonstrating fundamental matrix operations:
1. **Linear Search in 2D Matrix**
2. **Maximum Column Sum Calculation**

## Programs

### 1. Linear Search in 2D Matrix (`Linear Search in 2D.cpp`)
Performs a linear search to find the first occurrence of a key value in a 2D matrix.

#### Features:
- Takes user input for matrix dimensions and elements
- Implements linear search through nested loops
- Returns the (row, column) indices of found element
- Handles cases where element is not found

#### Usage:
```bash
g++ "Linear Search in 2D.cpp" -o linear_search
./linear_search
```

#### Example:
```
Enter the no. of rows: 2
Enter the no. of columns: 2
Enter the matrix[0][0]: 1
Enter the matrix[0][1]: 2
Enter the matrix[1][0]: 3
Enter the matrix[1][1]: 4
Enter the data to find: 3
The co-ordinates of the 3 is 1,0
```

### 2. Maximum Column Sum (`Maximum Column Sum.cpp`)
Calculates the maximum sum among all columns in a 2D matrix.

#### Features:
- Takes user input for matrix dimensions and elements
- Computes column sums using nested loops
- Tracks and returns the maximum column sum
- Displays the input matrix for verification

#### Usage:
```bash
g++ "Maximum Column Sum.cpp" -o max_col_sum
./max_col_sum
```

#### Example:
```
Enter the no. of rows: 2
Enter the no. of columns: 2
Enter the matrix[0][0]: 1
Enter the matrix[0][1]: 2
Enter the matrix[1][0]: 3
Enter the matrix[1][1]: 4
The maximum column sum is 6
1       2
3       4
```

## Common Implementation Details
- Uses C++ STL `vector` for dynamic matrix representation
- Implements proper boundary checking
- Includes clear user prompts and output formatting
- Handles all matrix sizes within memory limits

## How to Compile and Run
1. Compile each program separately:
   ```bash
   g++ "Linear Search in 2D.cpp" -o linear_search
   g++ "Maximum Column Sum.cpp" -o max_col_sum
   ```
2. Execute the compiled programs:
   ```bash
   ./linear_search
   ./max_col_sum
   ```

## Dependencies
- C++11 or later
- Standard Template Library (STL)

## License
This code is released under the [MIT License](LICENSE).
