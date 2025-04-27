
# **Lecture-01**

This folder contains basic C++ programs demonstrating fundamental concepts like input/output, arithmetic operations, and basic execution.

## **Files in `Lecture-01/`**
### **1. `calculator without sc.cpp`**
- This program performs basic arithmetic operations (addition, subtraction, multiplication, division, and modulus) on two user-input integers.
- **Operations implemented:**
  - Addition (`a + b`)
  - Subtraction (`a - b`)
  - Multiplication (`a * b`)
  - Division (`a / b`)
  - Modulus (`a % b`)

#### **How to Run**
```sh
g++ -o calculator "calculator without sc.cpp"
./calculator
```

---

### **2. `code.cpp`**
- A simple C++ program that prints:
  ```
  Hello World
  I am Adrishikhar Chowdhury
  ```
- Demonstrates **basic output (`cout`)** in C++.

#### **How to Run**
```sh
g++ -o hello code.cpp
./hello
```

---

## **Executables**
- `calculator without sc.exe`: Compiled version of the calculator program.
- `code.exe`: Compiled version of the hello world program.

## **Folder Structure**
```
Lecture-01/
│── calculator without sc.cpp   # Basic arithmetic operations
│── calculator without sc.exe   # Compiled version
│── code.cpp                    # Hello World program
│── code.exe                     # Compiled version
│── README.md                    # Documentation
```

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **Terminal/Command Prompt** to run the compiled executable files.

## **How to Compile & Run**
1. **Navigate to the `Lecture-02` folder**:
   ```sh
   cd Lecture-01
   ```
2. **Compile the programs**:
   ```sh
   g++ -o calculator "calculator without sc.cpp"
   g++ -o hello code.cpp
   ```
3. **Run the programs**:
   ```sh
   ./calculator
   ./hello
   ```

---

### **License**
This project is for **educational purposes** only.

---