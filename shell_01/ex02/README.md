## 1. find . -name "*.sh"

* **find** <br>This command is used to search for files and directories in a specified directory hierarchy.
* **.** <br>This specifies the **current** directory as the starting point for the search.
* **-name "*.sh"** <br>This option tells find to look for files whose names end with **.sh**, which are typically shell script files.
  <br>The wildcard * matches any characters before .sh.

*Output Example* <br>If there are two shell script files, script1.sh and script2.sh, the command would output:
  > ./script1.sh <br>
./script2.sh

## 2. $(...)

* This syntax is known as command substitution. It allows the output of the command inside the parentheses to be used as input for another command. In this case, it captures the output of find . -name "*.sh".

* ## 3. basename -s ".sh"

* **basename** <br>This command is used to strip the directory path and optionally a specified suffix from file names, *returning only the base name* of the file.
* **-s ".sh"** <br>This option tells basename to **remove** the specified suffix (.sh) from the file names.

***********************
<br>**Example Scenario**

Suppose you have the following shell scripts in your current directory:
>./script1.sh<br>
./subdir/script2.sh

Running the command would yield:
>script1<br>
script2
