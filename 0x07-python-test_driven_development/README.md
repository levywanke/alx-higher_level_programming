Certainly! Here's a README.md template for the tasks you described:

---

# Python Test-Driven Development (TDD) Project

This project contains Python scripts and corresponding test cases to demonstrate various programming concepts through Test-Driven Development (TDD) methodology.

## Tasks Overview

### Task 0: Integers addition
- **File**: `0-add_integer.py`
- **Function**: `add_integer(a, b=98)`
- **Description**: Adds two integers. Converts floats to integers and raises `TypeError` for non-integer or non-float inputs.
- **Example**:
  ```python
  add_integer(1, 2)  # Returns 3
  ```

### Task 1: Divide a matrix
- **File**: `2-matrix_divided.py`
- **Function**: `matrix_divided(matrix, div)`
- **Description**: Divides all elements of a matrix by `div`, handling matrix validation and exceptions (`TypeError`, `ZeroDivisionError`, `ValueError`).
- **Example**:
  ```python
  matrix_divided([[1, 2], [3, 4]], 2)  # Returns [[0.5, 1.0], [1.5, 2.0]]
  ```

### Task 2: Say my name
- **File**: `3-say_my_name.py`
- **Function**: `say_my_name(first_name, last_name='')`
- **Description**: Prints "My name is \<first_name\> \<last_name\>". Handles `TypeError` for non-string inputs.
- **Example**:
  ```python
  say_my_name("John", "Doe")  # Prints "My name is John Doe"
  ```

### Task 3: Print square
- **File**: `4-print_square.py`
- **Function**: `print_square(size)`
- **Description**: Prints a square of `#` characters of size `size`. Validates size (`TypeError`, `ValueError`).
- **Example**:
  ```python
  print_square(4)  # Prints a 4x4 square of #
  ```

### Task 4: Text indentation
- **File**: `5-text_indentation.py`
- **Function**: `text_indentation(text)`
- **Description**: Prints text with 2 new lines after `.`, `?`, and `:`. Validates input (`TypeError`).
- **Example**:
  ```python
  text_indentation("Hello. How are you? Fine.")  # Prints formatted text
  ```

### Task 5: Max integer - Unittest
- **File**: `6-max_integer.py`, `tests/6-max_integer_test.py`
- **Function**: `max_integer(list=[])`
- **Description**: Returns the maximum integer in a list. Includes `unittest` test cases.
- **Example**:
  ```python
  max_integer([1, 2, 3, 4])  # Returns 4
  ```

### Task 6: Matrix multiplication
- **File**: `100-matrix_mul.py`, `tests/100-matrix_mul.txt`
- **Function**: `matrix_mul(m_a, m_b)`
- **Description**: Multiplies two matrices `m_a` and `m_b`, handling matrix dimensions and element types. Returns a new matrix.
- **Example**:
  ```python
  matrix_mul([[1, 2], [3, 4]], [[1, 2], [3, 4]])  # Returns [[7, 10], [15, 22]]
  ```

### Task 7: Lazy matrix multiplication
- **File**: `101-lazy_matrix_mul.py`, `tests/101-lazy_matrix_mul.txt`
- **Function**: `lazy_matrix_mul(m_a, m_b)`
- **Description**: Multiplies two matrices using NumPy. Maintains similar requirements and exceptions as `matrix_mul`.
- **Example**:
  ```python
  lazy_matrix_mul([[1, 2], [3, 4]], [[1, 2], [3, 4]])  # Returns [[7, 10], [15, 22]]
  ```

### Task 8: CPython #3: Python Strings
- **File**: `102-python.c`, `102-tests.py`
- **Function**: `void print_python_string(PyObject *p)`
- **Description**: Prints Python string object information using CPython API. Validates input as valid string objects.
- **Example**: 
  ```python
  # Outputs detailed string object information or an error message if input is invalid
  ```

## How to Run Tests
- Ensure Python 3 and necessary libraries are installed.
- Navigate to each task directory.
- Execute tests using the appropriate command (`python3 -m doctest ./tests/*.txt` or `python3 -m unittest tests/*.py`).

