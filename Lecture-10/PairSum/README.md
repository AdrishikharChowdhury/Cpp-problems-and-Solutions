
# **Lecture-10: Pair Sum Problem in C++**

This folder contains **C++ programs** that solve the **Pair Sum Problem** (also known as the **Two Sum Problem**) using two approaches:
1. **Brute Force Method**
2. **Optimized Approach (Two-Pointer Technique)**

---

## **Problem Statement**
Given an array of integers `nums` and an integer `target`, find the indices of two numbers such that they add up to the `target`. Assume exactly one solution exists, and the same element cannot be used twice.

---

## **Files in `Cpp problems and solutions/Lecture-10/PairSum/`**

### **1. `Brute force method.cpp`**
- Solves the **Pair Sum Problem** using a **brute force approach**.
- **Time Complexity:** O(n²)
- Iterates through all possible pairs to check if their sum matches the target.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter the elements:
  2 7 11 15 1
  Enter the target: 9
  1st index: 0
  2nd index: 1
  ```

#### **How to Run**
```sh
g++ -o pair_sum_brute "Brute force method.cpp"
./pair_sum_brute
```

---

### **2. `Optimized approach.cpp`**
- Uses the **Two-Pointer Technique** for an optimized solution.
- **Time Complexity:** O(n) (if the array is sorted)
- Adjusts pointers based on the sum relative to the target.

- **Note:** The array should be sorted for this approach to work correctly.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter the elements:
  1 2 7 11 15
  Enter the target: 9
  1st index: 1
  2nd index: 2
  ```

#### **How to Run**
```sh
g++ -o pair_sum_optimized "Optimized approach.cpp"
./pair_sum_optimized
```

---

## **Folder Structure**
```
Cpp problems and solutions/
│── Lecture-10/
│   └── PairSum/
│       ├── Brute force method.cpp       # Solve pair sum problem using brute force (O(n²))
│       ├── Optimized approach.cpp       # Solve pair sum problem using two-pointer approach (O(n))
│       ├── README.md                    # Documentation
```

---

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **Terminal/Command Prompt** to run the compiled executables.

---

## **How to Compile & Run C++ Programs**
1. **Navigate to the `PairSum` folder**:
   ```sh
   cd "Cpp problems and solutions/Lecture-10/PairSum"
   ```
2. **Compile any program**:
   ```sh
   g++ -o outputname filename.cpp
   ```
3. **Run the compiled program**:
   ```sh
   ./outputname
   ```

---

## **Key Concepts Covered**
- **Brute Force Approach**: Tests all possible pairs to find the correct sum.
- **Two-Pointer Technique**: Optimizes the process by adjusting pointers based on the sum relative to the target.
- **Vector Manipulation**: Efficient use of C++ vectors to handle dynamic arrays.

---

### **License**
This project is for **educational purposes** only.

---