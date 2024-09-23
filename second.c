#include <unistd.h>
#include <stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
void main()
{
char *cmnd="ls";
char *arg_list[] = {"ls","-l",NULL};
printf("Before execvp()\n");
printf("Creating another process using fork()\n");
pid_t p=fork();
int status = 0;
if(p==0)
{
printf("Child process\n");
status = execvp(cmnd,arg_list);
if (status==-1)
{printf("Incorrect termination\n");
exit(1);
}
}
else
{
 printf("Parent process\n");
 wait(NULL);
 printf("Now this part will get excecuted\n");
}
}
