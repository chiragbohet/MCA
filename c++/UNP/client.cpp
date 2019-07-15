#include <sys/socket.h>

/*
1) socket()
2) connect()

*/

int main(){

    int socketFD = socket(AF_INET, SOCK_STREAM, 0);


    return 0;
}