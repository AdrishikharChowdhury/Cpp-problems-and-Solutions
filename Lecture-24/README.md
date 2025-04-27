
# 🧵 Lecture-24: Palindrome Check & Reverse a String

This folder contains C++ implementations demonstrating **string manipulation techniques**, including checking for a palindrome and reversing a string.

---

## 📂 Files Included

### 🧾 `Palindrome string.cpp`
Checks whether a given string is a **palindrome** (reads the same forward and backward).

#### 🔹 Problem Statement:
Given a string, determine if it is a palindrome. Ignore case sensitivity and spaces if needed (basic version considers exact match).

#### ✅ Highlights:
- Compares characters from start and end moving towards the center.
- Returns `true` if all matching, otherwise `false`.

#### 📥 Sample I/O:
```
Enter a string: madam
The string is Palindrome
```

---

### 🧾 `Reverse a string.cpp`
Reverses the characters in a string **in-place** without using extra storage.

#### 🔹 Problem Statement:
Given a string, reverse its characters and print the new string.

#### ✅ Highlights:
- Swaps characters starting from both ends of the string.
- Efficient and simple approach.

#### 📥 Sample I/O:
```
Enter a string: hello
The string before reverse is hello
The string after reverse is olleh
```

---

## 🚀 How to Compile & Run

```bash
g++ "Palindrome string.cpp" -o palindrome_checker
./palindrome_checker

g++ "Reverse a string.cpp" -o reverse_string
./reverse_string
```

---

## 🧠 Concepts Covered

- String reversal using two-pointer technique
- Palindrome checking through character comparison
- Basic understanding of string manipulation in C++

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---
