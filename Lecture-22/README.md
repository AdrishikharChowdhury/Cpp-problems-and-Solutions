# 📚 Lecture-22

## 📝 Sort 0s, 1s, and 2s (Dutch National Flag Algorithm)

This folder contains **C++ programs** solving the classic **Sort Colors** problem, where an array consisting only of **0s, 1s, and 2s** must be sorted **in a single pass** or with **optimized methods**.

The problem is a well-known example of **in-place sorting** and **array manipulation**, commonly referred to as the **Dutch National Flag Problem**.

---

## 📂 Files

- `DNF Algorithm.cpp` — Implements **Dutch National Flag Algorithm** (one-pass, in-place sorting).
- `Optimized Method.cpp` — Implements **Counting Method** (two-pass optimized sorting).

---

## 🚀 How to Run

For each file individually:

1. Open a terminal.
2. Compile the C++ file:
   ```bash
   g++ DNF\ Algorithm.cpp -o dnf_algorithm
   g++ Optimized\ Method.cpp -o optimized_method
   ```
3. Run the executable:
   ```bash
   ./dnf_algorithm
   ./optimized_method
   ```
4. Provide the required input:
   - Size of the array
   - Elements (only 0s, 1s, and 2s)

---

## 📈 Example

Input:
```
Enter the size of the array: 6
Fill the array with 0s, 1s and 2s:
2 0 2 1 1 0
```

Output:
```
The array before sorting is...
2 0 2 1 1 0
The array after sorting is.....
0 0 1 1 2 2
```

---

## 🛠️ Concepts Used

- **Dutch National Flag Algorithm (DNF):**
  - Three pointers approach (`low`, `mid`, `high`).
  - Single-pass sorting (O(N) time, O(1) space).
  - In-place swaps to arrange 0s, 1s, and 2s correctly.

- **Optimized Counting Method:**
  - Count occurrences of 0s, 1s, and 2s.
  - Reconstruct the array based on counts.
  - Slightly less optimal since it needs two passes.

---

## 🧠 Functions Overview

Both programs use:

- `void display(vector<int>& nums);`
  - Displays the elements of the array.

- Sorting functions:
  - `void sortColors(vector<int>& nums);`
    - Logic varies based on the file:
      - DNF Algorithm uses pointer manipulation.
      - Optimized Method uses counting.

---

## 📚 Related Topics

- Array Manipulation
- Two-Pointer Technique
- In-Place Sorting
- Interview Preparation (Amazon, Google, Microsoft)

---

## ✍️ Author

- **Adrishikhar Chowdhury**

---
