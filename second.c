
#include <unistd.h>
#include <stdio.h>

int main()
{
char *cmnd="ls";
char *arg_list[]={"ls","-l",NULL};
printf("before execvp() \n");
int status = execvp(cmnd,arg_list);
printf("Status: %d\n",status);
}
