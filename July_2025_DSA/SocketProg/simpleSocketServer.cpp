#include <iostream>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <cstring>
using namespace std;

int main() {
    int sockServer =  socket(AF_INET, SOCK_STREAM, 0);
    if (sockServer < 0) {
        cerr<< "Failed to create... Socket...!\n";
        return 1;
    }

    sockaddr_in server{};
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = INADDR_ANY;

    if (::bind(sockServer, (sockaddr*)&server, sizeof(server)) < 0) {
        cerr << "Failed to connect/Bind...!\n";
        return 1;
    }

    listen(sockServer, 1);

    cout << "Waiting for clients........!\n";

    sockaddr_in client{};
    socklen_t clientSize = sizeof(client);
    int sockClient = accept(sockServer, (sockaddr*)&client, &clientSize);

    char buffer[1024];
    int len = recv(sockClient, buffer, sizeof(buffer) - 1 , 0);
    if (len > 0) {
        buffer[len] = '\0';
        cout << "Client: " << buffer << "\n";
        send(sockClient, "Hello from Server....!", 18, 0);
    }
    
    close(sockClient);
    close(sockServer);
    
    return 0;
}

