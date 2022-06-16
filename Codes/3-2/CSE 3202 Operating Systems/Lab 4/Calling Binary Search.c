#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	char *args[]={"./SECOND",NULL};
	execv(args[0],args);
}
