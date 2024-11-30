#include "pwd.h"
#include <stdio.h>
#include <unistd.h>

void pwd(void){
    char cwd [1024];

    if(getcwd(cwd, sizeof(cwd)) != NULL)
        printf("%s\n", cwd);
    else
        printf("Error retrieving the current working directory.");
}