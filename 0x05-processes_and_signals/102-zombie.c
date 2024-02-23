#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void create_zombie_processes() {
    pid_t pid;

    // Create 5 zombie processes
    for (int i = 0; i < 5; i++) {
        pid = fork();

        if (pid < 0) {
            // Error occurred
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process
            exit(EXIT_SUCCESS);
        } else {
            // Parent process
            printf("Zombie process created, PID: %d\n", pid);
            sleep(1); // Sleep for 1 second to allow the parent to create the next child
        }
    }
}

int main() {
    // Create zombie processes
    create_zombie_processes();

    // Keep the program running for a while
    printf("Zombie processes created. This program will keep running.\n");
    while (1) {
        sleep(1);
    }

    return 0;
}

