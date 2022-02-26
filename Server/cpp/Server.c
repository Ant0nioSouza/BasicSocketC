#include <stdio.h>
#include <sys/socket.h>

#define atoa(x) #x
#define PORTA_SOCKET 666


int main() {
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0); // Create the (UNBOUND) server socket
    if (serverSocket < 0) { // If the socket wasn't created
        puts("Error to create socket!");
        return -1;
    }
    char *string = atoa(serverSocket);
    printf("%s\n", string);
    
    puts("Succesfully created socket!");
    
    
    
    return 0;
}