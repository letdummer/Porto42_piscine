## Shell Commands

<h3> # File and Directory Management</h3>

* **ls** <br>Lists files and directories in the current directory.</h4>

  - **ls -l**  <br>Detailed listing with file permissions, sizes, etc.

  - **ls -a**  <br>Shows hidden files.


* **cd <directory_name>** <br>Changes the current director.

  - **cd ..**  <br>Moves to the parent directory.
  - **cd \~**  <br>Moves to the home directory.

* **mkdir <directory-name>** <br>Creates a new directory.

* **rm <file-name>** <br>Removes files or directories.
  - **rm -r <directory-name>** <br>Recursively deletes a directory and its contents.

* **cp <source-file> <destination>** <br>Copies files or directories.

* **mv <source-file> <destination>** <br>Moves or renames files and directories.

* **touch <file-name>**  <br>Creates an empty file or updates the timestamp of an existing file.

*  ** cat <file-name>** <br>Displays the content of a file.

<h3> # File Permissions and Ownership</h3>

* **chmod 755 <file-name>** <br>Changes file permissions. 

| # | Sum | rwx | Permission |
| ----------- | ----------- | ----------- | ----------- |
| 7 | 4(r) + 2(w) + 1(x)  | rwx | read, write and execute |
| 6 | 4(r) + 2(x) | rw- | read and write |
| 5 |  4(r) + 1(x) | r-x | read and execute |
| 4 |  4(r) +   | r-- | read only |
| 3 | 2(w) + 1(x)| -wx | write and execute |
| 2 | 2(w) | -w- | write only |
| 1 | 1(x) | --x | execute only |
| 0 | 0 | --- | none |

Font: [Wikipedia](https://en.wikipedia.org/wiki/Chmod).

<h3> # Archiving and Compression</h3>

* **tar -cvf <archive-name>.tar <directory>** <br>Archives and compresses files.
  - **tar -xvf <archive-name>.tar** <br>Extracts an archive.
 
* **clear** <br>Clears the terminal screen.
