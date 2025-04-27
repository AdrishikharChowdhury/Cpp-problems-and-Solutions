
# **Lecture-02**

This folder contains fundamental C++ programs that cover basic mathematical operations, character classification, and loop-based calculations.

## **Files in `cpp problems and solutions/Lecture-02/`**
### **1. `Factorial.cpp`**
- Computes the **factorial** of a given number `n` using a `for` loop.
- **Logic:** `n! = n * (n-1) * (n-2) * ... * 1`
- **Example Input/Output:**
  ```
  Enter the number: 5
  The factorial of 5 is 120
  ```

#### **How to Run**
```sh
g++ -o factorial Factorial.cpp
./factorial
```

---

### **2. `lower or uppercase.cpp`**
- Determines if an input character is **uppercase**, **lowercase**, or **not a letter**.
- Uses ASCII values to check:
  - Uppercase: `65-90`
  - Lowercase: `97-122`
- **Example Input/Output:**
  ```
  Enter a Letter: A
  A is an uppercase letter
  ```

#### **How to Run**
```sh
g++ -o charcheck "lower or uppercase.cpp"
./charcheck
```

---

### **3. `Prime or not.cpp`**
- Checks if a given number is **prime**.
- Uses the **square root optimization** to reduce unnecessary checks.
- **Example Input/Output:**
  ```
  Enter the number: 7
  7 is a prime number
  ```

#### **How to Run**
```sh
g++ -o primecheck "Prime or not.cpp"
./primecheck
```

---

### **4. `Sum from 1ton.cpp`**
- Calculates the **sum of numbers from 1 to n** using a `while` loop.
- **Example Input/Output:**
  ```
  Enter the number: 10
  The sum of 10 is 55
  ```

#### **How to Run**
```sh
g++ -o sum1toN "Sum from 1ton.cpp"
./sum1toN
```

---

### **5. `sum of divisblebility3.cpp`**
- Computes the sum of **numbers divisible by 3** from `1` to `n`.
- Uses a `while` loop with a conditional check.
- **Example Input/Output:**
  ```
  Enter the number: 10
  The sum of divisible by 3 numbers between 1 to 10 is 18
  ```

#### **How to Run**
```sh
g++ -o sumDiv3 "sum of divisblebility3.cpp"
./sumDiv3
```

---

### **6. `Sum of odds.cpp`**
- Computes the **sum of all odd numbers** between `1` and `n`.
- Uses a `while` loop to check for odd numbers.
- **Example Input/Output:**
  ```
  Enter the number: 10
  The sum of odd numbers from 1 to 10 is 25
  ```

#### **How to Run**
```sh
g++ -o sumOdds "Sum of odds.cpp"
./sumOdds
```

---

## **Folder Structure**
```
cpp problems and solutions/
│── Lecture-02/
│   │── Factorial.cpp                    # Computes factorial of a number
│   │── lower or uppercase.cpp            # Checks uppercase/lowercase
│   │── Prime or not.cpp                   # Checks if a number is prime
│   │── Sum from 1ton.cpp                  # Sum of numbers from 1 to n
│   │── sum of divisblebility3.cpp         # Sum of numbers divisible by 3
│   │── Sum of odds.cpp                     # Sum of odd numbers from 1 to n
│   │── README.md                           # Documentation
```

## **Requirements**
- **C++ Compiler** (GCC/MinGW for Windows, g++ for Linux/macOS)
- **Terminal/Command Prompt** to run the compiled executables.

## **How to Compile & Run C++ Programs**
1. **Navigate to the `Lecture-02` folder**:
   ```sh
   cd "cpp problems and solutions/Lecture-02"
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
