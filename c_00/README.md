## Compiling C files with GCC (GNU Compiler Collection)

>`gcc file.c -o output_program`

This command compiles `file.c` into an executable named `output_program`. <br>If you omit the `-o` flag, GCC will create an executable called `a.out` by default.

## Explanation of GCC flags

>gcc -Wall -Wextra -Werror file.c
>
  - `-Wall` <br>This flag enables all common warnings. It helps catch many potential issues in the code that might lead to bugs or unexpected behavior.
  - `-Wextra` <br>This enables additional warnings that aren't covered by -Wall. It's used to make the compiler even more strict about detecting possible issues.
  - `-Werror` <br>This flag treats all warnings as errors, meaning the compilation will stop if any warning is found.

## :bell: Tip to Piscine!

To simplify using these flags, you can create an alias in your shell configuration (like `.bashrc` or `.zshrc`). <br>Now, you can use `cc42 file.c` instead of typing out the full command every time you want to compile with these flags.

>`alias cc42='gcc -Wall -Wextra -Werror'`

<br>After compiling, run the program with `./a.out` ou `./name_of_file`.
