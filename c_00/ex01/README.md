### 1. `#include <unistd.h>`
- This line includes the `unistd.h` header file, which is necessary for using the `write()` function.

### 2. `int main(void)`

```int main(void)
{
    ft_print_alphabet();
}
```

- This is the definition of the `main` function, where the execution of the program begins.
- It calls the `ft_print_alphabet()` function, which will print the alphabet when `main` is executed.

### 3. `void ft_print_alphabet(void)`

This is the definition of the `ft_print_alphabet` function:

```void ft_print_alphabet(void)
{
    char letter;
    letter = 'a';
    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}
```

- **`char letter;`** Declares a variable `letter` of type `char`, which will be used to iterate through the lowercase letters of the alphabet.
- **`letter = 'a';`** Initializes `letter` to `'a'`, the first letter of the alphabet.

### 4. `while (letter <= 'z')`

- This `while` loop continues to execute as long as `letter` is less than or equal to `'z'`.
- It ensures that the loop will iterate through each letter from `'a'` to `'z'`.

### 5. Inside the While Loop

```{
    write(1, &letter, 1);
    letter++;
}
```

- **`write(1, &letter, 1);`**
  - `1` indicates the file descriptor for standard output (the terminal).
  - `&letter` is the address of the variable `letter`, which allows `write()` to access the character.
  - `1` specifies that one byte (the character) should be written.
- **`letter++;`**: After writing the current letter, this increments `letter` to the next character in the ASCII table. For instance, if `letter` is `'a'`, it becomes `'b'`, and so on, until it reaches `'z'`.

*Output*

>`abcdefghijklmnopqrstuvwxyz`
