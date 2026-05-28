# C Programming Basics

Beginner to intermediate C programs — easy to hard order.

## Folder Structure

```
C-Basics/
├── 01_int_arithmetic/     → int +, -, *, /, %
├── 02_float_arithmetic/   → float +, -, *, /, fmod
├── 03_conditionals/       → if-else
├── 04_loops/              → for, while, continue
├── 05_patterns/           → nested loops, star & number patterns
├── 06_arrays/             → array input, search, sum
├── 07_strings/            → strlen, vowel count, palindrome
├── 08_switch/             → switch-case
├── 09_pointers/           → pointer basics
├── 10_recursion/          → sum, factorial, fibonacci
├── 11_structures/         → struct, array of structs
└── 12_misc/               → static variable
```

## Files

### 01 — Int Arithmetic
| File | What it does |
|------|-------------|
| `int_addition.c` | a + b |
| `int_subtraction.c` | a - b |
| `int_multiplication.c` | a * b |
| `int_division.c` | a / b |
| `int_modulo.c` | a % b |

### 02 — Float Arithmetic
| File | What it does |
|------|-------------|
| `float_addition.c` | a + b |
| `float_subtraction.c` | a - b |
| `float_multiplication.c` | a * b |
| `float_division.c` | a / b |
| `float_modulo.c` | fmod(a, b) |

### 03 — Conditionals
| File | What it does |
|------|-------------|
| `voting_eligibility.c` | age >= 18 → eligible to vote |
| `cgpa_display.c` | print hardcoded cgpa |
| `budget_food_checker.c` | taka >= 300 → kacchi khabe |
| `tour_budget_planner.c` | suggest travel destination by budget |

### 04 — Loops
| File | What it does |
|------|-------------|
| `while_1_to_10.c` | print 1 to 10 using while |
| `while_even_odd.c` | even/odd check 1 to 10 |
| `for_loop_even.c` | even numbers 0 to 100 |
| `for_loop_odd.c` | odd numbers 1 to 100 |
| `sum_1_to_10.c` | sum from 0 to 10 |
| `skip_7_with_continue.c` | print 1–10, skip 7 |
| `count_remainder4.c` | count i%5==4 from 1 to 50 |

### 05 — Patterns
| File | What it does |
|------|-------------|
| `numbers_in_rows.c` | 1–12 with newline every 3 |
| `grid_numbers.c` | 5×3 number grid |
| `rectangle_stars.c` | 4×3 rectangle of * |
| `right_triangle_stars.c` | right triangle of * |
| `pyramid_stars.c` | centered pyramid of * |

### 06 — Arrays
| File | What it does |
|------|-------------|
| `array_access_elements.c` | access by index |
| `array_print_loop.c` | print all with for loop |
| `array_input_print.c` | take input, print |
| `array_sum.c` | sum of n elements |
| `array_odd_even_label.c` | Super Num / Bad Num |
| `array_find_max.c` | find maximum |
| `array_second_highest.c` | find second highest |

### 07 — Strings
| File | What it does |
|------|-------------|
| `string_print_chars.c` | print each character |
| `string_count_vowels.c` | count vowels |
| `string_contains_ma.c` | check if contains "ma" |
| `string_palindrome.c` | palindrome check |

### 08 — Switch
| File | What it does |
|------|-------------|
| `switch_day_name.c` | number → day name |
| `switch_loop_greeting.c` | switch inside for loop |
| `switch_calculator.c` | calculator with switch |

### 09 — Pointers
| File | What it does |
|------|-------------|
| `pointer_basics.c` | declare pointer, print address, modify value |

### 10 — Recursion
| File | What it does |
|------|-------------|
| `recursion_sum.c` | sum 1 to n |
| `recursion_factorial.c` | n! |
| `recursion_fibonacci.c` | nth fibonacci number |

### 11 — Structures
| File | What it does |
|------|-------------|
| `struct_basic.c` | basic struct with name, id, cgpa |
| `struct_single_student.c` | struct student input/output |
| `struct_global_variable.c` | struct declared globally |
| `struct_multiple_students.c` | array of structs |
| `struct_department.c` | department info with struct array |

### 12 — Misc
| File | What it does |
|------|-------------|
| `static_variable.c` | static variable retains value across calls |

## Compile & Run

```bash
gcc filename.c -o output
./output
```

For float_modulo.c:
```bash
gcc float_modulo.c -o float_modulo -lm
./float_modulo
```
