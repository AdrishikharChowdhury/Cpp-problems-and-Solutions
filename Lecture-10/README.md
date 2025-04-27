
# **Lecture-10: Advanced Array Problems in C++**

This lecture focuses on solving two important array-related problems in C++:
1. **Majority Element Problem**
2. **Pair Sum Problem (Two Sum)**

Each problem is solved using multiple approaches, ranging from brute force methods to optimized algorithms like **Moore's Voting Algorithm** and the **Two-Pointer Technique**.

---

## **Folders in `Cpp problems and solutions/Lecture-10/`**

### **1. `majority element/`**
This folder contains solutions to the **Majority Element Problem**, where we find the element that appears more than `n/2` times in an array.

#### **Files:**
- **`Brute Force approach.cpp`**: O(n²) time complexity.
- **`Sorting approach.cpp`**: O(n log n) time complexity (due to sorting).
- **`Moore's voting algorithm.cpp`**: O(n) time complexity with O(1) space.

---

### **2. `PairSum/`**
This folder solves the **Pair Sum Problem** (Two Sum), where we find two numbers in the array that add up to a given target.

#### **Files:**
- **`Brute force method.cpp`**: O(n²) time complexity.
- **`Optimized approach.cpp`**: O(n) time complexity using the Two-Pointer Technique (for sorted arrays).

---

## **Folder Structure**
```
Cpp problems and solutions/
│── Lecture-10/
│   ├── majority element/
│   │   ├── Brute Force approach.cpp         # Find majority element using brute force
│   │   ├── Sorting approach.cpp             # Find majority element using sorting
│   │   ├── Moore's voting algorithm.cpp     # Find majority element using Moore's Voting Algorithm
│   │   └── README.md                        # Documentation for Majority Element Problem
│   │
│   ├── PairSum/
│   │   ├── Brute force method.cpp           # Solve pair sum problem using brute force
│   │   ├── Optimized approach.cpp           # Solve pair sum problem using two-pointer approach
│   │   └── README.md                        # Documentation for Pair Sum Problem
│   │
│   └── README.md                            # Overall Documentation for Lecture-10
```

---

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **Terminal/Command Prompt** to run the compiled executables.

---

## **How to Compile & Run C++ Programs**
1. **Navigate to the `Lecture-10` folder**:
   ```sh
   cd "Cpp problems and solutions/Lecture-10"
   ```
2. **Compile any program**:
   ```sh
   g++ -o outputname foldername/filename.cpp
   ```
3. **Run the compiled program**:
   ```sh
   ./outputname
   ```

---

## **Key Concepts Covered**
- **Majority Element Problem**:
  - Brute Force Approach
  - Sorting-Based Solution
  - Moore's Voting Algorithm (Optimized)

- **Pair Sum Problem (Two Sum)**:
  - Brute Force Approach
  - Optimized Two-Pointer Technique

---

### **License**
This project is for **educational purposes** only.

---