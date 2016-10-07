Instructions for User
=====================

Setting Portsetter to setport
-----------------------------
Making an alias for portsetter

1. In the bash terminal go to the home directory using: cd

2. At the home directory type nano ~/.bash_aliases this allows you to edit 
the portsetter command to setport.

3. Once your in the editor at the very bottom copy and paste the text below
alias setport='cd /home/ubuntu/workspace/Portsetter/;./portsetter.cpp.o'
while your still in the editor please copy and paste the text below too
alias setportTest='cd /home/ubuntu/workspace/Portsetter/;./portsetter-tests.cpp.o'
it will make it alot easier to unit test after you are done make sure to save 
and exit the editor.

4. Once your back in the bash terminal either close and reopen the terminal or
type in source .bashrc to refresh the terminal. In cloud 9 sometimes
it does not refresh after closing and opening a new terminal so type cd to get 
to the main directory then type source .bashrc after opening the new terminal 
just in case.

5. Make sure it worked by typing in the terminal setport -p 999 the output should
be Listening on port 999 if it worked


cpp files Executable Permissions
--------------------------------

In case the portsetter.cpp.o and portsetter-tests.cpp.o doesn't have exe
permissions.

1. In bash in the Portsetter directory type ls -l to check if the files have 
exe privliges if they don't refer to step 2

2. In bash type chmod +x portsetter.cpp.o and chmod +x portsetter-tests.cpp.o


Running the Unit Tests
----------------------
Steps to run unit testing in the terminal

1. Make sure you followed the setting portsetter to setport instructions
especially the steps that include making the aliases for the cpp files.

2. If you failed to execute the Setting Portsetter to setport steps please
refer back to the steps and complete them as explained.

3. Once you have made sure the above steps are completed all you need to do is 
type in the bash terminal setportTest and the unit testing will execute 
printing out the results.
