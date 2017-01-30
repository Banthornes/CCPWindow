#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Config.h"

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		fprintf(stdout,"%s Version %d.%d.%d.%d\n",
            		argv[0],
            		CCPWindow_VERSION_MAJOR,
            		CCPWindow_VERSION_MINOR,
			CCPWindow_VERSION_MINI,
			CCPWindow_VERSION_MICRO);
	}	
	return 0;
}
