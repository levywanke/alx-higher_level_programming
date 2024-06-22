

# 0x10. Python - Network #0

## Overview
This repository contains various Bash and Python scripts designed to explore network programming concepts using HTTP requests and API interactions. Each script focuses on specific tasks related to making requests, handling responses, and understanding network protocols.


## Learning Objectives
By completing this project, you will gain knowledge in:
- Understanding HTTP and its components (URL, request, response, headers, body)
- Using cURL for making HTTP requests and interpreting responses
- Implementing basic HTTP methods (GET, POST, DELETE, OPTIONS)
- Working with JSON data in HTTP requests
- Scripting and automation in Bash and Python for network tasks

## Directory Structure
The repository is organized as follows:
- `0-body_size.sh`: Bash script to display the size of the body of an HTTP response.
- `1-body.sh`: Bash script to display the body of an HTTP response for a given URL.
- `2-delete.sh`: Bash script to send a DELETE request and display the body of the response.
- `3-methods.sh`: Bash script to display all HTTP methods supported by a server for a given URL.
- `4-header.sh`: Bash script to send a GET request with a custom header and display the body of the response.
- `5-post_params.sh`: Bash script to send a POST request with parameters and display the body of the response.
- `6-peak.py`: Python script to find a peak in an unsorted list of integers using an optimized algorithm.
- `6-peak.txt`: Text file explaining the complexity of the peak-finding algorithm.
- `100-status_code.sh`: Bash script to display only the status code of an HTTP response for a given URL.
- `101-post_json.sh`: Bash script to send a JSON POST request with a file as the body and validate the response.
- `102-catch_me.sh`: Bash script to make a request that forces the server to respond with a specific message.

## Environment
- **Operating System:** Ubuntu 20.04 LTS
- **Python Version:** Python 3.8.5
- **Code Style:** PEP 8 (via pycodestyle)

## Usage
Each script can be executed directly from the command line. Ensure scripts are executable (`chmod +x <script>`) before running.

### Examples
```bash
$ ./0-body_size.sh 0.0.0.0:5000
10

$ ./1-body.sh 0.0.0.0:5000/route_1
Route 2

$ ./2-delete.sh 0.0.0.0:5000/route_3
I'm a DELETE request

$ ./3-methods.sh 0.0.0.0:5000/route_4
OPTIONS, HEAD, PUT

$ ./4-header.sh 0.0.0.0:5000/route_5
Hello School!

$ ./5-post_params.sh 0.0.0.0:5000/route_6
POST params:
    email: test@gmail.com
    subject: I will always be here for PLD

$ python3 6-peak.py
# Output depends on the input list

$ ./100-status_code.sh 0.0.0.0:5000
200

$ ./101-post_json.sh 0.0.0.0:5000/route_json my_json_0
Valid JSON

$ ./102-catch_me.sh
You got me!
```
