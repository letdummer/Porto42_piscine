## wc -l

* **wc** <br>This stands for "word count." It is a command used to count lines, words, and characters in the input text.

* **-l** <br>This option tells wc to count only the number of lines in the input. So, it will count how many entries find . produces.

## sed 's/ //g'

* **sed** <br>This is a stream editor used to perform basic text transformations on an input stream (a file or input from a pipeline).
* **'s/ //g'** <br>This is a sed substitution command that removes all spaces from the input. Specifically, it searches for spaces ( ) and replaces them with nothing (g means globally, or throughout the entire string).

****************************
**Example Scenario**

If the current directory contains the following structure:
>./file1.txt<br>
./file2.txt<br>
./subdir1/<br>
./subdir1/file3.txt<br>
./subdir2/<br>

Thus, the final output would be:
> 5
