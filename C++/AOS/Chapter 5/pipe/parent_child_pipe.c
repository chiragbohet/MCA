//https://www.geeksforgeeks.org/pipe-system-call/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define MSGSIZE 16

char* msg1 = "hello, world #1"; 
char* msg2 = "hello, world #2"; 
char* msg3 = "hello, world #3"; 
  
int main(){

    char inbuf[MSGSIZE];
    int p[2], pid, nbytes;

    if( pipe(p) < 0)
        exit(1);

    if((pid = fork()) > 0)  //child process
        {   
            printf("Inside child\n");
            write(p[1], msg1, MSGSIZE); 
            write(p[1], msg2, MSGSIZE); 
            write(p[1], msg3, MSGSIZE); 
        }
    else{
            printf("Inside parent\n");
        while((nbytes = read(p[0],inbuf, MSGSIZE)) > 0) //parent process
            printf("%s \n",inbuf);
        if (nbytes != 0) 
            exit(2); 
        printf("Finished reading\n");     

    }

    return 0;
}   