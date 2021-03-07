#include <stdio.h>
#include <unistd.h>

int main()
{
	int i;

	for (i = 0; i < 4; i++){
		fork();
	}

	printf("I am process with pid = %d and my parent is %d\n", getpid(), getppid());

	return 0;
}


