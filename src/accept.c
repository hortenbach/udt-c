#include "udt.h"

int udt_accept(socket_t sock, sockaddr_t *addr, int *addr_len)
{
    return accept(sock, addr, (unsigned int *) addr_len);
}
