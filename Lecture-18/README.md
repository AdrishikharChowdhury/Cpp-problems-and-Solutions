# 📚 Lecture-18

## 📝 Book Allocation Problem

This folder contains a **C++ implementation** of the **Book Allocation Problem**, typically found in coding platforms like **LeetCode**, **GFG**, and **interview preparations**.

The objective of the problem is to allocate books to students such that the **maximum number of pages assigned to a student is minimized** while following these rules:
- Each student must be assigned at least one book.
- Each book must be allocated exactly once.
- Book allocations must be contiguous (no skipping books).

---

## 📂 Files

- `Book Allocation Problem.cpp` — Source code solving the Book Allocation Problem using **Binary Search** and **Greedy Checking**.

---

## 🚀 How to Run

1. Open a terminal and navigate to the folder.
2. Compile the code:
   ```bash
   g++ Book\ Allocation\ Problem.cpp -o book_allocation
   ```
3. Run the executable:
   ```bash
   ./book_allocation
   ```

4. Provide inputs when prompted:
   - Number of books.
   - Number of pages for each book.
   - Number of students.

---

## 📈 Example

Input:
```
Enter the no. of books: 4
Enter the no. of pages:
12 34 67 90
Enter the number of students to allocate books: 2
```

Output:
```
The minimum number of pages is 113
```

Explanation:  
- The allocation [12, 34, 67] and [90] results in a maximum of 113 pages assigned to a student, which is the minimized value.

---

## 🛠️ Concepts Used

- **Binary Search on Answer Space**: Instead of searching through the list, we search through the possible range of answers.
- **Greedy Validation**: Check if a given maximum page limit can be achieved with the given number of students.
- **Efficient Summation**: Using a simple sum function to assist in setting the search boundaries.

---

## 🧠 Functions Overview

- `bool isValid(vector<int>& nums, int n, int m, int mid);`
  - Checks if it is possible to allocate books within the given maximum page limit.
  
- `int sumofElements(vector<int>& nums);`
  - Calculates the total number of pages (sum of the array).

- `int allocateBooks(vector<int>& nums, int n, int m);`
  - Uses Binary Search to find the minimum maximum number of pages.

---

## 📚 Related Topics

- Divide and Conquer
- Binary Search on Answers
- Greedy Algorithms
- Interview Preparation Problems

---

## ✍️ Author

- **Adrishikhar Chowdhury**

---
