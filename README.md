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
4.  **Inner Loop:** Print numbers from 1 to `i`.
6.  **New Line:** Move to next line after each row.
---

## 7. Odd Star Pyramid (odd_star_pyramid.c)

### Define Problem
Print a pyramid pattern where the number of stars in each row corresponds to odd numbers (1, 3, 5, etc.) based on the row number.

### Algorithm Steps
1.  **Input:** Get height `n`.
2.  **Outer Loop:** Iterate `i` from 1 to `n`.
3.  **Space Loop:** Print `n - i` spaces for alignment.
4.  **Star Loop:** Print `* ` for `2 * i - 1` times (generates odd sequence).
5.  **New Line:** Move to next line.
 ---

## 8. Diamond Pattern (diamond_pattern.c)

### Define Problem
Print a full diamond shape composed of stars. The user specifies the number of rows for the upper half (radius).

### Algorithm Steps
1.  **Input:** Get radius `n` from user.
2.  **Upper Part:** Loop `i` from 1 to `n`. Print `n-i` spaces and `2*i-1` stars.
3.  **Lower Part:** Loop `i` from `n-1` down to 1 (reverse loop). Use the exact same logic for spaces and stars.
4.  **Result:** Combine both parts to form a perfect diamond.  
---

## 9. Basic Array Input/Output (array_input_output.c)

### Define Problem
Write a C program that asks the user for the number of elements, stores them in an array, and then displays all elements on the screen.

### Algorithm Steps
1.  **Declare:** Create an integer array `arr` of size 20.
2.  **Input Size:** Ask user for the number of elements `n`.
3.  **Input Loop:** Iterate `i` from 0 to `n-1` to read values into `arr[i]`.
4.  **Output Loop:** Iterate `i` from 0 to `n-1` to print each value.
5.  **Format:** Use `\t` (tab) to separate numbers in the output.
---

## 10. Sum and Mean of Array (array_sum_mean.c)

### Define Problem
Calculate the sum and arithmetic mean (average) of integer numbers entered by the user into an array.

### Algorithm Steps
1.  **Input:** Get number of elements `n`.
2.  **Loop:** Iterate `n` times to read numbers into the array.
3.  **Accumulate:** Add each entered number to the `sum` variable inside the loop.
4.  **Calculation:** Divide `sum` by `n` to find the `mean`. (Type casting to float is used for precision).
5.  **Output:** Print the total sum and the calculated mean.
---

## 11. Find Smallest Element in Array (find_smallest_element.c)

### Define Problem
Find the smallest integer in an array entered by the user and display its index (position).

### Algorithm Steps
1.  **Input:** Read `n` elements into array `arr`.
2.  **Initialize:** Assume the first element (`arr[0]`) is the smallest (`small`) and set position `pos = 0`.
3.  **Traverse:** Loop through the array starting from the second element (`i = 1`).
4.  **Compare:** If current element `arr[i]` is smaller than `small`, update `small = arr[i]` and `pos = i`.
5.  **Output:** Print the smallest value and its position.
---

## 12. Histogram Chart (histogram_chart.c)

### Define Problem
Visualize the data inside an array by printing a horizontal bar chart (histogram) using asterisks.

### Algorithm Steps
1.  **Define:** Set a constant `SIZE` (5) and initialize array `n` with values.
2.  **Header:** Print the table headers (Element, Value, Histogram).
3.  **Outer Loop:** Iterate through the array using index `i`.
4.  **Print Data:** Display the index and the numeric value.
5.  **Inner Loop:** Iterate `j` from 1 to `n[i]` (value of current element).
6.  **Draw Bar:** Print an asterisk (`*`) in each iteration of the inner loop.
7.  **New Line:** Move to the next line after drawing the bar.
---

## 13. Character Triangle Pattern (character_triangle.c)

### Define Problem
Print a right-angled triangle pattern where each row consists of a repeated uppercase character, starting from 'A' up to the user-supplied character.

### Algorithm Steps
1.  **Input:** Get an uppercase character `input` from the user.
2.  **Initialize:** Set `current_char` to 'A'.
3.  **Row Calculation:** Determine loop count using `input - 'A' + 1`.
4.  **Outer Loop:** Iterate through the rows.
5.  **Inner Loop:** Print `current_char`, repeating it `i` times.
6.  **Update:** Increment `current_char` to the next letter and move to a new line.
---

