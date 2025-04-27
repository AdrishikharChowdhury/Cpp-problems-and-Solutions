
# **Lecture-10: Majority Element Problem in C++**

This folder contains **C++ programs** that solve the **Majority Element Problem** using three distinct methods:
1. **Brute Force Approach**
2. **Sorting Approach**
3. **Moore's Voting Algorithm (Optimized Approach)**

---

## **Problem Statement**
A **majority element** in an array of size `n` is an element that appears **more than `n/2` times**. If no such element exists, return `-1`.

---

## **Files in `Cpp problems and solutions/Lecture-10/majority element/`**

### **1. `Brute Force approach.cpp`**
- Finds the **majority element** by checking the frequency of each element.
- **Time Complexity:** O(n²)
- Compares every element with all others to count occurrences.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter the elements:
  2 2 1 1 2
  The majority element is: 2
  ```

#### **How to Run**
```sh
g++ -o majority_brute "Brute Force approach.cpp"
./majority_brute
```

---

### **2. `Sorting approach.cpp`**
- Sorts the array and checks consecutive elements to find the **majority element**.
- **Time Complexity:** O(n log n) (due to sorting)
- Once sorted, the majority element (if present) will be at the center of the array.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter the elements:
  3 3 4 2 3
  The majority element is: 3
  ```

#### **How to Run**
```sh
g++ -o majority_sort "Sorting approach.cpp"
./majority_sort
```

---

### **3. `Moore's voting algorithm.cpp`**
- Implements **Moore's Voting Algorithm** to find the majority element in linear time.
- **Time Complexity:** O(n)
- Efficiently tracks a candidate and verifies it in a second pass.

- **Example Input/Output:**
  ```
  Enter the size of the array: 6
  Enter the elements:
  1 1 1 2 2 1
  The majority element is: 1
  ```

#### **How to Run**
```sh
g++ -o majority_moore "Moore's voting algorithm.cpp"
./majority_moore
```

---

## **Folder Structure**
```
Cpp problems and solutions/
│── Lecture-10/
│   └── majority element/
│       ├── Brute Force approach.cpp         # Find majority element using brute force (O(n²))
│       ├── Sorting approach.cpp             # Find majority element using sorting (O(n log n))
│       ├── Moore's voting algorithm.cpp     # Find majority element using Moore's voting algorithm (O(n))
│       ├── README.md                        # Documentation
```

---

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **Terminal/Command Prompt** to run the compiled executables.

---

## **How to Compile & Run C++ Programs**
1. **Navigate to the `majority element` folder**:
   ```sh
   cd "Cpp problems and solutions/Lecture-10/majority element"
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
- **Brute Force Approach**: Checks every possible pair to count occurrences.
- **Sorting-Based Approach**: Leverages array sorting to find the majority element.
- **Moore's Voting Algorithm**: An optimized algorithm that identifies the majority element in **O(n)** time with **O(1)** space.

---

### **License**
This project is for **educational purposes** only.

---