bject-Relational Mapping with Python

## Introduction
This project aims to demonstrate the implementation of Object-Relational Mapping (ORM) in Python using the SQLAlchemy library. The project involves connecting to a MySQL database and performing various operations such as querying and filtering data using both raw SQL queries and SQLAlchemy's ORM.

## Installation
To run the scripts in this project, follow these steps:

1. Clone the repository:
    ```
    git clone https://github.com/your-username/alx-higher_level_programming.git
    ```

2. Navigate to the project directory:
    ```
    cd alx-higher_level_programming/0x0F-python-object_relational_mapping
    ```

3. Install dependencies:
    ```
    sudo apt-get install python3.8-venv
    python3 -m venv venv
    source venv/bin/activate
    sudo apt-get install python3-dev
    sudo apt-get install libmysqlclient-dev
    sudo apt-get install zlib1g-dev
    sudo pip3 install mysqlclient
    sudo pip3 install SQLAlchemy
    ```

## Usage
### Scripts
1. **0-select_states.py**: Lists all states from the database hbtn_0e_0_usa.
    ```
    ./0-select_states.py <mysql_username> <mysql_password> <database_name>
    ```

2. **1-filter_states.py**: Lists all states with a name starting with 'N' from the database hbtn_0e_0_usa.
    ```
    ./1-filter_states.py <mysql_username> <mysql_password> <database_name>
    ```

3. **2-my_filter_states.py**: Displays all values in the states table of hbtn_0e_0_usa where the name matches the provided argument.
    ```
    ./2-my_filter_states.py <mysql_username> <mysql_password> <database_name> <state_name>
    ```

4. **3-my_safe_filter_states.py**: Displays all values in the states table of hbtn_0e_0_usa where the name matches the provided argument, preventing SQL injection.
    ```
    ./3-my_safe_filter_states.py <mysql_username> <mysql_password> <database_name> <state_name>
    ```

5. **4-cities_by_state.py**: Lists all cities from the database hbtn_0e_4_usa along with their corresponding states.
    ```
    ./4-cities_by_state.py <mysql_username> <mysql_password> <database_name>
    ```

### Example
```
./0-select_states.py root root hbtn_0e_0_usa
./1-filter_states.py root root hbtn_0e_0_usa
./2-my_filter_states.py root root hbtn_0e_0_usa 'Arizona'
./3-my_safe_filter_states.py root root hbtn_0e_0_usa 'Arizona'
./4-cities_by_state.py root root hbtn_0e_4_usa
```

## Project Structure
```
0x0F-python-object_relational_mapping/
│
├── 0-select_states.py
├── 1-filter_states.py
├── 2-my_filter_states.py
├── 3-my_safe_filter_states.py
├── 4-cities_by_state.py
├── README.md
└── ...
```

## Credits
This project is a part of the ALX Software Engineering program, provided by ALX Africa in collaboration with Holberton School.

