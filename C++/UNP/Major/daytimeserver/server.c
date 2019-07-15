#include <sys/socket.h>

int main(){

    int listenfd, connfd;
    socklen_t len;
    struct sockaddr_in servaddr, cliaddr;
    
    listenfd = socket(AF_INET, SOCK_STREAM, 0);

    bzero(&servaddr, sizeof(servaddr));
    
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(13);

    bind(listenfd, (void*) &servaddr, sizeof(servaddr));
    listen(listenfd, 5);

    while(1){

        len = sizeof(cliaddr);  // maximum size of IPv4 socket

        connfd = accept(listenfd, (void*) &cliaddr, &len);
        


    }


    return 0;
}