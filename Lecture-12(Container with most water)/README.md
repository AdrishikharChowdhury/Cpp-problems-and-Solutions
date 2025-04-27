# 🚰 Lecture-12: Container With Most Water – Brute Force vs Two Pointer

This folder contains two C++ programs demonstrating the **"Container With Most Water"** problem, a popular algorithmic challenge. The programs showcase two approaches: **brute force** and the **optimal two-pointer technique**.

---

## 📂 Files Included

### 1️⃣ `Brute force method.cpp`
A straightforward implementation using nested loops to check every possible pair of lines and calculate the area.

#### 🔹 Key Concepts:
- Calculates area between all pairs of heights
- Maximum area is updated during each iteration
- Time Complexity: **O(n²)**

#### 📥 Sample I/O:
```
Enter the size of the heights list: 6
Enter the heights:
1 8 6 2 5 4
The counter can store 24 amount of water
```

---

### 2️⃣ `Optimal Two pointer method.cpp`
An efficient solution using a **two-pointer approach** to minimize time complexity.

#### 🔹 Key Concepts:
- Starts with two pointers at both ends
- Moves the pointer pointing to the smaller height inward
- Time Complexity: **O(n)**

#### 📥 Sample I/O:
```
Enter the size of the heights list: 6
Enter the heights:
1 8 6 2 5 4
The counter can store 24 amount of water
```

---

## 🚀 How to Compile & Run

To compile and run either file, use:

```bash
g++ "Brute force method.cpp" -o brute
./brute

g++ "Optimal Two pointer method.cpp" -o optimal
./optimal
```

---

## 🧠 Concepts Covered

- Brute-force search in arrays
- Two-pointer optimization technique
- Maximizing the area between vertical lines
- Time-space tradeoff analysis

---

## 📊 Performance Comparison

| Method              | Time Complexity | Space Complexity |
|---------------------|-----------------|------------------|
| Brute Force         | O(n²)           | O(1)             |
| Two Pointer Method  | O(n)            | O(1)             |

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---

> 🧪 This lecture illustrates the power of algorithmic thinking by comparing brute force and optimal methods side by side.
