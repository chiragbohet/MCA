#include <netinet/in.h>     //sockaddr_in, sockaddr_in6, sockaddr_storage structure definition

#include <sys/types.h>      //int8_t, unint8_t, int16_t etc.

#include <sys/socket.h>     /*sockaddr : The generic socket address structure used for passing in functions.
                              socket(int family, int type, int protocol) :  
                              connect(int sockfd, const struct sockaddr *servaddr, socklen_t addrlen) : */

#include <strings.h>        /*  Berkley Derived (old) : bzero(), bcopy(), bcmp()
                                ANSI C (new) : memset(), memcpy(), memcmp(), memmove()     */

#include <arpa/inet.h>      /* inet_aton(), inet_addr(), inet_ntoa()    :  Work only with ipv4
                               inet_pton(), inet_ntop() : Work with both ipv4 and ipv6      */

#include <iostream>

#include <cstring>          //memset() in c++
using namespace std;

int main(){

  int socketFD;

  socketFD = socket(AF_INET, SOCK_STREAM, 0);
 


}