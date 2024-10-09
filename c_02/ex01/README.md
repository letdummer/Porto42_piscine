1. **Function Prototype**:
   ```
   char *ft_strncpy(char *dest, char *src, unsigned int n);
   ```
   - This line declares the function `ft_strncpy`, which will copy up to `n` characters from the source string (`src`) to the destination string (`dest`).

2. **Main Function**:
   ```
   int main(void)
   {
       char src[] = "Keep Swimming!";
       char dest[10];
       int n;

       n = 3;
       ft_strncpy(dest, src, n);
       printf("Source: %s\n", src);
       printf("Destiny: %s\n", dest);
   }
   ```
   - **String Initialization**:
     - `char src[] = "Keep Swimming!";`: This initializes the source string `src` with the value `"Keep Swimming!"`.
   - **Destination Array**:
     - `char dest[10];`: This declares an array `dest` of size 10, which will store the copied characters from `src`.
   - **Character Count**:
     - `int n;` declares an integer to specify how many characters to copy.
     - `n = 3;` sets `n` to 3, indicating that the first three characters of `src` should be copied.
   - **Function Call**:
     - `ft_strncpy(dest, src, n);`: Calls the custom function `ft_strncpy` to copy characters.
   - **Output**:
     - `printf("Source: %s\n", src);`: Prints the original source string.
     - `printf("Destiny: %s\n", dest);`: Prints the contents of `dest`. Note: "Destiny" should ideally be "Destination".

3. **Function Definition**:
   ```
   char *ft_strncpy(char *dest, char *src, unsigned int n)
   {
       unsigned int i;

       i = 0;
       while (i < n && src[i] != '\0')
       {
           dest[i] = src[i];
           i++;
       }
       while (i < n)
       {
           dest[i] = '\0';
           i++;
       }
       return (dest);
   }
   ```
   - **Function Signature**: 
     - `char *ft_strncpy(char *dest, char *src, unsigned int n)` defines the function that will copy characters from `src` to `dest`.
   - **Character Copying**:
     - `unsigned int i;` declares an index variable for iterating over the strings.
     - `while (i < n && src[i] != '\0')`: This loop copies characters from `src` to `dest` until either `n` characters have been copied or the null terminator in `src` is reached.
       - `dest[i] = src[i];` copies the character from `src` to `dest`.
       - `i++;` increments the index.
   - **Null Padding**:
     - `while (i < n)`: This loop fills the remaining spaces in `dest` with null characters (`'\0'`) if the number of characters copied is less than `n`.
       - `dest[i] = '\0';` sets the remaining indices in `dest` to null.
       - `i++;` increments the index until `n` is reached.
   - **Return**: `return (dest);` returns the destination pointer.

### Execution Flow
When the program runs:
1. The string `"Keep Swimming!"` is stored in `src`.
2. The `ft_strncpy` function is called to copy the first 3 characters from `src` to `dest`.
3. The copying results in `dest` containing `"Kee"` followed by a null terminator.
4. The original source string and the copied destination string are printed.

*Output*
```
Source: Keep Swimming!
Destiny: Kee
```

[man strncpy](https://linux.die.net/man/3/strncpy)
