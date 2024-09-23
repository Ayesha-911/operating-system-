#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        return 1;
    }

    if (pid == 0) {
        char *args[] = {"ls", "-l", NULL};
        execvp("ls", args);
        perror("execvp failed");
        return 1;
    } else {
        printf("This is the parent process, running a different program...\n");
        wait(NULL);
}
