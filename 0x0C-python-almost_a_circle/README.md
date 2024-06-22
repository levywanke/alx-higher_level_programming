
# Python - Almost a Circle

This repository contains Python scripts that demonstrate various Object-Oriented Programming (OOP) concepts. The project focuses on creating classes for shapes (specifically Rectangle and Square), implementing unit tests, serialization, and more.

## Project Structure

The project is structured as follows:

- **models/**: Directory containing Python modules for different classes.
  - **base.py**: Base class implementation.
  - **rectangle.py**: Rectangle class implementation.
  - **square.py**: Square class implementation.
- **tests/**: Directory containing unit test files.
  - Test files corresponding to each module in `models/`.

## Requirements

- Python 3.8.5 or higher
- pycodestyle 2.8.* for code style validation
- unittest module for running tests

## Usage

1. **Clone the repository:**

   ```bash
   git clone https://github.com/your-username/alx-higher_level_programming.git
   cd alx-higher_level_programming/0x0C-python-almost_a_circle
   ```

2. **Run individual Python scripts:**

   Example: Running the main script for testing the `Base` class.

   ```bash
   ./0-main.py
   ```

3. **Run unit tests:**

   All unit tests are located in the `tests/` directory. To run all tests:

   ```bash
   python3 -m unittest discover tests
   ```

   To run tests for a specific module (e.g., `rectangle.py`):

   ```bash
   python3 -m unittest tests/test_models/test_rectangle.py
   ```

## Learning Objectives

By completing this project, you will learn:

- Unit testing implementation in Python projects
- Serialization and deserialization of objects using JSON
- Proper documentation practices in Python
- Handling inheritance and exceptions in Python classes
