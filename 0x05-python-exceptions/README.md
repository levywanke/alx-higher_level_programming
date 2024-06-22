
# Project: Exceptions in Python

## Overview

This project focuses on understanding and implementing exception handling in Python. The tasks cover various aspects of exceptions, including safe list printing, safe integer printing, handling division errors, and more.

### Project Details

- **Project By:** Guillaume
- **Weight:** 1
- **Start Date:** Dec 18, 2023 6:00 AM
- **Deadline:** Dec 19, 2023 6:00 AM
- **Checker Release:** Dec 18, 2023 12:00 PM
- **Auto Review:** Scheduled for the deadline

### Learning Objectives

By completing this project, you are expected to grasp the following concepts:

- Why Python programming is awesome
- Understanding the difference between errors and exceptions
- Usage of exceptions and how to handle them effectively
- Situations requiring exception handling
- Correctly implementing exception handling mechanisms
- Purpose and benefits of catching exceptions
- How to raise built-in exceptions
- Implementing clean-up actions after exceptions

### Resources

To prepare for this project, refer to the following resources:

- Errors and Exceptions
- Learn to Program 11: Static & Exception Handling (starting at minute 7)

### Requirements

#### General

- **Allowed Editors:** vi, vim, emacs
- **Environment:** Ubuntu 20.04 LTS with Python 3.8.5
- **File Requirements:**
  - All files should end with a new line.
  - The first line of all files should be exactly `#!/usr/bin/python3`.
  - All files must be executable.
- **Code Styling:** Use `pycodestyle` (version 2.8.*).
- **Project Structure:** Must include a `README.md` file at the root of the project folder.
- **Plagiarism:** Strictly forbidden; solutions must be independently created.

### Tasks

#### 0. Safe list printing

- **File:** `0-safe_print_list.py`
- **Description:** Print x elements of a list using exception handling.
- **Prototype:** `def safe_print_list(my_list=[], x=0):`

#### 1. Safe printing of an integers list

- **File:** `1-safe_print_integer.py`
- **Description:** Print an integer with exception handling.
- **Prototype:** `def safe_print_integer(value):`

#### 2. Print and count integers

- **File:** `2-safe_print_list_integers.py`
- **Description:** Print the first x integers from a list with exception handling.
- **Prototype:** `def safe_print_list_integers(my_list=[], x=0):`

#### 3. Integers division with debug

- **File:** `3-safe_print_division.py`
- **Description:** Divide two integers and print the result with exception handling.
- **Prototype:** `def safe_print_division(a, b):`

#### 4. Divide a list

- **File:** `4-list_division.py`
- **Description:** Divide two lists element-wise with exception handling.
- **Prototype:** `def list_division(my_list_1, my_list_2, list_length):`

#### 5. Raise exception

- **File:** `5-raise_exception.py`
- **Description:** Raise a type exception.
- **Prototype:** `def raise_exception():`

#### 6. Raise a message

- **File:** `6-raise_exception_msg.py`
- **Description:** Raise a name exception with a message.
- **Prototype:** `def raise_exception_msg(message=""):`

### Usage

Each task includes a main script (e.g., `0-main.py`, `1-main.py`, etc.) that demonstrates usage and expected outputs. Execute these scripts to verify implementations.

### Examples

Here are examples of running some of the main scripts and their outputs:

```
$ ./0-main.py
12
nb_print: 2

$ ./1-main.py
89
-89
School is not an integer

$ ./2-main.py
12
nb_print: 2
12345
nb_print: 5
12345
nb_print: 5
```

### Installation

To run these scripts:

1. Clone the repository: `git clone https://github.com/your_username/alx-higher_level_programming.git`
2. Navigate to the project directory.
3. Run the main scripts with Python 3: `python3 0-main.py`, `python3 1-main.py`, etc.
