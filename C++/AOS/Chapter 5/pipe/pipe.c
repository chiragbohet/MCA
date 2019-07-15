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
    int p[2], i;

    if( pipe(p) < 0)
        exit(1);

    write(p[1],msg1,MSGSIZE);
    write(p[1],msg2, MSGSIZE);
    write(p[1],msg3, MSGSIZE);

    int bytesRead = 0;


    for( i = 0; i < 3; i++){
        bytesRead = 0;
        bytesRead = read(p[0],inbuf,MSGSIZE);
        printf("Bytes read : %d \nMsg : %s \n",bytesRead,inbuf);

    }



    return 0;
}