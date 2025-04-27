# 📚 Lecture-21

## 📝 Sorting Algorithms (Bubble Sort, Insertion Sort, Selection Sort)

This folder contains **C++ programs** demonstrating three fundamental **sorting algorithms** used in data structures and algorithms courses:
- **Bubble Sort**
- **Insertion Sort**
- **Selection Sort**

Each program reads an array from user input, sorts it, and displays the array before and after sorting.

---

## 📂 Files

- `Bubble Sort.cpp` — Implements **Bubble Sort**.
- `Insertion Sort.cpp` — Implements **Insertion Sort**.
- `Selection Sort.cpp` — Implements **Selection Sort**.

---

## 🚀 How to Run

For each file individually:

1. Open a terminal.
2. Compile the C++ file:
   ```bash
   g++ Bubble\ Sort.cpp -o bubble_sort
   g++ Insertion\ Sort.cpp -o insertion_sort
   g++ Selection\ Sort.cpp -o selection_sort
   ```
3. Run the executable:
   ```bash
   ./bubble_sort
   ./insertion_sort
   ./selection_sort
   ```
4. Provide the required input:
   - Size of the array
   - Elements of the array

---

## 📈 Example (for any sorting program)

Input:
```
Enter the size of the array: 5
Enter the elements:
5 3 1 4 2
```

Output:
```
Before sorting the elements:
5 3 1 4 2
After sorting the elements:
1 2 3 4 5
```

---

## 🛠️ Concepts Used

- **Bubble Sort**:
  - Repeatedly swap adjacent elements if they are in the wrong order.
  - Optimized by checking if any swaps happened in a pass (early termination).

- **Insertion Sort**:
  - Builds the sorted array one element at a time by inserting elements at the correct position.
  - Good for small or nearly sorted arrays.

- **Selection Sort**:
  - Repeatedly find the minimum element and place it at the beginning.
  - Simple but not very efficient for large datasets.

---

## 🧠 Functions Overview

Each program uses:

- `void display(vector<int>& arr);`
  - Prints the elements of the array.

- Sorting functions:
  - `void bubbleSort(vector<int>& nums, int n);`
  - `void insertionSort(vector<int>& nums, int n);`
  - `void selectionSort(vector<int>& nums, int n);`
  - These functions implement the respective sorting logic.

---

## 📚 Related Topics

- Sorting Algorithms
- Time Complexity Analysis
- Algorithm Optimization
- Competitive Programming Basics

---

## ✍️ Author

- **Adrishikhar Chowdhury**

---
