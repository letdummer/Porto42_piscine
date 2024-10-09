### 1. `#include <unistd.h>`

- This line includes the `unistd.h` header file.
- The `unistd.h` includes low-level system calls like `write()`. In this case, `write` is used to print output to the terminal.

### 2. `void	ft_putchar(char c)`

- This is the definition of a function named `ft_putchar` that takes one argument: a character (`char c`).
- `void` indicates that this function does not return a value.

### 3. `{ write(1, &c, 1); }`

- Inside the function, you call the `write` system call:
  - **`1`**: In Unix-based systems, file descriptor 1 is for standard output, so this tells the system to write to the terminal.
  - **`&c`**: This is the address (&) of the character `c`. The `write` function expects a pointer (a memory address), so you pass the address of `c` using `&c`.
  - **`1`**: This is the number of bytes to write. Since a `char` is 1 byte, you are writing exactly 1 byte (the character `c`).

- In essence, this function uses `write` to output the character passed to it (`c`) to the terminal.

### 4. `int	main(void)`

- This is the entry point of the program. The function `main` is where execution begins.
- The `int` return type indicates that the function returns an integer (though in this case, no return value is provided, meaning it will implicitly return `0` to indicate successful execution).

### 5. `{ ft_putchar('a'); }`

- Inside the `main` function, you call the `ft_putchar` function with the argument `'a'`, which means the character `'a'` is passed to the function.
- As a result, `ft_putchar` will use the `write` system call to output the character `'a'` to the terminal.

Font: [putchar() function in C](https://www.geeksforgeeks.org/putchar-function-in-c/).
