
# 0x15. JavaScript - Web jQuery

## Front-end
JavaScript

## Resources
Read or watch:
- What is JavaScript?
- Selector
- Get and set content
- Manipulate CSS classes
- Manipulate DOM elements
- API Introduction
- GET & POST request
- JQuery Ajax Tutorial #1 - Using AJAX & API’s
- What went wrong? Troubleshooting JavaScript
- JQuery
- JQuery API
- JQuery Ajax

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
- Why JQuery makes front-end programming so easy (don’t forget to tweet today, with the hashtag #ilovejquery :))
- How to select HTML elements in JavaScript
- How to select HTML elements with JQuery
- Differences between ID, class, and tag name selectors
- How to modify an HTML element style
- How to get and update an HTML element content
- How to modify the DOM
- How to make a GET request with JQuery Ajax
- How to make a POST request with JQuery Ajax
- How to listen/bind to DOM events
- How to listen/bind to user events

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be interpreted on Chrome (version 57.0)
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should be semistandard compliant with the flag `--global $: semistandard *.js --global $`
- You must use JQuery version 3.x
- You are not allowed to use `var`
- HTML should not reload for each action: DOM manipulation, update values, fetch data…

### More Info
- Import JQuery:
- html
<head>
    <script src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
</head>



## Tasks
### 0. No JQuery (mandatory)
Write a JavaScript script that updates the text color of the `<header>` element to red (#FF0000):
- Use `document.querySelector` to select the HTML tag
- Do not use the JQuery API

### 1. With JQuery (mandatory)
Write a JavaScript script that updates the text color of the `<header>` element to red (#FF0000):
- Use the JQuery API for element selection

### 2. Click and turn red (mandatory)
Write a JavaScript script that updates the text color of the `<header>` element to red (#FF0000) when the user clicks on the tag `DIV#red_header`:
- Use the JQuery API for element selection and event handling

### 3. Add `.red` class (mandatory)
Write a JavaScript script that adds the class `red` to the `<header>` element when the user clicks on the tag `DIV#red_header`:
- Use the JQuery API for element selection and class manipulation

### 4. Toggle classes (mandatory)
Write a JavaScript script that toggles the class of the `<header>` element when the user clicks on the tag `DIV#toggle_header`:
- The `<header>` element must always have one class: `red` or `green`, never both simultaneously
- Use the JQuery API for element selection and class manipulation

### 5. List of elements (mandatory)
Write a JavaScript script that adds an `<li>` element to a list when the user clicks on the tag `DIV#add_item`:
- The new element must be `<li>Item</li>`
- Add the new element to `UL.my_list`
- Use the JQuery API for element selection and DOM manipulation

### 6. Change the text (mandatory)
Write a JavaScript script that updates the text of the `<header>` element to "New Header!!!" when the user clicks on `DIV#update_header`:
- Use the JQuery API for element selection and content manipulation

### 7. Star wars character (mandatory)
Write a JavaScript script that fetches the character name from the URL: https://swapi-api.alx-tools.com/api/people/5/?format=json
- Display the fetched name in the HTML tag `DIV#character`
- Use the JQuery API for AJAX request and DOM manipulation

### 8. Star wars movies (mandatory)
Write a JavaScript script that fetches and lists the titles for all movies from the URL: https://swapi-api.alx-tools.com/api/films/?format=json
- List all movie titles in the HTML tag `UL#list_movies`
- Use the JQuery API for AJAX request and DOM manipulation

### 9. Say Hello! (mandatory)
Write a JavaScript script that fetches from https://hellosalut.stefanbohacek.dev/?lang=fr and displays the value of `hello` from that fetch in the HTML tag `DIV#hello`:
- Display the translation of "hello" in `DIV#hello`
- Your script must work when imported from the `<head>` tag
- Use the JQuery API for AJAX request and DOM manipulation

