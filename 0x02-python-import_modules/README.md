# Python Import & Modules Project

## Project Overview
This project involves understanding and working with Python modules and command line arguments. You will learn how to import functions from other files, use built-in functions, create modules, and manage code execution. This README provides an overview of the tasks you need to complete.

## Learning Objectives
By the end of this project, you should be able to:
- Understand the importance of Python programming.
- Import functions from another file and use them.
- Create and use modules.
- Use the built-in function `dir()`.
- Prevent code in your script from being executed when imported.
- Use command line arguments in your Python programs.

## Requirements
- Use `vi`, `vim`, or `emacs` as your text editor.
- All code should be interpreted/compiled on Ubuntu 20.04 LTS using Python 3.8.5.
- Ensure all files end with a new line.
- The first line of all your files should be `#!/usr/bin/python3`.
- Include a `README.md` file at the root of the project folder.
- Follow the `pycodestyle` style guide (version 2.8.*).
- Make all files executable.
- Use `wc` to check the length of your files.

## Tasks

### Task 0: Import a Simple Function from a Simple File
- **File**: `0-add.py`
- **Description**: Import the function `add(a, b)` from `add_0.py` and print the result of the addition `1 + 2 = 3`.
- **Requirements**:
  - Assign the value `1` to `a` and `2` to `b`.
  - Print the result using string formatting.
  - Only use `add_0` once in your code.
  - Do not use `*` for importing or `__import__`.
  - Ensure the code does not execute when imported.

### Task 1: My First Toolbox!
- **File**: `1-calculation.py`
- **Description**: Import functions from `calculator_1.py`, perform some calculations, and print the results.
- **Requirements**:
  - Assign the value `10` to `a` and `5` to `b`.
  - Call each of the imported functions (`add`, `sub`, `mul`, `div`) with `a` and `b` as arguments.
  - Print the results using string formatting.

### Task 2: How to Make a Script Dynamic!
- **File**: `2-args.py`
- **Description**: Print the number of and the list of its arguments.
- **Requirements**:
  - Print the number of arguments.
  - Print each argument on a new line with its position.

### Task 3: Infinite Addition
- **File**: `3-infinite_add.py`
- **Description**: Print the result of adding all command line arguments.
- **Requirements**:
  - Sum all arguments and print the result.
  - Handle large numbers.

### Task 4: Who Are You?
- **File**: `4-hidden_discovery.py`
- **Description**: Print all names defined by the compiled module `hidden_4.pyc`.
- **Requirements**:
  - Print names in alphabetical order.
  - Exclude names starting with `__`.

### Task 5: Everything Can Be Imported
- **File**: `5-variable_load.py`
- **Description**: Import the variable `a` from `variable_load_5.py` and print its value.
- **Requirements**:
  - Only use `variable_load_5` once in your code.
  - Do not use `*` for importing or `__import__`.

## Repository
- **GitHub repository**: `alx-higher_level_programming`
- **Directory**: `0x02-python-import_modules`

## Additional Notes
- Ensure your code is clean and follows the Python style guide.
- Test your scripts thoroughly to handle edge cases and unexpected inputs.
- Use comments to explain the logic in your code where necessary.

Happy coding!
