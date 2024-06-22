
# 0x14. JavaScript - Web Scraping

## Scripting
API
JavaScript

## Working with JSON data
- The workflow of accessing the attributes of a simply-created JSON object by Jimmy Tran from Cohort 1 - San Francisco
- Request module
- Modern JS

## Learning Objectives
By the end of this project, you should be able to explain the following without using Google:
- Why JavaScript programming is amazing
- How to manipulate JSON data
- How to use request and fetch API
- How to read and write a file using fs module

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All files interpreted on Ubuntu 20.04 LTS using node (version 14.x)
- All files should end with a new line
- The first line of all files should be exactly `#!/usr/bin/node`
- Mandatory README.md file at the root of the project folder
- Code should be semistandard compliant (Rules of Standard + semicolons on top)
- All files must be executable
- File lengths will be tested using `wc`
- Not allowed to use `var`

### More Info
- Install Node 14:
  ```bash
  $ curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
  $ sudo apt-get install -y nodejs
  ```

- Install semi-standard:
  ```bash
  $ sudo npm install semistandard --global
  ```

- Install request module and use it:
  ```bash
  $ sudo npm install request --global
  $ export NODE_PATH=/usr/lib/node_modules
  ```

Notes: Request module has been deprecated since February 2020 - the team is considering an alternative to replace this module. However, it remains a simple and powerful module for practicing web-scraping in JavaScript and is still widely used in the industry.

## Tasks
### 0. Readme (mandatory)
Write a script that reads and prints the content of a file.
- First argument: file path
- Content read in utf-8
- Print error object if reading fails

### 1. Write me (mandatory)
Write a script that writes a string to a file.
- First argument: file path
- Second argument: string to write
- Content written in utf-8
- Print error object if writing fails

### 2. Status code (mandatory)
Write a script that displays the status code of a GET request.
- First argument: URL to request (GET)
- Status code printed as: `code: <status code>`
- Must use the `request` module

### 3. Star wars movie title (mandatory)
Write a script that prints the title of a Star Wars movie based on the episode number.
- First argument: movie ID
- Star Wars API endpoint: `https://swapi-api.alx-tools.com/api/films/:id`
- Must use the `request` module

### 4. Star wars Wedge Antilles (mandatory)
Write a script that prints the number of movies where the character "Wedge Antilles" appears.
- First argument: Star wars API URL: `https://swapi-api.alx-tools.com/api/films/`
- Character ID for Wedge Antilles: 18
- Must use the `request` module

### 5. Loripsum (mandatory)
Write a script that gets the contents of a webpage and stores it in a file.
- First argument: URL to request
- Second argument: file path to store the body response
- File encoded in UTF-8
- Must use the `request` module

### 6. How many completed? (mandatory)
Write a script that computes the number of tasks completed by user id.
- First argument: API URL: `https://jsonplaceholder.typicode.com/todos`
- Print only users with completed tasks
- Must use the `request` module
