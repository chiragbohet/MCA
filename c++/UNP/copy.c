#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char buffer[2048];
void copy(int old,int new){

    int count;

    while((count = read(old,buffer,sizeof(buffer)))>0)
            write(new,buffer,count);
}
int main(int argc, char* argv[]){

int fdold,fdnew;

    if(argc != 3){
        printf("Need 2 arguements for copy program\n");
        exit(1);
    }

    fdold = open(argv[1],O_RDONLY);

    if(fdold == -1){

        printf("Cannot open the file %s\n",argv[2]);
        exit(1);

    }

    fdnew = creat(argv[2],0666);

    if(fdnew == -1){
        
        printf("cannot create file %s\n",argv[2]);
        exit(1);

    }

    copy(fdold,fdnew);
    exit(0);



}


