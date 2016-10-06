#pragma once

#include <sys/socket.h>
#include <netdb.h>

enum {
    INADDR_ANY      =   0,
};

struct servent {
	char *s_name;
	char **s_aliases;
	int s_port;
	char *s_proto;
};
