## Project Title: 0x0E. SQL - More queries

### Description
This repository contains solutions to various SQL tasks focused on advanced MySQL queries. Each task addresses specific objectives related to database management, user privileges, table creation, and querying across multiple tables. The tasks are designed to enhance skills in SQL syntax, database design, and query optimization.

### Learning Objectives
By the end of this project, you should be able to:
- Create and manage MySQL users with specific privileges.
- Design and implement relational database tables with constraints.
- Execute advanced SQL queries including joins, subqueries, and unions.
- Import SQL dumps and manage database content efficiently.

### Files
1. **0-privileges.sql**
   - Script to list all privileges of specified MySQL users.
   
2. **1-create_user.sql**
   - Script to create a MySQL server user with all privileges.

3. **2-create_read_user.sql**
   - Script to create a database and a user with SELECT privilege only.

4. **3-force_name.sql**
   - Script to create a table with enforced non-null name field.

5. **4-never_empty.sql**
   - Script to create a table with a non-null id field.

6. **5-unique_id.sql**
   - Script to create a table with a unique id field.

7. **6-states.sql**
   - Script to create a database and a states table.

8. **7-cities.sql**
   - Script to create a database and a cities table with foreign key constraint.

9. **8-cities_of_california_subquery.sql**
   - Script to list cities of California without using JOIN.

10. **9-cities_by_state_join.sql**
    - Script to list cities with states using JOIN.

11. **10-genre_id_by_show.sql**
    - Script to list shows with linked genres.

12. **11-genre_id_all_shows.sql**
    - Script to list all shows with genre IDs, including NULL values.

13. **12-no_genre.sql**
    - Script to list shows without linked genres.

14. **13-count_shows_by_genre.sql**
    - Script to count shows by genre.

15. **14-my_genres.sql**
    - Script to list genres of a specific show.

16. **15-comedy_only.sql**
    - Script to list Comedy shows.

### Environment
- **OS:** Ubuntu 20.04 LTS
- **MySQL Version:** 8.0.25
- **Editors:** vi, vim, emacs

### Installation
To install MySQL 8.0 on Ubuntu 20.04 LTS:
```bash
$ sudo apt update
$ sudo apt install mysql-server
```

### Usage
1. Clone the repository:
   ```bash
   $ git clone https://github.com/username/repository.git
   $ cd repository
   ```
2. Execute each SQL script using MySQL:
   ```bash
   $ cat script_name.sql | mysql -hlocalhost -uroot -p
   ```

### Resources
- [MySQL Cheat Sheet](https://devhints.io/mysql)
- [MySQL 8.0 SQL Statement Syntax](https://dev.mysql.com/doc/refman/8.0/en/sql-syntax.html)
- [MySQL Tutorial](https://www.mysqltutorial.org/)
