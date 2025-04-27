
# 🧩 Lecture-23: Merge Two Sorted Arrays & Next Permutation

This folder contains C++ implementations focusing on **array manipulation techniques**, including merging sorted arrays and finding the next permutation.

---

## 📂 Files Included

### 🧾 `Merge two sorted arrays.cpp`
Merges two sorted arrays into one sorted array **in-place**, without using extra memory.

#### 🔹 Problem Statement:
Given two sorted arrays, merge them into one sorted array such that the final array remains sorted.

#### ✅ Highlights:
- Merges from the end to avoid overwriting elements.
- No extra space used except the given arrays.

#### 📥 Sample I/O:
```
Enter the size of the 1st array: 3
Enter the 1st array elements:
1 2 4
Enter the size of the 2nd array: 2
Enter the 2nd array elements:
3 5
After merging the elements are:
1 2 3 4 5
```

---

### 🧾 `Next permutation.cpp`
Finds the **next lexicographical permutation** of a given integer array.

#### 🔹 Problem Statement:
Given an array of integers, rearrange it to the next greater permutation. If not possible, rearrange to the lowest possible order (ascending).

#### ✅ Highlights:
- Finds pivot where array starts decreasing.
- Swaps and reverses to get the next permutation.

#### 📥 Sample I/O:
```
Enter the size of the array: 3
Enter the elements:
1 2 3
The next permutation would be:
1 3 2
```

---

## 🚀 How to Compile & Run

```bash
g++ "Merge two sorted arrays.cpp" -o merge_arrays
./merge_arrays

g++ "Next permutation.cpp" -o next_permutation
./next_permutation
```

---

## 🧠 Concepts Covered

- In-place merging of arrays
- Greedy algorithms
- Finding next permutations
- Array element manipulation without extra space

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---
