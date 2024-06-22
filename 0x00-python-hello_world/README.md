# ALX Higher Level Programming

This repository contains my projects and assignments for the ALX Higher Level Programming curriculum. Each project covers different aspects and concepts of programming, focusing primarily on Python in the initial stages.

## Project: 0x00. Python - Hello, World

This project introduces the basics of Python programming. It includes simple scripts and exercises to get started with Python.

### Learning Objectives

- Why Python programming is awesome
- Who created Python
- Who is Guido van Rossum
- Where does the name 'Python' come from
- What is the Zen of Python
- How to use the Python interpreter
- How to print text and variables using print
- How to use strings
- What are indexing and slicing in Python
- What is the official Python coding style and how to check your code with pycodestyle

### Tasks

#### 0. Run Python file

Write a Shell script that runs a Python script.

- File: `0-run`
- Usage:
    ```bash
    export PYFILE=main.py
    ./0-run
    ```

#### 1. Run inline

Write a Shell script that runs Python code.

- File: `1-run_inline`
- Usage:
    ```bash
    export PYCODE='print(f"Best School: {88+10}")'
    ./1-run_inline
    ```

#### 2. Hello, print

Write a Python script that prints exactly "Programming is like building a multilingual puzzle".

- File: `2-print.py`
- Usage:
    ```bash
    ./2-print.py
    ```

#### 3. Print integer

Complete the source code to print the integer stored in the variable `number`.

- File: `3-print_number.py`
- Usage:
    ```bash
    ./3-print_number.py
    ```

#### 4. Print float

Complete the source code to print the float stored in the variable `number` with a precision of 2 digits.

- File: `4-print_float.py`
- Usage:
    ```bash
    ./4-print_float.py
    ```

#### 5. Print string

Complete the source code to print 3 times a string stored in the variable `str`, followed by its first 9 characters.

- File: `5-print_string.py`
- Usage:
    ```bash
    ./5-print_string.py
    ```

#### 6. Play with strings

Complete this source code to print `Welcome to Holberton School!`.

- File: `6-concat.py`
- Usage:
    ```bash
    ./6-concat.py
    ```

#### 7. Copy - Cut - Paste

Complete this source code to handle string manipulation tasks.

- File: `7-edges.py`
- Usage:
    ```bash
    ./7-edges.py
    ```

#### 8. Create a new sentence

Complete this source code to print `object-oriented programming with Python`.

- File: `8-concat_edges.py`
- Usage:
    ```bash
    ./8-concat_edges.py
    ```

#### 9. Easter Egg

Write a Python script that prints “The Zen of Python”, by Tim Peters.

- File: `9-easter_egg.py`
- Usage:
    ```bash
    ./9-easter_egg.py
    ```

#### 10. Linked list cycle

Write a function in C that checks if a singly linked list has a cycle in it.

- Files: `10-check_cycle.c`, `lists.h`
- Usage:
    ```bash
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 10-main.c 10-check_cycle.c 10-linked_lists.c -o cycle
    ./cycle
    ```

## Requirements

- All scripts are tested on Ubuntu 20.04 LTS.
- Python scripts are written for Python 3.8.5.
- Shell scripts are written for Bash.
- C programs are compiled with `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Usage

To run the shell scripts, make sure they are executable:
```bash
chmod +x script_name.sh
./script_name.sh
