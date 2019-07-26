//https://www.geeksforgeeks.org/dup-dup2-linux-system-call/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){

    int fd = open("dup.txt",O_CREAT|O_WRONLY|O_APPEND);
    if(fd < 0)
        printf("Error in opening file\n");

    int copyfd = dup(fd);

    char msg[] = "This will print to dup.txt file.";
    char msg2[] = "This will also print to dup.txt file.";

    write(fd, msg,sizeof(msg));
    write(copyfd,msg2,sizeof(msg2));

    return 0;
}
