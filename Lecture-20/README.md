# 🐄 Lecture-20

## 📝 Aggressive Cows Problem

This folder contains a **C++ program** that solves the **Aggressive Cows Problem** using an efficient **Binary Search** approach.

The problem focuses on placing cows in stalls at given positions such that:
- The **minimum distance** between any two cows is **as large as possible**.
- You must place **all cows** in the stalls following this constraint.

This problem is a **popular binary search on answer space** type problem often asked in coding interviews.

---

## 📂 File

- `Agreesive Cows.cpp` *(typo in filename, it should be "Aggressive Cows")* — C++ source code solving the problem.

---

## 🚀 How to Run

1. Open your terminal.
2. Compile the code:
   ```bash
   g++ Agreesive\ Cows.cpp -o aggressive_cows
   ```
3. Run the executable:
   ```bash
   ./aggressive_cows
   ```
4. Provide input as prompted:
   - Number of stalls (positions).
   - Stall positions (distances).
   - Number of cows to place.

---

## 📈 Example

Input:
```
Enter the no. of distances: 5
Enter the distances (in units):
1 2 8 4 9
Enter the number of cows: 3
```

Output:
```
The distance required is 3
```

**Explanation:**
- Sort stall positions → [1, 2, 4, 8, 9]
- Place cows at positions 1, 4, and 8.
- Minimum distance between any two cows is **3** units.

---

## 🛠️ Concepts Used

- **Binary Search on Answer Space**: We search on the possible minimum distances, not directly on stall positions.
- **Greedy Placement**: Place cows greedily with at least `mid` distance apart.
- **Sorting**: Initial sorting of stall positions is crucial.

---

## 🧠 Functions Overview

- `bool isValid(vector<int>& nums, int n, int m, int mid);`
  - Checks if it is possible to place all cows with at least `mid` distance between them.

- `int allocateBooks(vector<int>& nums, int n, int m);`
  - Performs binary search to find the largest minimum distance possible.

---

## 📚 Related Topics

- Binary Search Problems
- Greedy Algorithms
- Optimization Problems
- Competitive Programming Interview Problems

---

## ⚡ Notes

- The filename has a typo: `"Agreesive Cows.cpp"` → ideally should be `"Aggressive Cows.cpp"`.
- This is a **classic interview** question frequently asked by companies like **Google, Amazon, and Facebook**.

---

## ✍️ Author

- **Adrishikhar Chowdhury**

---
