1. **Main Function**:
   ```
   int main(void)
   {
       char *phrase;

       phrase = "KeepSwimming";
       ft_putstr(phrase);
   }
   ```
   * `char *phrase;`: A pointer to a character is declared, which will be used to point to a string.
   * `phrase = "KeepSwimming";`: The pointer `phrase` is initialized to point to the string literal `"KeepSwimming"`.
   * `ft_putstr(phrase);`: The function `ft_putstr` is called with `phrase` as an argument, which will print the string.

2. **Function Definition**:
   ```
   void ft_putstr(char *str)
   {
       int i;

       i = 0;
       while (str[i] != 0)
       {
           write(1, &str[i], 1);
           i++;
       }
   }
   ```
   * `void ft_putstr(char *str)`: This function takes a pointer to a character (`char *str`) as an argument, which is expected to point to a string.
  * `int i;`: A variable `i` is declared to keep track of the current character index in the string.
   * `i = 0;`: The index is initialized to zero.
   * `while (str[i] != 0)`: This loop continues until it encounters the null terminator (`'\0'`) of the string, which indicates the end of the string.
   * `write(1, &str[i], 1);`: This line uses the `write` system call to write one character at a time to the standard output (file descriptor `1` corresponds to standard output). 
       - `&str[i]` is the address of the current character, and `1` specifies that one byte (character) should be written.
   * `i++;`: The index `i` is incremented to move to the next character in the string.

*Output*
>`KeepSwimming`

[Strings](https://www.youtube.com/watch?v=5p4YpQmZdwU)
