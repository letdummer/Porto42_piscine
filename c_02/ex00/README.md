1. **Header File Inclusion**:
   ```
   #include <stdio.h>
   ```
   - This line includes the standard input/output library, allowing the use of functions like `printf()`.

2. **Main Function**:
   ```
   int main(void)
   {
       char src[20] = "Keep Swimming";
       char dest[20];

       ft_strcpy(dest, src);
       printf("Source: %s\n", src);
       printf("Destiny: %s\n", dest);
   }
   ```
   - `char src[20] = "Keep Swimming";` This declares and initializes an array `src` with a string `"Keep Swimming"`. The size is 20, which provides extra space beyond the string length.
   - `char dest[20];` This declares another character array `dest` which will hold the copied string.
   - `ft_strcpy(dest, src);` This calls the custom function `ft_strcpy`, passing `dest` and `src` as arguments to copy the contents of `src` to `dest`.
   - `printf("Source: %s\n", src);` This prints the original source string.
   - `printf("Destiny: %s\n", dest);` This prints the copied string. (Note: "Destiny" seems to be a typo; it should be "Destination".)

3. **Function Definition**:
   ```
   char *ft_strcpy(char *dest, char *src)
   {
       int i;

       i = 0;
       while (src[i] != '\0')
       {
           dest[i] = src[i];
           i++;
       }
       dest[i] = src[i];
       return (dest);
   }
   ```
   - `char *ft_strcpy(char *dest, char *src)`: This defines a function that takes two pointers to characters as arguments: `dest` for the destination string and `src` for the source string.
   - `int i;`: A variable `i` is declared to keep track of the current character index.
   - `i = 0;`: The index is initialized to zero.
   - `while (src[i] != '\0')`: This loop iterates over each character in the source string until it reaches the null terminator (`'\0'`).
   - `dest[i] = src[i];`: Each character from the source string is copied to the destination string at the same index.
   - `i++;`: The index is incremented to move to the next character.
   - `dest[i] = src[i];`: After the loop, this line copies the null terminator from `src` to `dest`, ensuring that the destination string is properly terminated.
   - `return (dest);`: The function returns a pointer to the destination string.

### Execution Flow
When the program runs:
1. The string `"Keep Swimming"` is stored in `src`.
2. The `ft_strcpy` function is called to copy the contents of `src` to `dest`.
3. The function iterates over each character in `src`, copying it to `dest`, and finally adds the null terminator.
4. The original source string and the copied destination string are printed.

*Output*
```
Source: Keep Swimming
Destiny: Keep Swimming
```

<br>

>[`man strcpy`](https://man7.org/linux/man-pages/man3/strcpy.3.html).


Reference in [Video](https://www.youtube.com/watch?v=DOPs6c0f4Ek).
