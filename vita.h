#pragma once

#include <psp2/net/net.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/time.h>
#include <string.h>

struct hostent{
  char  *h_name;         /* official (cannonical) name of host               */
  char **h_aliases;      /* pointer to array of pointers of alias names      */
  int    h_addrtype;     /* host address type: AF_INET                       */
  int    h_length;       /* length of address: 4                             */
  char **h_addr_list;    /* pointer to array of pointers with IPv4 addresses */
};
#define h_addr h_addr_list[0]

#define sockaddr SceNetSockaddr
#define sockaddr_in SceNetSockaddrIn
#define msghdr SceNetMsghdr
#define iovec SceNetIovec
#define sockaddr SceNetSockaddr
#define in_addr SceNetInAddr

#define AF_INET SCE_NET_AF_INET
#define PF_INET SCE_NET_AF_INET
#define SOL_SOCKET SCE_NET_SOL_SOCKET
#define SO_SNDTIMEO SCE_NET_SO_SNDTIMEO 
#define IPPROTO_IP SCE_NET_IPPROTO_IP
#define IPPROTO_TCP SCE_NET_IPPROTO_TCP
#define TCP_NODELAY SCE_NET_TCP_NODELAY
#define SO_RCVBUF SCE_NET_SO_RCVBUF
#define SO_SNDBUF SCE_NET_SO_SNDBUF
#define SO_BROADCAST SCE_NET_SO_BROADCAST
#define SO_REUSEADDR SCE_NET_SO_REUSEADDR
#define SO_RCVTIMEO SCE_NET_SO_RCVTIMEO
#define SOCK_STREAM SCE_NET_SOCK_STREAM
#define SOCK_DGRAM SCE_NET_SOCK_DGRAM
#define INADDR_ANY SCE_NET_INADDR_ANY
#define SO_ERROR SCE_NET_SO_ERROR
#define AF_UNSPEC 0
#define AF_UNIX 1
#define SO_KEEPALIVE SCE_NET_SO_KEEPALIVE
#define IPPROTO_UDP SCE_NET_IPPROTO_UDP

#define recvmsg sceNetRecvmsg
#define sendmsg sceNetSendmsg
#define connect sceNetConnect
#define accept sceNetAccept
// #define shutdown sceNetShutdown
#define setsockopt sceNetSetsockopt
#define getsockopt sceNetGetsockopt
#define listen sceNetListen
#define bind sceNetBind
#define getsockname sceNetGetsockname
#define getpeername sceNetGetpeername

#define socket(a, b, c) sceNetSocket("sock", a, b, c)

#define ntohs __builtin_bswap16
#define htons __builtin_bswap16
#define ntohl __builtin_bswap32
#define htonl __builtin_bswap32

struct servent {
	char *s_name;
	char **s_aliases;
	int s_port;
	char *s_proto;
};
