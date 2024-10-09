#### 1. Header File Inclusion
```
#include <stdio.h>
```
- This line includes the standard input-output library, which is necessary for using functions like `printf`.

#### 2. Function Prototype
```
void ft_ft(int *nbr);
```
- This line declares the function `ft_ft`, which takes a pointer to an integer (`int *nbr`) as its argument.

#### 3. Main Function
```
int main(void)
{
    int n;
    int *nbr;

    nbr = &n;         // nbr points to the *address* of **n**
    ft_ft(nbr);      // Call `ft_ft` with the address of **n**
    printf("%d", n); // Print the *value* of **n**
}
```
- The `main` function is the entry point of the program.
- `int n;` declares an integer variable `n`.
- `int *nbr;` declares a pointer `nbr` that will be used to point to an integer.
- `nbr = &n;` initializes the pointer `nbr` to point to the address of `n` (using the address-of operator `&`).
- `ft_ft(nbr);` calls the function `ft_ft`, passing the pointer `nbr`, which points to `n`.
- `printf("%d", n);` prints the value of `n` to the standard output. 

#### 4. Function Definition
```
void ft_ft(int *nbr)
{
    *nbr = 42;       // Set the value at the address pointed to by nbr to 42
}
```
- This defines the function `ft_ft`.
- Inside this function, `*nbr = 42;` dereferences the pointer `nbr` and assigns the value `42` to the memory location that `nbr` points to (which is the variable `n` in `main`).
- As a result, this changes the value of `n` to `42`.

*Output*

>`42`


[Introduction to pointers in C](https://www.youtube.com/watch?v=f2i0CnUOniA&pp=ygUNcG9pbnRlcnMgaW4gYw%3D%3D).
