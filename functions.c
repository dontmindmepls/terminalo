#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// to be debugged...

void echo (char * echo_string)
{
	printf("\n%s", echo_string);
}

void ls (char * fp)
{
	FILE * filepath = fopen(fp, 'r'); // maybe rewrite this entire fopen() sequence with opendir(), could be more what i am looking for
	
	if (filepath == NULL)
	{
		printf("%s is not a valid file path!", fp);
		// return OPERATION_FAILED was here origninally ; likely better to break; and then see if exit() could work differently
		break;
	}
	
	fclose(fp);
}
