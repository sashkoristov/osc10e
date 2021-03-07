
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int value = 5;
int main()
{
    pid_t pid;

    pid = fork();
    
    if (pid == 0) { /* child process */
        value += 15;
        printf("CHILD: value = %d\n",value); /* LINE CHILD */
        return 0;
    }
    else if (pid > 0) { /* parent process */
        //wait(NULL);
        printf("PARENT: value = %d\n",value); /* LINE PARENT */
        return 0;
    }
}
