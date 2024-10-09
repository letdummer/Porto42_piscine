### 1. **Main Function**:
   ```c
   int main(void)
   {
       int a;
       int b;

       a = 22444;
       b = 361;
       ft_ultimate_div_mod(&a, &b);
       printf("Division of a by b: %d\n", a);
       printf("Modulus of a by b: %d\n", b);
   }
   ```

   - `int a;` and `int b;`: Two integer variables, `a` and `b`, are declared.
   - `a = 22444;` and `b = 361;`: The variables are initialized with the values 22444 and 361, respectively.
   - `ft_ultimate_div_mod(&a, &b);`: The function `ft_ultimate_div_mod` is called, passing the addresses of `a` and `b` (using the `&` operator) to perform the division and modulus operations.
   - `printf("Division of a by b: %d\n", a);`: This line prints the result of the integer division of `a` by `b`.
   - `printf("Modulus of a by b: %d\n", b);`: This line prints the remainder of the division of `a` by `b`.

### 2. **Function Definition**:
   ```c
   void ft_ultimate_div_mod(int *a, int *b)
   {
       int div;
       int mod;

       div = *a / *b;
       mod = *a % *b;
       *a = div;
       *b = mod;
   }
   ```
   - `void ft_ultimate_div_mod(int *a, int *b)`: This defines the function that takes two integer pointers as arguments.
   - `int div;` and `int mod;`: Two local integer variables are declared to hold the division result and the modulus result, respectively.
   - `div = *a / *b;`: This computes the division of the value pointed to by `a` by the value pointed to by `b`, storing the result in `div`.
   - `mod = *a % *b;`: This computes the modulus (remainder) of the division, storing the result in `mod`.
   - `*a = div;`: The value at the address pointed to by `a` is updated with the quotient.
   - `*b = mod;`: The value at the address pointed to by `b` is updated with the remainder.

*Output*

```Division of a by b: 62
Modulus of a by b: 122
```
