# Libft

[![42 Francinette](https://img.shields.io/badge/42-Francinette-green)](https://profile.intra.42.fr/)  
[![Build](https://img.shields.io/badge/build-passing-brightgreen)](#)  
[![libft-unit-test](https://img.shields.io/badge/tests-passing-brightgreen)](#)  
[![License](https://img.shields.io/badge/License-MIT-blue)](LICENSE)

## Overview

**Libft** is a custom C library project from 42 school.  
The goal of this project is to reimplement a set of standard C library functions, and create additional useful functions for C programming, including:

- Memory manipulation functions
- String manipulation functions
- Character checks and conversions
- Dynamic memory allocation functions
- Linked list operations (bonus)

This library is designed to be **reusable** in all future 42 projects, such as `get_next_line`, `push_swap`, or `minishell`.

---

## Features

### Mandatory Functions

- **Memory functions**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **String functions**: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- **Character functions**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Conversion functions**: `ft_atoi`, `ft_itoa`
- **Memory allocation**: `ft_calloc`
- **File descriptor output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Functions (Linked List)

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## Usage

**1. Clone the repository**

```bash
git clone https://github.com/jbulot42/Libft.git
cd libft
```

**2. Compile the library**

```bash
make
```

- This creates libft.a containing all mandatory functions.
- To include bonus functions, use:

```bash
make bonus
```

**3. Include the library in your projects**

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, Libft!");
    ft_putendl_fd(str, 1);
    free(str);
    return 0;
}
```

**4. Compile your program with** `libft.a`

```bash
gcc main.c -L. -lft -o my_program
```

---

## File Structure

```graphql
libft/
├── src/          # Source files for mandatory functions
├── bonus/        # Source files for bonus linked list functions
├── libft.h       # Library header
├── libft.a       # Compiled library
├── Makefile      # Compilation rules
└── README.md
```

---

## Norm Compliance

- All functions are written following **42 coding standards**:
  - No more than 25 lines per function
  - Proper variable declarations
  - Memory management checked
  - No forbidden functions from the standard library (other than allowed ones)
- Fully compatible with **Francinette**, **War-Machine**, and other 42 tests.

---

## Author

Julien BULOT (jbulot) – 42 School  
Email: jbulot@outlook.fr  
GitHub: https://github.com/jbulot42

---

## License

This project is open source and licensed under the MIT License.
