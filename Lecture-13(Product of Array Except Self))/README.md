# 🔄 Lecture-13: Product of Array Except Self – Brute Force vs Optimal

This folder contains two C++ implementations of the **"Product of Array Except Self"** problem. The objective is to compute a new array where each element at index `i` is the product of all the numbers in the original array except the one at `i`, without using division.

---

## 📂 Files Included

### 1️⃣ `Brute Force method.cpp`
A basic approach that uses nested loops to multiply all elements except the current one.

#### 🔹 Key Concepts:
- Direct multiplication skipping the current index
- Simple logic, but inefficient for large arrays
- Time Complexity: **O(n²)**

#### 📥 Sample I/O:
```
Enter the size of the array: 4
Enter the elements:
1 2 3 4
The array after multiplication is: 24 12 8 6
```

---

### 2️⃣ `Optimal method.cpp`
Uses prefix and suffix products to build the result in **O(n)** time without division.

#### 🔹 Key Concepts:
- Two-pass traversal
- First pass builds prefix product array
- Second pass updates with suffix products in-place
- Time Complexity: **O(n)**

#### 📥 Sample I/O:
```
Enter the size of the array: 4
Enter the elements:
1 2 3 4
The array after multiplication is: 24 12 8 6
```

---

## 🚀 How to Compile & Run

```bash
g++ "Brute Force method.cpp" -o brute
./brute

g++ "Optimal method.cpp" -o optimal
./optimal
```

---

## 📊 Performance Comparison

| Method        | Time Complexity | Space Complexity |
|---------------|-----------------|------------------|
| Brute Force   | O(n²)           | O(n)             |
| Optimal       | O(n)            | O(n)             |

---

## 🧠 Concepts Covered

- Array prefix/suffix product logic
- Time complexity optimization
- Multiplicative logic without division

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---

> 🧮 Lecture 13 emphasizes optimization by comparing naive and efficient methods for a common array-based interview problem.