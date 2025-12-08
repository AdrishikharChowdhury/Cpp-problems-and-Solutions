## 📜 Lecture-32 (Spiral Matrix)

This repository contains a C++ program demonstrating the traversal of a **2D matrix in a spiral order**.

The program, **Spiral Matrix.cpp**, implements a function to take a 2D array and return a 1D vector containing all its elements in a clockwise spiral sequence.

## 📋 Table of Contents

  - [Algorithm Overview](https://www.google.com/search?q=%23algorithm-overview)
  - [Key Features](https://www.google.com/search?q=%23key-features)
  - [How to Compile and Run](https://www.google.com/search?q=%23how-to-compile-and-run)
  - [Dependencies](https://www.google.com/search?q=%23dependencies)
  - [License](https://www.google.com/search?q=%23license)

-----

## Algorithm Overview

The `spiralMatrix` function uses **four boundary pointers** to define the current layer of the spiral traversal:

  * `srows`: **Start Row**
  * `erows`: **End Row**
  * `scols`: **Start Column**
  * `ecols`: **End Column**

The traversal proceeds in four steps, iterating through the current layer and moving the boundary pointers inward:

1.  **Top:** Traverse from `scols` to `ecols` using `srows`. Increment `srows`.
2.  **Right:** Traverse from `srows` to `erows` using `ecols`. Decrement `ecols`.
3.  **Bottom:** Traverse from `ecols` to `scols` using `erows`. Decrement `erows`. (A check is made to ensure `srows < erows` to prevent double-counting in single-row/column matrices).
4.  **Left:** Traverse from `erows` to `srows` using `scols`. Increment `scols`. (A check is made to ensure `scols < ecols` to prevent double-counting in single-row/column matrices).

The loop continues as long as `srows <= erows` and `scols <= ecols`.

-----

## Key Features

  * **Time Complexity**: $\text{O}(m \cdot n)$, where $m$ is the number of rows and $n$ is the number of columns, as every element is visited exactly once.
  * **Space Complexity**: $\text{O}(1)$ auxiliary space (excluding the space required for the output vector).
  * Handles **rectangular and square matrices** efficiently.
  * Includes checks for **edge cases** like single-row or single-column matrices.
  * **Dynamic input** allows the user to define matrix dimensions and elements at runtime.

-----

## How to Compile and Run

### Usage:

1.  **Compile the program**:
    ```bash
    g++ "Spiral Matrix.cpp" -o spiral_matrix
    ```
2.  **Execute the compiled file**:
    ```bash
    ./spiral_matrix
    ```

### Example Output:

```
Enter the rows of the matrix: 3
Enter the columns of the matrix: 4
Enter the value for matrix[0][0]: 1
Enter the value for matrix[0][1]: 2
Enter the value for matrix[0][2]: 3
Enter the value for matrix[0][3]: 4
Enter the value for matrix[1][0]: 5
Enter the value for matrix[1][1]: 6
Enter the value for matrix[1][2]: 7
Enter the value for matrix[1][3]: 8
Enter the value for matrix[2][0]: 9
Enter the value for matrix[2][1]: 10
Enter the value for matrix[2][2]: 11
Enter the value for matrix[2][3]: 12
The 2D matrix is:
1 2 3 4 
5 6 7 8 
9 10 11 12 
The spiraled matrix is: 1 2 3 4 8 12 11 10 9 5 6 7 
```

-----

## Dependencies

  * C++11 or later
  * Standard Template Library (STL) - `vector`, `iostream`

-----

## License

This code is released under the **MIT License**.