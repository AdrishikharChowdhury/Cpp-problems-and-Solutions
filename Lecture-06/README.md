
# **Lecture-07: Number Operations in C++**

This folder contains **C++ programs** that focus on mathematical operations like **checking powers of two** (using different methods) and **reversing a number**.

---

## **Files in `Cpp problems and solutions/Lecture-07/`**

### **1. `power of 2 with loop.cpp`**
- Checks if a number is a **power of 2** using a **loop-based** approach.
- Continuously divides the number by 2 and checks if it reaches 1 without remainder.

- **Example Input/Output:**
  ```
  Enter the number: 16
  The number is a power of two
  ```

#### **How to Run**
```sh
g++ -o power_loop "power of 2 with loop.cpp"
./power_loop
```

---

### **2. `power of 2 without loop.cpp`**
- Checks if a number is a **power of 2** using a **bitwise operation**.
- Uses the condition `(n & (n - 1)) == 0`, which is true for powers of two.

- **Example Input/Output:**
  ```
  Enter the number: 16
  The number is a power of two
  ```

#### **How to Run**
```sh
g++ -o power_bitwise "power of 2 without loop.cpp"
./power_bitwise
```

---

### **3. `Reverse a Number.cpp`**
- Reverses the digits of an integer using a **loop**.
- Extracts each digit using modulo (`%`) and builds the reversed number.

- **Example Input/Output:**
  ```
  Enter the number: 1234
  The reversed number is 4321
  ```

#### **How to Run**
```sh
g++ -o reverse_num "Reverse a Number.cpp"
./reverse_num
```

---

## **Folder Structure**
```
Cpp problems and solutions/
│── Lecture-07/
│   │── power of 2 with loop.cpp       # Check power of 2 using loops
│   │── power of 2 without loop.cpp    # Check power of 2 using bitwise operation
│   │── Reverse a Number.cpp           # Reverse the digits of a number
│   │── README.md                      # Documentation
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
- **Bitwise Operations** for efficient power of 2 checks.
- **Loop-based algorithms** for mathematical validation.
- **Digit manipulation** for reversing numbers.

---

### **License**
This project is for **educational purposes** only.

---
