# 0x04. Python - More Data Structures: Set, Dictionary

## Table of Contents

- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)

## Resources

Read or watch:
- [Data structures](https://docs.python.org/3/tutorial/datastructures.html)
- [Lambda, filter, reduce and map](https://docs.python.org/3/howto/functional.html)
- [Learn to Program 12 Lambda Map Filter Reduce](https://www.youtube.com/watch?v=1GAC6KQUPeg)

**Man or help:**
- `python3`

## Learning Objectives

By the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- Why Python programming is awesome
- What are sets and how to use them
- What are the most common methods of set and how to use them
- When to use sets versus lists
- How to iterate into a set
- What are dictionaries and how to use them
- When to use dictionaries versus lists or sets
- What is a key in a dictionary
- How to iterate over a dictionary
- What is a lambda function
- What are the `map`, `reduce`, and `filter` functions

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using `python3` (version 3.8.5)
- All files should end with a new line
- The first line of all files should be exactly `#!/usr/bin/python3`
- A `README.md` file, at the root of the folder of the project, is mandatory
- Code should use the `pycodestyle` (version 2.8.*)
- All files must be executable
- The length of your files will be tested using `wc`

## Tasks

### 0. Squared simple
- **File:** `0-square_matrix_simple.py`
- **Prototype:** `def square_matrix_simple(matrix=[]):`
- Compute the square value of all integers in a matrix.

### 1. Search and replace
- **File:** `1-search_replace.py`
- **Prototype:** `def search_replace(my_list, search, replace):`
- Replace all occurrences of an element by another in a new list.

### 2. Unique addition
- **File:** `2-uniq_add.py`
- **Prototype:** `def uniq_add(my_list=[]):`
- Add all unique integers in a list (only once for each integer).

### 3. Present in both
- **File:** `3-common_elements.py`
- **Prototype:** `def common_elements(set_1, set_2):`
- Return a set of common elements in two sets.

### 4. Only differents
- **File:** `4-only_diff_elements.py`
- **Prototype:** `def only_diff_elements(set_1, set_2):`
- Return a set of all elements present in only one set.

### 5. Number of keys
- **File:** `5-number_keys.py`
- **Prototype:** `def number_keys(a_dictionary):`
- Return the number of keys in a dictionary.

### 6. Print sorted dictionary
- **File:** `6-print_sorted_dictionary.py`
- **Prototype:** `def print_sorted_dictionary(a_dictionary):`
- Print a dictionary by ordered keys.

### 7. Update dictionary
- **File:** `7-update_dictionary.py`
- **Prototype:** `def update_dictionary(a_dictionary, key, value):`
- Replace or add key/value in a dictionary.

### 8. Simple delete by key
- **File:** `8-simple_delete.py`
- **Prototype:** `def simple_delete(a_dictionary, key=""):`
- Delete a key in a dictionary.

### 9. Multiply by 2
- **File:** `9-multiply_by_2.py`
- **Prototype:** `def multiply_by_2(a_dictionary):`
- Return a new dictionary with all values multiplied by 2.

### 10. Best score
- **File:** `10-best_score.py`
- **Prototype:** `def best_score(a_dictionary):`
- Return a key with the biggest integer value.

### 11. Multiply by using map
- **File:** `11-multiply_list_map.py`
- **Prototype:** `def multiply_list_map(my_list=[], number=0):`
- Return a list with all values multiplied by a number without using any loops.

### 12. Roman to Integer
- **File:** `12-roman_to_int.py`
- **Prototype:** `def roman_to_int(roman_string):`
- Convert a Roman numeral to an integer.

### 13. Weighted average!
- **File:** `100-weight_average.py`
- **Prototype:** `def weight_average(my_list=[]):`
- Return the weighted average of all integers tuple (`<score>, <weight>`).

### 14. Squared by using map
- **File:** `101-square_matrix_map.py`
- **Prototype:** `def square_matrix_map(matrix=[]):`
- Compute the square value of all integers in a matrix using `map`.

### 15. Delete by value
- **File:** `102-complex_delete.py`
- **Prototype:** `def complex_delete(a_dictionary, value):`
- Delete keys with a specific value in a dictionary.

### 16. CPython #1: PyBytesObject
- **File:** `103-python.c`
- Create two C functions that print some basic info about Python lists and Python bytes objects.
- **Python lists:**
  - Prototype: `void print_python_list(PyObject *p);`
- **Python bytes:**
  - Prototype: `void print_python_bytes(PyObject *p);`
