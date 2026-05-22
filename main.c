#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OPERATION_SUCCESSFUL 0
#define OPERATION_FAILED 1
#define TERMINAL_EXIT 2

int main()
{
char TEXT_PLACEMENT[512] = "";
char buffer[1024] = "";
  
while (1)
  {
    printf("user $ ");
    fgets();
    if (strcmp(TEXT_PLACEMENT, "exit TERMINAL"));
      break;

    TEXT_PLACEMENT = 0;
  }
  exit(TERMINAL_EXIT);
}

/* NOTES / REVIEW
https://pubs.opengroup.org/onlinepubs/009695399/functions/fopen.html
https://web.eng.fiu.edu/watsonh/EEL2880/FileIO-HW.pdf
*/
