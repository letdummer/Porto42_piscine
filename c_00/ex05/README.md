### 1. `int main(void)`
```
int main(void)
{
    ft_print_comb();
}
```
This is the entry point of the program. It calls the `ft_print_comb()` function, which is intended to generate and print the combinations.

### 2. `void ft_putchar(char x)`
```
void ft_putchar(char x)
{
    write(1, &x, 1);
}
```
- This defines the `ft_putchar` function, which takes a single character `x` as a parameter.
- It uses the `write()` function to output the character `x` to the terminal.


### 3. `void ft_print_comb(void)`
```
void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = '0';

    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {    
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if (a != '7' || b != '8' || c != '9')  // Avoid trailing comma and space
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
```
- This defines the `ft_print_comb` function, which generates and prints all combinations of three different digits.
- **Variable Declarations**: It declares three integer variables `a`, `b`, and `c` to represent the digits.
- **Initialization**: `a` is initialized to `'0'`.

### 4. The Outer While Loop
```
while (a <= '7')
```
- This loop iterates while `a` is less than or equal to `'7'`. It ensures that the first digit does not exceed 7, allowing for valid combinations (the maximum digit for `b` and `c` should be 8 and 9, respectively).

### 5. The Middle While Loop
```
b = a + 1;

while (b <= '8')
```
- Within the first loop, `b` is initialized to `a + 1`, ensuring that `b` is always greater than `a`.
- The loop continues as long as `b` is less than or equal to `'8'`.

### 6. The Inner While Loop
```
c = b + 1;

while (c <= '9')
```
- Inside the second loop, `c` is initialized to `b + 1`, ensuring that `c` is greater than `b`.
- The loop continues while `c` is less than or equal to `'9'`.

### 7. Printing the Combinations
  ```
  ft_putchar(a);
  ft_putchar(b);
  ft_putchar(c);
  ```

*Output*
```
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089
```

This displays all combinations of three different digits in ascending order, separated by commas and spaces.

<br>Reference: [Oceano](https://www.youtube.com/watch?v=qYfa_KesdMM).
