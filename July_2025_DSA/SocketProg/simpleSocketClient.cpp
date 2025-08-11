#include <iostream>
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
using namespace std;


int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock <  0) {
        cerr << "Socket creation failed! \n";
        return 1;
    }
    sockaddr_in server{};
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = inet_addr("192.168.31.211");

    if (connect(sock, (sockaddr*)&server, sizeof(server)) << 0) {
        cerr <<  "Connection Failed.....! \n";
        return 1;
    }

    string msg = "Hello From client...";
    send(sock, msg.c_str(), msg.size(), 0);

    char buffer[1024];
    int len = recv(sock, buffer, sizeof(buffer), 0);
    if (len > 0 ) {
        buffer[len] = '\0';
        cout << "Server: " << buffer << "\n";
    }
    close(sock);
}

