#### 1. Header File Inclusion
```
#include <stdio.h>
```
- This line includes the standard input-output library, allowing the use of the `printf` function for outputting text to the console.

#### 2. Function Prototype
```
void ft_div_mod(int a, int b, int *div, int *mod);
```
- This line declares the function `ft_div_mod`, which takes two integers (`a` and `b`) and two pointers to integers (`div` and `mod`). This allows the function to output results back to the caller through pointers.

#### 3. Main Function
```
int main(void)
{
    int a;
    int b;
    int div;
    int mod;
```
- Four integer variables are declared: `a`, `b`, `div`, and `mod`.

```
    a = 22444;               // Initialize a with the value 22444
    b = 361;                 // Initialize b with the value 361
```
- The variables `a` and `b` are initialized with the values `22444` and `361`, respectively.

```
    ft_div_mod(a, b, &div, &mod); // Call ft_div_mod passing addresses of div and mod
```
- The `ft_div_mod` function is called with the values of `a` and `b`, along with the addresses of `div` and `mod` using the address-of operator (`&`). This allows `ft_div_mod` to modify the values of `div` and `mod` directly.

```
    printf("Division of a by b: %d\n", div); // Print the result of the division
    printf("Modulus of a by b: %d\n", mod);  // Print the result of the modulus
}
```
- After the function call, the results are printed using `printf`. The values of `div` and `mod` are displayed.

#### 4. Function Definition
```
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;           // Set div to the result of a divided by b
    *mod = a % b;           // Set mod to the remainder of a divided by b
}
```
- This function takes two integers `a` and `b`, and pointers `div` and `mod`.
- Inside the function:
  - `*div = a / b;` calculates the integer division of `a` by `b` and stores the result in the location pointed to by `div`.
  - `*mod = a % b;` calculates the remainder of `a` divided by `b` and stores it in the location pointed to by `mod`.

*Output*

```
Division of a by b: 62
Modulus of a by b: 182
```
