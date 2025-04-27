
# **Lecture-07: Array Operations in C++**

This folder contains **C++ programs** that focus on fundamental **array operations** like searching, finding intersections, reversing arrays, and computing sum/product.

---

## **Files in `Cpp problems and solutions/Lecture-07/`**

### **1. `Intersection of two arrays.cpp`**
- Finds the **common elements** (intersection) between two arrays.
- Takes two arrays as input and outputs shared elements.

- **Example Input/Output:**
  ```
  Enter the size of the 1st array: 4
  Enter the elements:
  1 2 3 4
  Enter the size of the 2nd array: 4
  Enter the elements:
  3 4 5 6
  The unique values are:
  3  4
  ```

#### **How to Run**
```sh
g++ -o intersection "Intersection of two arrays.cpp"
./intersection
```

---

### **2. `Linear Search.cpp`**
- Performs a **linear search** to find an element in an array.
- Returns the position of the element if found, otherwise returns not found.

- **Example Input/Output:**
  ```
  Enter the numbers in the array:
  5 10 15 20 25 30
  Enter the element you have to search: 20
  Element has been found at position 4
  ```

#### **How to Run**
```sh
g++ -o linear_search "Linear Search.cpp"
./linear_search
```

---

### **3. `min and max value in an array.cpp`**
- Finds the **minimum and maximum** values in an array along with their positions.

- **Example Input/Output:**
  ```
  Enter the numbers in the array:
  5 3 9 1 6 4
  Maximum Element: 9 at index: 2
  Minimum Element: 1 at index: 3
  ```

#### **How to Run**
```sh
g++ -o min_max "min and max value in an array.cpp"
./min_max
```

---

### **4. `print unique values of array.cpp`**
- Prints the **unique values** from an array (values that appear only once).

- **Example Input/Output:**
  ```
  Enter the size of the array: 6
  1 2 2 3 4 4
  The unique values are:
  1  3
  ```

#### **How to Run**
```sh
g++ -o unique_values "print unique values of array.cpp"
./unique_values
```

---

### **5. `Reverse an array.cpp`**
- Reverses the elements in an array and displays the result.

- **Example Input/Output:**
  ```
  Enter the elements:
  1 2 3 4 5 6
  Before reversing the elements:
  1 2 3 4 5 6
  After reversing the elements:
  6 5 4 3 2 1
  ```

#### **How to Run**
```sh
g++ -o reverse_array "Reverse an array.cpp"
./reverse_array
```

---

### **6. `Sum and Product off array.cpp`**
- Calculates the **sum** and **product** of all elements in an array.

- **Example Input/Output:**
  ```
  Enter the size of the array: 4
  Enter 4 elements:
  1 2 3 4
  Sum of the elements: 10
  Product of the elements: 24
  ```

#### **How to Run**
```sh
g++ -o sum_product "Sum and Product off array.cpp"
./sum_product
```

---

### **7. `Swap min and max.cpp`**
- Swaps the **minimum** and **maximum** elements in an array.

- **Example Input/Output:**
  ```
  Enter the size of the array: 5
  Enter 5 elements:
  3 9 2 8 5
  Before swapping:
  3  9  2  8  5
  After swapping:
  3  2  9  8  5
  ```

#### **How to Run**
```sh
g++ -o swap_min_max "Swap min and max.cpp"
./swap_min_max
```

---

## **Folder Structure**
```
Cpp problems and solutions/
│── Lecture-07/
│   │── Intersection of two arrays.cpp        # Find intersection of two arrays
│   │── Linear Search.cpp                     # Perform linear search in an array
│   │── min and max value in an array.cpp     # Find min and max in an array
│   │── print unique values of array.cpp      # Print unique values from an array
│   │── Reverse an array.cpp                  # Reverse the elements of an array
│   │── Sum and Product off array.cpp         # Compute sum and product of array elements
│   │── Swap min and max.cpp                  # Swap minimum and maximum elements
│   │── README.md                             # Documentation
```

---

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **Terminal/Command Prompt** to run the compiled executables.

---

## **How to Compile & Run C++ Programs**
1. **Navigate to the `Lecture-07` folder**:
   ```sh
   cd "Cpp problems and solutions/Lecture-07"
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
- **Array Manipulation**: Reversing, swapping, and unique value identification.
- **Searching Algorithms**: Linear search technique.
- **Mathematical Operations**: Sum, product, and intersection of arrays.

---

### **License**
This project is for **educational purposes** only.

---
