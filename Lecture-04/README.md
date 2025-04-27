
# **Lecture-04: Functions in C++**

This folder contains **C++ programs** that demonstrate the use of **functions** for solving mathematical problems like **factorial, Fibonacci, prime numbers, sum of digits, and combinations**.

---

## **Files in `cpp problems and solutions/Lecture-04/`**

### **1. `func_combination.cpp`**
- Computes the **combination formula** `nCr` using factorial functions.
- **Formula Used:**  
  ```
  nCr = n! / (r! * (n - r)!)
  ```
- **Example Input/Output:**
  ```
  Enter the n: 5
  Enter the r: 2
  5C2 is 10
  ```

#### **How to Run**
```sh
g++ -o combination "func_combination.cpp"
./combination
```

---

### **2. `func_factorial.cpp`**
- Computes the **factorial** of a given number using a function.

- **Example Input/Output:**
  ```
  Enter the no.: 5
  Factorial of 5 is 120
  ```

#### **How to Run**
```sh
g++ -o factorial "func_factorial.cpp"
./factorial
```

---

### **3. `func_Nth fibonacci.cpp`**
- Computes the **Nth Fibonacci number** using a function.
- Uses an iterative approach for better performance.

- **Example Input/Output:**
  ```
  Enter the term number you want to print: 7
  7th term is 8
  ```

#### **How to Run**
```sh
g++ -o fibonacci "func_Nth fibonacci.cpp"
./fibonacci
```

---

### **4. `func_prime or not.cpp`**
- Checks if a given number is **prime** using a function.

- **Example Input/Output:**
  ```
  Enter the no.: 13
  13 is a prime number
  ```

#### **How to Run**
```sh
g++ -o primecheck "func_prime or not.cpp"
./primecheck
```

---

### **5. `func_print prime from 1 to N.cpp`**
- Prints all **prime numbers from 1 to N** using a function.

- **Example Input/Output:**
  ```
  Enter the limit.: 20
  The prime numbers are: 
  2  3  5  7  11  13  17  19
  ```

#### **How to Run**
```sh
g++ -o prime1toN "func_print prime from 1 to N.cpp"
./prime1toN
```

---

### **6. `func_sum of digits.cpp`**
- Computes the **sum of digits** of a number.

- **Example Input/Output:**
  ```
  Enter the no.: 1234
  Sum of digits of 1234 is 10
  ```

#### **How to Run**
```sh
g++ -o sumdigits "func_sum of digits.cpp"
./sumdigits
```

---

### **7. `func_Sum Of N.cpp`**
- Computes the **sum of first N natural numbers**.

- **Example Input/Output:**
  ```
  Enter the limit: 10
  Sum of 10 is 55
  ```

#### **How to Run**
```sh
g++ -o sumN "func_Sum Of N.cpp"
./sumN
```

---

## **Folder Structure**
```
cpp problems and solutions/
│── Lecture-04/
│   │── func_combination.cpp          # Combination using factorial
│   │── func_factorial.cpp            # Factorial of a number
│   │── func_Nth fibonacci.cpp        # Find Nth Fibonacci number
│   │── func_prime or not.cpp         # Check if a number is prime
│   │── func_print prime from 1 to N.cpp # Print prime numbers from 1 to N
│   │── func_sum of digits.cpp        # Sum of digits of a number
│   │── func_Sum Of N.cpp             # Sum of first N natural numbers
│   │── README.md                     # Documentation
```

---

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **Terminal/Command Prompt** to run the compiled executables.

## **How to Compile & Run C++ Programs**
1. **Navigate to the `Lecture-04` folder**:
   ```sh
   cd "cpp problems and solutions/Lecture-04"
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

### **License**
This project is for **educational purposes** only.

---