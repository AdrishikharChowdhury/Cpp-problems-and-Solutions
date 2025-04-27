# 🎨 Lecture-19

## 📝 Painter's Partition Problem

This folder contains a **C++ program** that solves the famous **Painter's Partition Problem** using **Binary Search** and **Greedy Checking**.

The problem involves allocating boards of various lengths to painters such that:
- Each painter paints **contiguous** sections of boards.
- The objective is to **minimize the maximum time** taken by any painter.

---

## 📂 File

- `Painter's Partition problem.cpp` — C++ source code implementing the solution.

---

## 🚀 How to Run

1. Open a terminal.
2. Compile the code:
   ```bash
   g++ Painter\'s\ Partition\ problem.cpp -o painters_partition
   ```
3. Run the executable:
   ```bash
   ./painters_partition
   ```
4. Input:
   - Number of boards.
   - Lengths of each board.
   - Number of painters available.

---

## 📈 Example

Input:
```
Enter the no. of boards: 4
Enter the length of board (in units):
10 20 30 40
Enter the number of painters to allocate boards: 2
```

Output:
```
The minimum number of time required is 60
```

**Explanation:**
- One painter paints boards with lengths [10, 20, 30] = 60
- Second painter paints [40]

Thus, the **maximum time taken** by any painter is minimized to **60 units**.

---

## 🛠️ Concepts Used

- **Binary Search on Answer Space**: Search for the minimal feasible maximum board length.
- **Greedy Allocation Check**: Assign boards to painters based on current maximum time limit.
- **Optimization**: Ensures the load is balanced across painters with minimal peak time.

---

## 🧠 Functions Overview

- `bool isValid(vector<int>& nums, int n, int m, int mid);`
  - Checks if it’s possible to allocate boards within the given max time (`mid`) to `m` painters.

- `int sumofElements(vector<int>& nums);`
  - Computes the total sum of all board lengths (useful for binary search bounds).

- `int allocateBooks(vector<int>& nums, int n, int m);`
  - Performs binary search to find the minimum time required.

---

## 📚 Related Topics

- Divide and Conquer
- Binary Search Applications
- Greedy Algorithms
- Interview Questions in Competitive Programming

---

## ✍️ Author

- **Adrishikhar Chowdhury**

---
