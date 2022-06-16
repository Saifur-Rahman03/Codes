#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	char *args[]={"/EXEC",NULL};
	execv(args[0],args);

	printf("Ending....\n");

	return 0;
}
