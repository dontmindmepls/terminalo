#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// to be debugged...

char * echo_helper(char echo_string[])
{
    char workwith[1024] = "";
    
    char * token = strtok(echo_string, " ");
    
    while (token != NULL)
    {
        strcat(workwith, token);
        strcat(workwith, " ");
        
        token = strtok(NULL, " ");
    }
    
    char * toBeReturned = malloc(1024 * sizeof(char));
    
    strcpy(toBeReturned, workwith);
    
    return toBeReturned;
}

void echo(char * echo_string_pointer)
{
    printf("%s\n\n", echo_string_pointer);
    free(echo_string_pointer);
}

/* NOTES

strcat(dest, src)
malloc() memory persists even through methods, so you just have to free it at some point
strcpy(dest, src)
*/
