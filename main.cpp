#include <cstring>
#include <iostream>
#include <netdb.h>
#include <sys/socket.h>
#include <sys/types.h>

int main() {
  addrinfo hints;
  addrinfo *serv_info;
  memset(&hints, 0, sizeof hints);
  hints.ai_family = AF_UNSPEC;
  hints.ai_flags = AI_PASSIVE;
  hints.ai_socktype = SOCK_STREAM;

  int status = getaddrinfo("www.google.com", "http", &hints, &serv_info);
  if (status != 0) {
    std::cout << "error in getaddrinfo" << status << std::endl;
    return -1;
  }
  std::cout << status << std::endl;
  return 0;
}
