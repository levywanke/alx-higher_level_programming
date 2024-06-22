
# 0x0D. SQL - Introduction

Welcome to the SQL - Introduction project repository! This project focuses on learning SQL fundamentals using MySQL. Below you'll find details on the project requirements, learning objectives, setup instructions, and task descriptions.

## Project Overview

This project introduces you to the basics of SQL using MySQL. You will learn how to interact with databases, perform CRUD operations, use SQL functions, and more.

## Learning Objectives

By completing this project, you will gain knowledge in:

- Understanding what a database is and its importance
- Using SQL for creating, querying, updating, and deleting data
- Differentiating between DDL (Data Definition Language) and DML (Data Manipulation Language)
- Applying SQL techniques such as subqueries and functions
- Ensuring data integrity and security with MySQL

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All files executed on Ubuntu 20.04 LTS using MySQL 8.0.25
- All files should end with a newline
- All SQL queries must have a comment just before (i.e., syntax above)
- All files should start with a comment describing the task
- All SQL keywords should be in uppercase (SELECT, WHERE, etc.)

### More Info

- Install MySQL 8.0 on Ubuntu 20.04 LTS
  ```bash
  $ sudo apt update
  $ sudo apt install mysql-server
  ```
- Connect to your MySQL server
  ```bash
  $ sudo mysql
  ```
- Use "container-on-demand" to run MySQL
  - Credentials in container: root/root
  - Start MySQL in the container:
    ```bash
    $ service mysql start
    ```

## Tasks

Here are the tasks to be completed as part of this project:

1. **List databases**: Write a script to list all databases on your MySQL server.
   - File: `0-list_databases.sql`

2. **Create a database**: Write a script to create the database `hbtn_0c_0` if it doesn't exist.
   - File: `1-create_database_if_missing.sql`

3. **Delete a database**: Write a script to delete the database `hbtn_0c_0` if it exists.
   - File: `2-remove_database.sql`

4. **List tables**: Write a script to list all tables of a specified database.
   - File: `3-list_tables.sql`

5. **First table**: Write a script to create a table `first_table` in a specified database.
   - File: `4-first_table.sql`

6. **Full description**: Write a script to print the full description of the table `first_table`.
   - File: `5-full_table.sql`

7. **List all in table**: Write a script to list all rows of the table `first_table`.
   - File: `6-list_values.sql`

8. **First add**: Write a script to insert a new row in `first_table`.
   - File: `7-insert_value.sql`

9. **Count 89**: Write a script to count records with `id = 89` in `first_table`.
   - File: `8-count_89.sql`

10. **Full creation**: Write a script to create a table `second_table` and add multiple rows.
    - File: `9-full_creation.sql`

... (tasks continue)

## Resources

- [What is Database & SQL?](#)
- [A Basic MySQL Tutorial](#)
- [Basic SQL statements: DDL and DML](#)
- [SQL technique: functions](#)
- [SQL technique: subqueries](#)
- [MySQL Cheat Sheet](#)
- [MySQL 8.0 SQL Statement Syntax](#)
- [Installing MySQL in Ubuntu 20.04](#)

## Repository Structure

```
alx-higher_level_programming/
│
└── 0x0D-SQL_introduction/
    ├── 0-list_databases.sql
    ├── 1-create_database_if_missing.sql
    ├── 2-remove_database.sql
    ├── 3-list_tables.sql
    ├── 4-first_table.sql
    ├── 5-full_table.sql
    ├── 6-list_values.sql
    ├── 7-insert_value.sql
    ├── 8-count_89.sql
    ├── 9-full_creation.sql
    ├── ...
    ├── README.md
    └── ...

