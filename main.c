#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WIN32_LEAN_AND_MEAN // side note but the old windows programmers had some great humor lol
#include <windows.h>

#include "functions.h"

int main()
{
    
char CHAR_INPUT[1024] = "";
printf("===== TERMINALO - Type 'exit' to exit the terminal. =====\n");

char workingdir[1024] = "";

// char user[] = "";

while (1)
  {
    printf("user $ ");
    fgets(CHAR_INPUT, sizeof(CHAR_INPUT), stdin);
    CHAR_INPUT[strlen(CHAR_INPUT) - 1] = '\0';
    
    if (strcmp(CHAR_INPUT, "exit") == 0) // done
        break;
        
    else if (strncmp(CHAR_INPUT, "echo", 4) == 0) // done
    {
        echo(echo_helper(CHAR_INPUT));
    }
    
    else if (strncmp(CHAR_INPUT, "pwd", 3) == 0) // unfinished 
    {
        pwd();
    }
    
    else if (strncmp(CHAR_INPUT, "touch", 5) == 0) // unfinished
    {
        touch(CHAR_INPUT);
    }
    
  }
  exit(TERMINAL_EXIT);
}

/* USEFUL REVIEW
https://pubs.opengroup.org/onlinepubs/009695399/functions/fopen.html
https://web.eng.fiu.edu/watsonh/EEL2880/FileIO-HW.pdf
https://stackoverflow.com/questions/985051/what-is-the-purpose-of-fork
https://www.geeksforgeeks.org/c/strcmp-in-c/
https://www.w3schools.com/c/ref_string_strncmp.php
https://www.geeksforgeeks.org/c/how-to-split-a-string-by-a-delimiter-in-c/
https://www.geeksforgeeks.org/c/concatenating-two-strings-in-c/
https://www.geeksforgeeks.org/c/c-define-preprocessor/
https://www.geeksforgeeks.org/c/sprintf-in-c/
https://www.geeksforgeeks.org/c/fgets-function-in-c/
https://www.geeksforgeeks.org/c/strcpy-in-c/
https://courses.cs.washington.edu/courses/cse374/20au/lectures/12-structs-in-c/12-structs-in-c.pdf
https://www.open-std.org/jtc1/sc22/WG14/www/docs/n3054.pdf

basic linux commands to be replicated (will add more as i finish more)
===
- exit
- echo
- pwd
- touch


*/
