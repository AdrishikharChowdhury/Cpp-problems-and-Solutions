
# Lecture-28: String Compression using Vector in C++

## Overview

This program compresses a given sequence of characters by replacing consecutive repeating characters with the character followed by the number of repetitions. It demonstrates efficient in-place string compression using a `vector<char>` in C++.

---

## Problem Description

Given an array of characters, compress it in-place.  
The compression rules are:
- If a character appears only once, keep it as is.
- If a character repeats multiple times consecutively, replace it with the character followed by the count.

**Example:**
- Input: `["a", "a", "b", "b", "c", "c", "c"]`
- Output: `["a", "2", "b", "2", "c", "3"]`

---

## How the Code Works

1. **Input**:
   - User is prompted to enter the size of the string.
   - User enters the characters one by one.
2. **Processing**:
   - `compress()` function:
     - Counts consecutive repeated characters.
     - Updates the vector in-place with the character and its count (if more than 1).
3. **Output**:
   - Displays the compressed string on the console.

---

## Files

- `main.cpp`:  
  Contains the full source code to perform string compression using a vector.

---

## Key Functions

- **`compress(vector<char>& chars)`**:  
  Compresses the input character array in-place and returns the new length.

---

## Sample Input/Output

**Input:**
```
Enter the size of the string: 7
Enter the information string:
a a b b c c c
```

**Output:**
```
The compressed string is: a2b2c3
```

---

## Concepts Covered

- In-place modification of data structures.
- String and character manipulation in C++.
- Use of `vector` and `to_string()` function.
- Efficient space handling by resizing the vector.

---

## How to Run

1. Make sure you have a C++ compiler installed (e.g., g++, clang++).
2. Compile the code:
   ```bash
   g++ main.cpp -o compress
   ```
3. Run the executable:
   ```bash
   ./compress
   ```

---

## Notes

- No extra space is used beyond the input vector.
- The code handles single and multiple character repetitions cleanly.
- Useful for understanding basic array/string compression techniques in coding interviews.

---

## License

This project is open-source and available for educational purposes.

---