## 14. Pascal's Triangle (pascals_triangle.c)

### Define Problem
Print Pascal's Triangle, a triangular array of binomial coefficients where each number is the sum of the two numbers directly above it.

### Algorithm Steps
1.  **Input:** Get the number of `rows`.
2.  **Outer Loop:** Iterate `i` from 0 to `rows`.
3.  **Space Loop:** Print spaces to center the triangle.
4.  **Inner Loop:** Iterate `j` from 0 to `i`.
5.  **Calculate:**
    * If `j==0` (start of row), set `number = 1`.
    * Otherwise, calculate using formula: $val = val \times \frac{i - j + 1}{j}$.
6.  **Print:** Display `number` with fixed width for alignment.

---

## 15. V-Shape Character Pattern (v_shape_pattern.c)

### Define Problem
Print a "V" shape or a right-pointing arrow pattern using a specific character provided by the user. The number of rows determines the height.

### Algorithm Steps
1.  **Input:** Get `row` count (integer) and `letter` (char) from the user.
2.  **Buffer Fix:** Use `scanf(" %c", ...)` to correctly handle input skipping.
3.  **Outer Loop:** Iterate `i` from 1 to `row`.
4.  **Condition:** Check if current row is in the upper half or lower half.
    * **Upper Half:** Print `i-1` spaces (indentation increases).
    * **Lower Half:** Print `row-i` spaces (indentation decreases).
5.  **Output:** Print the `letter` after the spaces and move to a new line.
---

## 16. GCD and LCM Calculator (gcd_lcm.c)

### Define Problem
Calculate the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two integers entered by the user.

### Algorithm Steps
1.  **Input:** Get two integers `x` and `y`.
2.  **Determine Limit:** Find the smaller of the two numbers (`small`).
3.  **Find GCD:** Loop from 1 to `small`. If `i` divides both numbers, update `gcd`.
4.  **Find LCM:** Use the mathematical relationship `LCM = (x * y) / GCD`.
5.  **Output:** Print both results.
---

## 17. Power Function with Negative Support (power_function.c)

### Define Problem
Calculate the result of a number raised to a power ($x^y$), supporting both positive and negative exponents, using a user-defined function.

### Algorithm Steps
1.  **Define Function:** Create `power(float x, int y)` that returns a float.
2.  **Input:** Get base (`float`) and exponent (`int`) from the user.
3.  **Check Sign:** Check if exponent `y` is positive or negative.
4.  **Positive Case:** Loop `y` times, multiplying `result` by `x`.
5.  **Negative Case:** Loop `-y` times, multiplying `result` by `1/x`.
6.  **Output:** Call the function in `main` and display the formatted result.
---

## 18. Menu Driven Calculator (menu_calculator.c)

### Define Problem
Create a modular calculator program that presents a menu to the user, performs operations (Min, Max, Square, Cube, Absolute Value) based on the selection, and repeats until the user chooses to exit.

### Algorithm Steps
1.  **Functions:** Define separate functions for `menu`, `min`, `max`, `square`, `cube`, and `abs_val`.
2.  **Do-While Loop:** Create a main loop that keeps the program running.
3.  **Menu Display:** Call `menu()` to show options.
4.  **Switch-Case:** Use a `switch` statement to execute the function corresponding to the user's `choice`.
5.  **Exit Condition:** Terminate the loop when input is 6.
---

## 19. Temperature Converter (temperature_converter.c)

### Define Problem
Create a menu-driven program to convert temperatures between Celsius, Fahrenheit, and Kelvin scales using functions.

### Algorithm Steps
1.  **Menu:** Display options for different conversions inside a `do-while` loop.
2.  **Input:** Use `scanf` with a leading space to handle buffer characters correctly.
3.  **Functions:** Implement separate functions for each conversion formula:
    * $C = (F - 32) \times 5/9$
    * $F = (C \times 9/5) + 32$
    * $K = C + 273.15$
4.  **Validation:** In Kelvin conversion, ensure input is not negative (Absolute Zero check).
5.  **Output:** Display the calculated result formatted to 2 decimal places.


