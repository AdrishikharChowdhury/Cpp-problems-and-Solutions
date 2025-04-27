
# 🧹 Lecture-25: Remove All Occurrences & Valid Palindrome

This folder contains C++ implementations focusing on **string manipulation**, particularly removing all occurrences of a substring and checking for a valid palindrome while ignoring non-alphanumeric characters.

---

## 📂 Files Included

### 🧾 `Rmove all occurences.cpp`
Removes all **occurrences** of a given substring from the main string.

#### 🔹 Problem Statement:
Given two strings, remove all instances of the second string (`part`) from the first string (`main`).

#### ✅ Highlights:
- Continuously searches and removes the substring until none remain.
- Efficient use of `find()` and `erase()` functions.

#### 📥 Sample I/O:
```
Enter main string: abcdabc
Enter substring: abc
After removing occurrences we get: d
```

---

### 🧾 `Valid Palindrome.cpp`
Checks whether a given string is a **valid palindrome**, considering only alphanumeric characters and ignoring cases.

#### 🔹 Problem Statement:
Given a string, determine if it reads the same backward as forward after removing non-alphanumeric characters and ignoring case.

#### ✅ Highlights:
- Skips non-alphanumeric characters using a helper function `isAlphaNum()`.
- Case-insensitive comparison using `tolower()`.

#### 📥 Sample I/O:
```
Enter a string: A man, a plan, a canal: Panama
The string is Palindrome
```

---

## 🚀 How to Compile & Run

```bash
g++ "Rmove all occurences.cpp" -o remove_occurrences
./remove_occurrences

g++ "Valid Palindrome.cpp" -o valid_palindrome
./valid_palindrome
```

---

## 🧠 Concepts Covered

- String searching and erasing
- Alphanumeric character checking
- Palindrome validation with ignored characters
- Use of STL functions like `find()`, `erase()`, `tolower()`

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)

---
