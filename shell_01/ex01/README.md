## 1. id -Gn $FT_USER

* **id** <br>This command is used to print user and group information for the specified user.

* **-G** <br>This option tells id to display the group IDs of the user instead of user IDs.

* **-n** <br>This option makes the output show group names instead of numeric group IDs.

* **$FT_USER** <br>This is an environment variable that presumably holds the username of the user you are interested in.

* **Output Example:** <br>If the user alice is part of groups *staff*, *developers*, and *admins*, this command would output:
  > staff developers admins

## 2. | tr ' ' ','

* The **pipe symbol** (|) <br>takes the output of the command on the left (id -Gn $FT_USER) and uses it as input for the command on the right (tr ' ' ',').

* **tr ' ' ','** <br>This command **replaces** all spaces in the output with commas.
  > staff,developers,admins

## 3. | tr -d '\n'

* **tr -d '\n'** <br>This command **deletes** any newline characters from the output.
