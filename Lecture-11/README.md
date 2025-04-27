# 📘 Lecture-11: C++ Programs

This folder contains two C++ programs demonstrated as part of **Lecture 11**, focusing on common algorithmic patterns in problem-solving.

---

## 📂 Files Included

### 1️⃣ `power(x,n).cpp`
Efficient computation of `xⁿ` using **Exponentiation by Squaring**. This method ensures reduced time complexity, especially beneficial for large exponents.

#### 🔹 Key Concepts:
- Handles both positive and negative powers
- Implements binary exponentiation
- Time Complexity: **O(log n)**

#### 📥 Sample I/O:
```
Enter the base: 2
Enter the power: 10
The ans is 1024
```

---

### 2️⃣ `stock buy and sell.cpp`
Implements a greedy algorithm to calculate the **maximum profit** from a series of stock prices, assuming you buy and sell **once**.

#### 🔹 Key Concepts:
- Single pass O(n) solution
- Tracks minimum price and maximum profit dynamically
- Ideal for interview preparation

#### 📥 Sample I/O:
```
Enter the size of the prices list: 6
Enter the prices of the stocks:
7 1 5 3 6 4
The maximum profit gained is: 5
```

---

## 🛠️ How to Compile & Run

Use any C++ compiler (like `g++`):

```bash
g++ power(x,n).cpp -o power
./power

g++ stock\ buy\ and\ sell.cpp -o stock
./stock
```

---

## 🧠 Concepts Covered

- Exponentiation by squaring (Math optimization)
- Greedy approach in finance-related problems
- Time-efficient algorithms using logical conditions

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---

> ✨ These programs are part of the algorithmic foundations being built in Lecture 11.