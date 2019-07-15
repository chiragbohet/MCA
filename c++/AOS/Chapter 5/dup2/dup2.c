//https://www.geeksforgeeks.org/dup-dup2-linux-system-call/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){

    int fd = open("dup.txt",O_CREAT|O_WRONLY|O_APPEND);
    if(fd < 0)
        printf("Error in opening file\n");

    dup2(fd,1); //stdout is replaced with dup.txt

    printf("This will be written in dup.txt .\n");

    return 0;
}
