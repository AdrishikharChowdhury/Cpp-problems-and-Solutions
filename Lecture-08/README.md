
# **Lecture-08: Array Operations using Vectors in C++**

This folder contains **C++ programs** that demonstrate fundamental **array operations** using the **`vector`** container from the **C++ Standard Template Library (STL)**. The programs focus on tasks like **linear searching** and **reversing arrays**.

---

## **Files in `Cpp problems and solutions/Lecture-08/`**

### **1. `Linear Search_vector.cpp`**
- Performs a **linear search** on a `vector<int>` to find a specific element.
- Returns the position of the element if found, otherwise indicates that the value is not found.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter the elements:
  10 20 30 40 50
  Enter the value you want to search: 30
  Value found in the array at position: 3
  ```

#### **How to Run**
```sh
g++ -o linear_search_vector "Linear Search_vector.cpp"
./linear_search_vector
```

---

### **2. `reverse an array_vector.cpp`**
- Reverses the elements of a `vector<int>` using an in-place swap algorithm.
- Demonstrates how to manipulate vectors efficiently.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter the elements:
  1 2 3 4 5
  The reversed elements are:
  5 4 3 2 1
  ```

#### **How to Run**
```sh
g++ -o reverse_vector "reverse an array_vector.cpp"
./reverse_vector
```

---

## **Folder Structure**
```
Cpp problems and solutions/
│── Lecture-08/
│   │── Linear Search_vector.cpp         # Perform linear search using vectors
│   │── reverse an array_vector.cpp      # Reverse array elements using vectors
│   │── README.md                        # Documentation
```

---

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **C++ Standard Library** for vector operations.
- **Terminal/Command Prompt** to run the compiled executables.

---

## **How to Compile & Run C++ Programs**
1. **Navigate to the `Lecture-08` folder**:
   ```sh
   cd "Cpp problems and solutions/Lecture-08"
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
- **C++ Vectors**: Dynamic arrays that can grow or shrink in size.
- **STL Operations**: Efficient manipulation of arrays using the `vector` container.
- **Basic Algorithms**: Linear search and in-place array reversal.

---

### **License**
This project is for **educational purposes** only.
