## 0x11. Python - Network #1

### Overview
This repository contains Python scripts focused on network programming tasks using the `urllib` and `requests` packages. Each script performs specific HTTP requests, processes responses, and handles errors as required by the project tasks.

### Learning Objectives
Upon completing this project, you will be able to:
- Fetch internet resources using `urllib` and `requests`.
- Decode HTTP response bodies.
- Make various HTTP requests such as GET, POST, PUT, etc.
- Work with JSON data from external services.

### Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All scripts are tested on Ubuntu 20.04 LTS with Python 3.8.5.
- Scripts should be executable and end with a new line.
- Use `#!/usr/bin/python3` as the shebang for Python scripts.
- Use `pycodestyle` (version 2.8.*) for Python code style compliance.
- Document all modules, classes, and functions using appropriate docstrings.
- Ensure code does not execute when imported (`if __name__ == "__main__":`).
- Avoid using external libraries beyond `urllib` and `requests`.

### Tasks

1. **0-hbtn_status.py**
   - Fetches https://alx-intranet.hbtn.io/status using `urllib`.

2. **1-hbtn_header.py**
   - Takes a URL, sends a request, and displays the `X-Request-Id` header value using `urllib`.

3. **2-post_email.py**
   - Sends a POST request with an email parameter and displays the response body using `urllib`.

4. **3-error_code.py**
   - Handles HTTP errors using `urllib` and prints the status code.

5. **4-hbtn_status.py**
   - Fetches https://alx-intranet.hbtn.io/status using `requests`.

6. **5-hbtn_header.py**
   - Takes a URL, sends a request, and displays the `X-Request-Id` header value using `requests`.

7. **6-post_email.py**
   - Sends a POST request with an email parameter using `requests` and displays the response body.

8. **7-error_code.py**
   - Handles HTTP errors using `requests` and prints the status code.

9. **8-json_api.py**
   - Sends a POST request with a letter parameter to search for a user using `requests`. Displays user information if found.

10. **10-my_github.py**
    - Uses Basic Authentication to access GitHub API and display user ID using `requests`.
