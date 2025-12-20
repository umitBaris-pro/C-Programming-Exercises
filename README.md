# C-Programming-Exercises 
---
## 1. Pyramid Pattern Project (pyramid.c)

### Define Problem
Write a C program to print a full pyramid pattern of stars. The user inputs the number of rows, and the program prints stars centered horizontally by managing leading spaces dynamically.

### Algorithm Steps
1.  **Input:** Get row number (`n`) from user.
2.  **Outer Loop:** Iterate from `i = 1` to `n`.
3.  **Space Loop:** Print `n - i` spaces to center the stars.
4.  **Star Loop:** Print `* ` (star + space) `i` times.
5.  **New Line:** Move to next line.

---
---

## 2. Hollow Square Pattern (hollow_square_pattern.c)

### Define Problem
Print a square box where stars (`*`) are only on the borders and the inside is empty.

### Algorithm Steps
1.  **Input:** Get size `n`.
2.  **Nested Loop:** Iterate rows `i` and columns `j` from 1 to `n`.
3.  **Condition:** Check if position is a border (`i==1`, `i==n`, `j==1`, `j==n`).
4.  **Print:** Print `* ` for borders, otherwise print `  ` (spaces).

---

## 3. ATM Simulator (atm-simulator.c)

### Define Problem
Simulate basic ATM operations like checking balance, depositing money, and withdrawing money using a menu-driven approach.

### Algorithm Steps
1.  **Initialize:** Set initial balance.
2.  **Menu Loop:** Display options (Balance, Deposit, Withdraw, Exit).
3.  **Input:** Get user choice.
4.  **Switch Case:** Perform the selected operation and update balance variable.
5.  **Repeat:** Continue until user selects "Exit".

---

## 4. Fibonacci Series (fibonacci.c)

### Define Problem
Generate the Fibonacci sequence where each number is the sum of the two preceding ones (e.g., 0, 1, 1, 2, 3, 5...).

### Algorithm Steps
1.  **Input:** Get the number of terms `n`.
2.  **Initialize:** Set first two terms `t1 = 0`, `t2 = 1`.
3.  **Print:** Display initial terms.
4.  **Loop:** Iterate to calculate `nextTerm = t1 + t2`.
5.  **Update:** Shift values (`t1 = t2`, `t2 = nextTerm`) for the next iteration.

---

## 5. Prime Number Check (prime-number-check.c)

### Define Problem
Check if a given integer is a prime number (only divisible by 1 and itself).

### Algorithm Steps
1.  **Input:** Get number `n`.
2.  **Loop:** Iterate from `i = 2` to `n/2`.
3.  **Check Divisibility:** If `n % i == 0`, the number is not prime.
4.  **Result:** If loop finishes without dividing, the number is prime.

---

## 6. Inverted Number Pattern (inverted_number_pattern.c)

### Define Problem
Print a number pattern that starts with a full row of numbers and decreases in count on each subsequent row.

### Algorithm Steps
1.  **Input:** Get number of rows `n`.
2.  **Outer Loop:** Iterate `i` from `n` down to 1.
3.  **Inner Loop:** Print numbers from 1 to `i`.
4.  **New Line:** Move to next line after each row.
