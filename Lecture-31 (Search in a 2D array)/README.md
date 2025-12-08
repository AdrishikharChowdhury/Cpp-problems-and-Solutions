# Lecture-31 Search in a 2D array - Overview

This repository contains two C++ programs demonstrating efficient search algorithms in sorted 2D matrices:

1. **Type-I Search**: Row-wise binary search elimination
2. **Type-II Search**: Optimized staircase binary search

## 📋 Table of Contents
- [Type-I Search](#type-i-search)
- [Type-II Search](#type-ii-search)
- [How to Compile and Run](#how-to-compile-and-run)
- [Dependencies](#dependencies)
- [License](#license)

## Type-I Search
**Type-I-search.cpp**

**Algorithm**: Binary search on rows first, then linear search on promising row

**Key Features**:
- Eliminates rows where target cannot exist
- Nested binary search approach
- Handles edge cases (1 row, empty matrix)
- O(m log n) time complexity

**Usage**:
```

g++ Type-I-search.cpp -o type1
./type1

```

**Example**:
```

Enter rows: 3
Enter cols: 4
Enter matrix:
1 3 5 7
10 11 16 20
23 30 34 60
Enter target: 16
Found at row: 1, col: 2

```

## Type-II Search
**Type-II-search.cpp**

**Algorithm**: Staircase binary search treating matrix as 1D array

**Key Features**:
- Maps 2D coordinates to 1D index: `idx = row*n + col`
- Single binary search over all elements
- Optimal O(log(m*n)) time complexity
- Handles LeetCode edge cases perfectly

**Usage**:
```

g++ Type-II-search.cpp -o type2
./type2

```

**Example**:
```

Matrix: [,][^1][^2]
Target: 1
Output: true ✓

```

## How to Compile and Run

**Compile each program separately**:
```

g++ Type-I-search.cpp -o type1
g++ Type-II-search.cpp -o type2

```

**Execute**:
```

./type1
./type2

```

**Or compile both together**:
```

g++ Type-I-search.cpp Type-II-search.cpp -o search_demo

```

## Dependencies
- C++11 or later
- Standard Template Library (STL) - `vector`

## Common Implementation Details
- Dynamic matrix input using `vector<vector<int>>`
- Proper bounds checking and edge case handling
- Clean user prompts and formatted output
- Memory efficient O(1) space complexity

## License
This code is released under the MIT License

