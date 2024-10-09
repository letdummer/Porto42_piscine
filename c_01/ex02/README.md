#### 1. Header File Inclusion
```
#include <stdio.h>
```
- This line includes the standard input-output library, necessary for using functions like `printf`.

#### 2. Function Prototype
```
void ft_swap(int *a, int *b);
```
- This line declares the function `ft_swap`, which takes two pointers to integers as parameters. This allows the function to modify the values of the integers that these pointers point to.

#### 3. Main Function
```
int main(void)
{
    int a;
    int b;

    a = 10;                    // Initialize a with the value 10
    b = 20;                    // Initialize b with the value 20
    ft_swap(&a, &b);          // Call ft_swap with the addresses of a and b
    printf("a = %d | b = %d\n", a, b); // Print the swapped values of a and b
}
```

- Two integer variables `a` and `b` are declared and initialized to `10` and `20`, respectively.
- The `ft_swap` function is called, passing the addresses of `a` and `b` using the address-of operator (`&`).
- The program prints the values of `a` and `b` after the swap operation.

#### 4. Function Definition
```
void ft_swap(int *a, int *b)
{
    int reverse;

    reverse = *a;             // Store the value pointed to by a in reverse
    *a = *b;                  // Assign the value pointed to by b to the location pointed to by a
    *b = reverse;             // Assign the value stored in reverse to the location pointed to by b
}
```
- This function performs the swapping operation.
- **Local Variable**: `int reverse;` is declared to temporarily hold the value of `*a`.
- The first line inside `ft_swap` assigns the value pointed to by `a` to `reverse`.
- The second line assigns the value pointed to by `b` to the location pointed to by `a`.
- Finally, the last line assigns the value stored in `reverse` (original value of `*a`) to the location pointed to by `b`.

*Output*

`a = 20 | b = 10`

[Reference](https://www.programiz.com/c-programming/examples/swapping)
[Video](https://www.youtube.com/watch?v=CV74aNbKrpo)
