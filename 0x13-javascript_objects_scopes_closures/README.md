## 0x13. JavaScript - Objects, Scopes and Closures

### Description
This repository contains solutions to projects and exercises related to the topic of JavaScript objects, scopes, and closures. Each directory corresponds to a different task or project, as outlined below.

### Directory Contents

1. **0-rectangle.js**
   - Defines an empty class `Rectangle` using ES6 `class` syntax.
   
2. **1-rectangle.js**
   - Defines a class `Rectangle` with constructor parameters for width and height.

3. **2-rectangle.js**
   - Defines a class `Rectangle` with constructor parameters for width and height, handling cases where either dimension is zero or negative.

4. **3-rectangle.js**
   - Defines a class `Rectangle` with constructor parameters for width and height.
   - Implements an instance method `print()` that prints a rectangle using the character 'X'.

5. **4-rectangle.js**
   - Defines a class `Rectangle` with constructor parameters for width and height.
   - Implements instance methods:
     - `print()`: Prints the rectangle using 'X'.
     - `rotate()`: Exchanges the width and height of the rectangle.
     - `double()`: Doubles the width and height of the rectangle.

6. **5-square.js**
   - Defines a class `Square` that inherits from `Rectangle` (defined in `4-rectangle.js`).
   - Constructor takes a single argument `size` and initializes the `Rectangle` using `super(size, size)`.

7. **6-square.js**
   - Defines a class `Square` that inherits from `Square` (defined in `5-square.js`).
   - Implements an instance method `charPrint(c)` that prints the square using character `c`, defaulting to 'X' if `c` is undefined.

8. **7-occurrences.js**
   - Contains a function `nbOccurences(list, searchElement)` that returns the number of occurrences of `searchElement` in `list`.

9. **8-esrever.js**
   - Contains a function `esrever(list)` that returns a reversed version of `list` without using the built-in `reverse` method.

10. **9-logme.js**
    - Contains a function `logMe(item)` that prints the number of arguments already printed and the current argument value.

11. **10-converter.js**
    - Contains a function `converter(base)` that returns another function which converts a number from base 10 to the specified `base`.

### Resources
- JavaScript object basics
- Object-oriented JavaScript (read all examples!)
- Class - ES6
- super - ES6
- extends - ES6
- Object prototypes
- Inheritance in JavaScript
- Closures
- this/self
- Modern JS

### Learning Objectives
By completing these projects, you should gain a solid understanding of:
- Why JavaScript programming is powerful and versatile.
- Creating objects in JavaScript using classes and prototypes.
- The significance of `this` and understanding `undefined`.
- Importance of variable types and scope in JavaScript.
- Concept of closures and prototypes.
- Implementing inheritance in JavaScript.

### Environment
- All scripts are interpreted on Ubuntu 20.04 LTS using Node.js (version 14.x).
- Editor: vi, vim, emacs
- Code style: Semistandard (Rules of Standard + semicolons)
- All scripts must be executable (`chmod +x script.js`)
