#include "Server.hpp"

#define NUM_SOCKS 3
int ports[NUM_SOCKS] = {8080, 8081, 8082};

void Server::listAllSockets()
{
    for(int i = 0; i < NUM_SOCKS; i++)
    {
        Socket *socket = new Socket;
        socket->setup(ports[i]);
        sockets.push_back(socket);
    }
}


void Server::waitClient()
{
    fd_set readSet;
    fd_set writeSet;

    FD_ZERO(&readSet);
    FD_ZERO(&writeSet);
    for(int i = 0; i < sockets.size(); i++)
    {
        
    }

}



// void Socket::getClientInfo()
// {
//     char clientrep[1024];
//     int valread = recv( clientSocket , &clientrep, 1024, 0); 
//     std::cout << clientrep << std::endl;
//     if(valread < 0)
//     {
//         std::cout << "First client request is empty" << std::endl;
//         exit(-1);
//     }
//     showPage("index.html"); // ! to change after parsing
// }

// void Socket::showPage(std::string dir)
// {
//     int fd = open(dir.c_str(), O_RDONLY);
//     char file[1024];
//     int len = read(fd, file, 1024);
//     // std::cout << file << std::endl;
    
//     std::string data(file, len);
//     std::string hello = "HTTP/1.1 200 OK\n" + data;
//     send(clientSocket , hello.c_str(), hello.size(), 0);
//     // clientSocket << fd;

// }