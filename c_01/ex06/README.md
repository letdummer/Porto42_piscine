1. **Main Function**:
   ```
   int main(void)
   {
       char text[] = "KeepSwimming";
       int count;

       count = ft_strlen(text);
       printf("length of the string: %d\n", count);
       return (0);
   }
   ```
   - `char texto[] = "KeepSwimming";`: This declares and initializes an array of characters (`text`) with the string literal `"KeepSwimming"`. This array will hold the characters of the string.
   - `int count;`: This declares an integer variable `count` to store the length of the string.
   - `count = ft_strlen(texto);`: The function `ft_strlen` is called with `text` as an argument to calculate the length of the string, and the result is stored in `count`.
   - `printf("length of the string: %d\n", count);`: This line prints the length of the string. 
   - `return (0);`: This indicates that the program has completed successfully.

2. **Function Definition**:
   ```
   int ft_strlen(char *str)
   {
       int i;

       i = 0;
       while (str[i] != '\0')
       {
           i++;
       }
       return (i);
   }
   ```
   - `int ft_strlen(char *str)`: This defines a function that takes a pointer to a character (`char *str`) as an argument, representing the string for which we want to calculate the length.
   - `int i;`: A variable `i` is declared to keep track of the current character index in the string.
   - `i = 0;`: The index is initialized to zero.
   - `while (str[i] != '\0')`: This loop continues until it encounters the null terminator (`'\0'`), which marks the end of the string.
   - `i++;`: The index `i` is incremented with each iteration, effectively counting the number of characters in the string.
   - `return (i);`: Once the loop finishes (when the null terminator is found), the function returns the value of `i`, which represents the length of the string.
``

*Output*
>`length of the string: 13`

<br>[Reference](https://www.youtube.com/watch?v=2AmfX5U-tIw)
