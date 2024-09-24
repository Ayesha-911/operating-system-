#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
char *cmnd="ls";
char *arg_list[]={"ls","-l",NULL};
printf("Before execvp()\n");
printf("Creating another process using fork()\n");
pid_t p=fork();
int status=0;
if (p==0)
{ printf("child process\n");
  exit(1);
}
 else
{
printf("Parent process\n");
 wait(NULL);
 printf("Now this line will be executed\n");
}
}
