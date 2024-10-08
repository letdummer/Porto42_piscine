<h3> During my piscine period, I chose to use the Vim text editor, although there are more intuitive options available, such as Visual Studio Code. Here are some of the configurations I added to Vim to optimize my work and the editor's appearance.</h3>

> Note: you should download and rename the file to "*.vimrc*"


<h3> Below, I also list some shortcuts that I frequently use.</h3>

* w    Moves the cursor to the start of the next word.
* b    Moves the cursor to the start of the previous word.
* 0    Moves the cursor to the beginning of the line.
* $    Moves the cursor to the end of the line.
* gg   Moves the cursor to the beginning of the file.
* G    Moves the cursor to the end of the file.

<h4>Text Editing.</h4>

* dd   Deletes (cuts) the current line.
* yy   Copies the current line (yank).
* p    Pastes after the cursor.
* P    Pastes before the cursor.
* x    Deletes the character under the cursor.
* u    Undoes the last change.
* cw   Deletes the current word and enters insert mode.
* ciw  Deletes the content of the current word and enters insert mode.
* r    Replaces the character under the cursor.
* Ctrl + r  Redoes the undone change.

<h4>File Management.</h4>

* :w   Saves the current file.
* :q   Quits Vim.
* :wq  Saves and quits Vim.
* :q!  Quits without saving.
* :e [file_name]    Opens a new file.
* :w [file_name]    Saves the current file with a new name.

<h4>Search and Replace.</h4>

* /word  Searches for "word" in the text.
* n      Goes to the next search occurrence.
* N      Goes to the previous search occurrence.
* :%s/old/new/g    Replaces all occurrences of "old" with "new" in the file.
