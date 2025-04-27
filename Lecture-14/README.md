# 🔍 Lecture-14: Binary Search – Iterative vs Recursive

This folder contains two C++ implementations of **Binary Search** — a fundamental searching algorithm used in sorted arrays. The lecture compares the **iterative** and **recursive** versions to highlight efficiency and approach differences.

---

## 📂 Files Included

### 1️⃣ `Binary Search.cpp`
Implements **Iterative Binary Search** on a sorted array.

#### 🔹 Key Concepts:
- Uses a `while` loop to narrow down the search space
- Tracks `low`, `high`, and `mid` indices
- Efficient and avoids stack overflow

#### 📥 Sample I/O:
```
Enter the size of the array: 5
Enter the elements:
4 1 3 2 5
This is your sorted elements:
1 2 3 4 5
Enter the value you want to search: 3
Element found at pos 3
```

---

### 2️⃣ `Binary Search recursive.cpp`
Implements **Recursive Binary Search** using a function that calls itself.

#### 🔹 Key Concepts:
- Elegant and short logic using recursion
- Base condition: `low > high` indicates element not found
- Returns index if found, else `-1`

#### 📥 Sample I/O:
```
Enter the size of the array: 5
Enter the elements:
4 1 3 2 5
This is your sorted elements:
1 2 3 4 5
Enter the value you want to search: 2
Element found at pos 2
```

---

## 🚀 How to Compile & Run

```bash
g++ "Binary Search.cpp" -o binary_iter
./binary_iter

g++ "Binary Search recursive.cpp" -o binary_rec
./binary_rec
```

---

## 🧠 Concepts Covered

- Binary Search (logarithmic search on sorted arrays)
- Iteration vs Recursion
- Time Complexity: **O(log n)** in both cases
- Sorting input with Bubble Sort before search

---

## 📊 Comparison

| Approach   | Time Complexity | Space Complexity | Notes                      |
|------------|-----------------|------------------|----------------------------|
| Iterative  | O(log n)        | O(1)              | Stack-safe, preferred in practice |
| Recursive  | O(log n)        | O(log n)          | Simpler, but can hit stack limits |

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---

> 📘 This lecture lays the foundation for understanding recursive vs iterative problem-solving in searching algorithms.
