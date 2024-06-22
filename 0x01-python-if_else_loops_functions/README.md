# 0x01. Python - if/else, loops, functions

## By: Guillaume
## Weight: 1

### Project Duration:
- Start: Nov 28, 2023 6:00 AM
- End: Nov 29, 2023 6:00 AM

### Checker Released:
- Nov 28, 2023 12:00 PM

### Auto Review:
- Launched at the deadline

## Resources
### Read or Watch:
- [More Control Flow Tools](https://docs.python.org/3/tutorial/controlflow.html) (Read until “4.6. Defining Functions” included)
- [IndentationError](https://docs.python.org/3/tutorial/errors.html#indentation-error)
- [How To Use String Formatters in Python 3](https://realpython.com/python-string-formatting/)
- [Learn to Program](https://www.youtube.com/watch?v=Gs8iHw0t4FA)
- [Learn to Program 2: Looping](https://www.youtube.com/watch?v=sIEM4PDcUJk)
- [Pycodestyle – Style Guide for Python Code](https://pycodestyle.pycqa.org/en/latest/)

### Man or Help:
- `python3`

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without the help of Google:

### General
- Why Python programming is awesome
- Why indentation is so important in Python
- How to use the if, if ... else statements
- How to use comments
- How to assign values to variables
- How to use the while and for loops
- How Python’s for loop is different from C’s
- How to use the break and continue statements
- How to use else clauses on loops
- What the pass statement does, and when to use it
- How to use the range function
- What a function is and how to use functions
- What does a function that does not use any return statement return
- Scope of variables
- What’s a traceback
- What are the arithmetic operators and how to use them

## Requirements
### Python Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using `python3` (version 3.8.5)
- All files should end with a new line
- The first line of all files should be exactly `#!/usr/bin/python3`
- A `README.md` file, at the root of the folder of the project, is mandatory
- Code should use the pycodestyle (version 2.8.*)
- All files must be executable
- The length of files will be tested using `wc`

### C Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Code should use the Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- Do not push `main.c` files to your repo
- Prototypes of all functions should be included in a header file called `lists.h`
- Header files should be include guarded

## More Info
- No need to understand lists yet.

## Tasks

### 0. Positive anything is better than negative nothing
Write a Python program that assigns a random signed number to the variable `number` each time it is executed and prints whether the number stored in `number` is positive or negative.

**File**: `0-positive_or_negative.py`

**Example:**
```sh
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
-4 is negative
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
0 is zero
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
10 is positive
guillaume@ubuntu:~/0x01$
