#include <sys/socket.h>
#include <netinet/in.h>     //sockaddr_in, sockaddr_in6, sockaddr_storage structure definition

void str_echo(int sockfd){

}

int main(int argc, char **argv){

    int listenfd, connfd;
    pid_t childpid;
    socklen_t clilen;

    if(argc < 2){
        printf("Usage : ./a.out <portnumber>");
    }

    struct sockaddr_in cliaddr, servaddr;

    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    bzero(servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(argv[1]);

    bind(listenfd, (void*)&servaddr, sizeof(servaddr));
    listen(listenfd,5);

    while(1){

        clilen = sizeof(cliaddr);
        connfd = accept(listenfd, (void*) &cliaddr, &clilen);

        if((childpid = fork()) == 0 ){
            close(listenfd);    //child closes listening socket
            str_echo(connfd);   //process request
            exit(0);
        }
        close(connfd);  //parent closes connected socket



    }



}