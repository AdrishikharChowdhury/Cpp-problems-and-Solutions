# 🏔️ Lecture-16: Leetcode 852 – Peak Index in a Mountain Array

This folder contains a C++ implementation of **Leetcode Problem 852**, where the task is to find the **peak index** in a "mountain" array using **binary search**.

---

## 📂 File Included

### 🧾 `Leetcode-852.cpp`
Finds the index of the peak element in a strictly increasing then strictly decreasing array (a mountain array).

#### 🔹 Problem Statement:
You are given an array `arr` representing a mountain array. Return the index `i` such that:
```
arr[0] < arr[1] < ... < arr[i] > arr[i+1] > ... > arr[arr.length - 1]
```

#### ✅ Constraints:
- Array length ≥ 3
- A valid peak always exists
- Time complexity requirement: **O(log n)**

#### 📥 Sample I/O:
```
Enter the size of the array: 7
Enter the elements:
1 3 5 7 6 4 2
The peak element is at pos 4
```

---

## 🚀 How to Compile & Run

```bash
g++ "Leetcode-852.cpp" -o peak_finder
./peak_finder
```

---

## 🧠 Concepts Covered

- Binary Search in a specialized array pattern
- Peak finding in O(log n)
- Efficient use of mid comparisons for navigation

---

## ⚙️ Algorithm Logic

1. Use binary search starting from index 1 to `n-2` (to avoid boundary checks).
2. For each `mid`, compare `arr[mid]` with `arr[mid+1]` and `arr[mid-1]`:
   - If it is greater than both, it is the peak.
   - If the sequence is still rising, move `start` to `mid + 1`.
   - If the sequence is falling, move `end` to `mid - 1`.

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---

> 🚀 Lecture 16 focuses on applying binary search to solve peak-finding problems efficiently in specialized arrays.