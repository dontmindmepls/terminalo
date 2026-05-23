/* NOTES

- maybe later use malloc() or realloc() or calloc() or whatever to rework the memory on the input string to allow for
dynamic string size
- place

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main()
{
char CHAR_INPUT[1024] = "";
  
while (1)
  {
    printf("user $ ");
    fgets(CHAR_INPUT, sizeof(CHAR_INPUT), stdin);
    CHAR_INPUT[strlen(CHAR_INPUT) - 1] = '\0';
    
    if (strcmp(CHAR_INPUT, "exit TERMINAL") == 0)
        break;
    else if (strncmp(CHAR_INPUT, "echo ", 5) == 0)
    {
        char buffer[1024] = "";
        char * echo_string = strncpy(buffer, CHAR_INPUT, 1024)
        echo(echo_string);
    }
  }
  exit(TERMINAL_EXIT);
}

/* REVIEW
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
*/
