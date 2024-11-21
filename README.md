
# Libft - My First Custom C Library

![Language](https://img.shields.io/badge/language-C-blue)
![Version](https://img.shields.io/badge/version-16.3-orange)

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Makefile Rules](#makefile-rules)
- [License](#license)

---

## Introduction
**Libft** is a custom C library that replicates many standard C library functions while introducing additional utility functions. This project is part of the 42 School curriculum and serves as a foundation for future projects. It emphasizes understanding the internal workings of standard functions and encourages creating efficient, reusable code.

---

## Features
### **Mandatory Part**
- **Libc Functions:** Reimplementations of standard C library functions such as `ft_strlen`, `ft_memcpy`, `ft_atoi`, etc.
- **Additional Functions:** Utility functions like `ft_substr`, `ft_strjoin`, `ft_split`, etc.

### **Bonus Part**
- **Linked List Utilities:** Functions to manipulate linked lists, including `ft_lstnew`, `ft_lstadd_back`, and `ft_lstmap`.

### **Technical Highlights**
- Adheres to strict memory management: No memory leaks or segmentation faults.
- Code is written following the **Norm** coding standard.
- Implements a modular approach using static functions for helper methods.

---

## Installation
Clone this repository and build the library:

\`\`\`bash
git clone <repository-url>
cd libft
make
\`\`\`

This will generate the `libft.a` static library file in the root directory.

---

## Usage
Include the library in your C projects to access its functionality:

1. Include the header file in your source files:
    \`\`\`c
    #include "libft.h"
    \`\`\`
2. Compile your program with `libft.a`:
    \`\`\`bash
    gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
    \`\`\`

---

## Project Structure
- **Header File:** `libft.h` contains function prototypes and struct declarations.
- **Source Files:** Implementations of all functions are organized as `ft_*.c`.
- **Makefile:** Automates the building and cleaning of the project.

### Key Functions
#### Libc Functions
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.
- String manipulation: `ft_strlen`, `ft_strchr`, `ft_strncmp`, etc.
- Memory manipulation: `ft_memset`, `ft_memcpy`, `ft_memmove`, etc.

#### Additional Functions
- `ft_split`: Splits a string into an array of substrings.
- `ft_itoa`: Converts an integer to a string.
- `ft_strtrim`: Trims characters from the start and end of a string.

#### Bonus Functions (Linked Lists)
- `ft_lstadd_front`: Adds a node to the front of a list.
- `ft_lstmap`: Creates a new list by applying a function to each element of an existing list.

---

## Makefile Rules
- `make` or `make all`: Builds the `libft.a` library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the `libft.a` library.
- `make re`: Cleans and rebuilds the library.
- `make bonus`: Builds the library with bonus functions.

---

## License
This project is licensed under the [42 School Guidelines](https://42.fr). Please refer to the school’s documentation for more details.

---
