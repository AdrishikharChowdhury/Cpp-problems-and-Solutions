
# **Lecture-09: Maximum Subarray Sum in C++**

This folder contains **C++ programs** that solve the **Maximum Subarray Sum** problem using two approaches:
1. **Brute Force Method**
2. **Kadane's Algorithm (Optimized Approach)**

---

## **Files in `Cpp problems and solutions/Lecture-09/`**

### **1. `Brute force method.cpp`**
- Finds the **maximum subarray sum** using a **brute force approach**.
- **Time Complexity:** O(n²)
- Iterates through all possible subarrays and calculates their sums to find the maximum.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter the elements:
  -2 1 -3 4 -1
  The maximum sum of the sub array is: 4
  ```

#### **How to Run**
```sh
g++ -o max_subarray_brute "Brute force method.cpp"
./max_subarray_brute
```

---

### **2. `Kadane's Algorithm.cpp`**
- Implements **Kadane's Algorithm** to find the **maximum subarray sum** efficiently.
- **Time Complexity:** O(n)
- Uses a dynamic programming approach to keep track of the current sum and updates the maximum sum as it iterates through the array.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter the elements:
  -2 1 -3 4 -1
  The maximum sum of the sub array is: 4
  ```

#### **How to Run**
```sh
g++ -o max_subarray_kadane "Kadane's Algorithm.cpp"
./max_subarray_kadane
```

---

## **Folder Structure**
```
Cpp problems and solutions/
│── Lecture-09/
│   │── Brute force method.cpp         # Maximum subarray sum using brute force (O(n²))
│   │── Kadane's Algorithm.cpp         # Maximum subarray sum using Kadane's Algorithm (O(n))
│   │── README.md                      # Documentation
```

---

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **Terminal/Command Prompt** to run the compiled executables.

---

## **How to Compile & Run C++ Programs**
1. **Navigate to the `Lecture-09` folder**:
   ```sh
   cd "Cpp problems and solutions/Lecture-09"
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
- **Brute Force Approach**: Calculates sums for all possible subarrays.
- **Kadane's Algorithm**: Efficiently solves the problem in linear time using dynamic programming.
- **Dynamic Programming**: Keeps track of local maximum sums to build the global maximum sum.

---

### **License**
This project is for **educational purposes** only.
