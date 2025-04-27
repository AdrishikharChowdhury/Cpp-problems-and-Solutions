
# 🔀 Lecture-26: Permutation in a String

This folder contains a C++ implementation that checks if a given string contains a **permutation** of another string.

---

## 📂 File Included

### 🧾 `Permutation in a string.cpp`
Determines if one string (`s1`) is a permutation of a substring within another string (`s2`).

#### 🔹 Problem Statement:
Given two strings, check if `s1`'s permutation exists as a substring in `s2`.

#### ✅ Highlights:
- Frequency arrays (`freq`) are used to compare character counts.
- Sliding window technique manually applied.
- Helper function `isFreqSame()` checks if two frequency arrays match.

#### 📥 Sample I/O:
```
Enter the main string: eidbaooo
Enter the substring: ab
The substring is found in main string
```

---

## 🚀 How to Compile & Run

```bash
g++ "Permutation in a string.cpp" -o permutation_check
./permutation_check
```

---

## 🧠 Concepts Covered

- String permutation checking
- Character frequency counting
- Manual sliding window approach
- Use of arrays for efficient comparison

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---
