#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[1024];
    char *argv[64];

    while (1) {
        printf("cshell> ");
        fflush(stdout);

        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        int argc = 0;

        char *token = strtok(input, " \t\n");

        while (token != NULL && argc < 63) {
            argv[argc] = token;
            argc++;

            token = strtok(NULL, " \t\n");
        }

        argv[argc] = NULL;

        for (int i = 0; i < argc; i++) {
            printf("argv[%d] = \"%s\"\n", i, argv[i]);
        }
    }

    return 0;
}
