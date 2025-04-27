### 📂 Lecture-17

#### 📝 Description
This folder contains a C++ program that implements an **efficient binary search algorithm** to find the single non-duplicate element in a **sorted array** where every other element appears exactly twice.

---

#### 🔍 Problem Statement

Given a **sorted array** in which every element appears **exactly twice** except for one element which appears **only once**, find and return that single element.

---

#### 📌 Files

- `main.cpp`  
  Contains the complete implementation of the binary search-based solution.

---

#### 🧠 Concepts Covered

- **Binary Search** in sorted arrays
- Optimized time complexity: **O(log n)**
- Edge-case handling for single-element arrays and boundary indices
- Use of **bit manipulation logic** (even/odd index behavior with duplicates)

---

#### ▶️ How to Run

1. **Compile the code** using a C++ compiler:
   ```bash
   g++ main.cpp -o findSingle
   ```

2. **Run the executable**:
   ```bash
   ./findSingle
   ```

3. **Input** the size of the array and the elements.

---

#### 💡 Sample Input/Output

```
Enter the size of the array: 7
Enter the elements:
1 1 2 2 3 4 4
The single element is 3
```

---

#### ⚠️ Constraints

- The array must be sorted.
- All elements appear exactly twice, **except one**.
- The array size is always odd (to accommodate a single unique element).

---

#### 📚 Related Topics

- Binary Search Problems
- Bitwise Index Manipulation
- Searching Algorithms
- Array Edge-Case Handling

---
