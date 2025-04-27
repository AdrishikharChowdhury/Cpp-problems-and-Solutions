# 🔁 Lecture-15: Leetcode 33 – Search in Rotated Sorted Array

This folder contains a C++ solution to **Leetcode Problem 33**, where the objective is to search for a target element in a **rotated sorted array** using an optimized binary search.

---

## 📂 File Included

### 🧾 `Leetcode 33.cpp`
Solves the problem using a modified binary search algorithm that handles rotation.

#### 🔹 Problem Statement:
Given a rotated sorted array (no duplicates), return the index of a target value. If it's not found, return `-1`. The algorithm must run in **O(log n)** time.

#### 📥 Sample I/O:
```
Enter the size of the array: 7
Enter the elements:
4 5 6 7 0 1 2
Enter the value you want to search: 0
Element found at pos 5
```

---

## 🚀 How to Compile & Run

```bash
g++ "Leetcode 33.cpp" -o search_rotated
./search_rotated
```

---

## 🧠 Concepts Covered

- Rotated sorted array search
- Modified binary search
- Time Complexity: **O(log n)**
- Handles both left-sorted and right-sorted halves during search

---

## ⚙️ Algorithm Breakdown

1. Find mid index using `mid = start + (end - start) / 2`
2. Determine which half is sorted (left or right)
3. If the target lies within the sorted half, narrow the search to that side
4. Else, continue searching the other half

---

## 🧪 Example

For array `[4, 5, 6, 7, 0, 1, 2]` and target `0`, the program outputs:

```
Element found at pos 5
```

(Positions are 1-indexed in output)

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---

> 🔍 This lecture explores the power of binary search even in non-traditionally sorted arrays through clever pivot logic.