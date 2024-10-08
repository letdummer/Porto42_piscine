## **git log --format='%H' -n5**

* **git log** <br>Show the commit history of a Git repository, starting from the most recent.

* **--format='%H'** <br>This option specifies the output format of the commits.
  - **%H** represents the full commit hash.
  - **-n5** This option limits the number of commits displayed to 5.

 *output:*
> abc123def4567890abcdef1234567890abcdef12 <br>
1234567890abcdef1234567890abcdef12345678 <br>
234567890abcdef1234567890abcdef12345679 <br>
34567890abcdef1234567890abcdef12345678a <br>
4567890abcdef1234567890abcdef123456789b <br>

Git log [documentation](https://git-scm.com/docs/git-log).
