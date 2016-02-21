#ifndef TNC_PATHS_H
#define TNC_PATHS_H

#include <stdio.h>
#include "server.h"

#define PATH_ROOT "/"
#define PATH_INDEXHTM "/index.htm"
#define PATH_INDEXHTML "/index.html"
#define PATH_DEFAULT_ERROR "./pages/%i.html"

char *get_index_path(TNCServer self);

#endif //TNC_PATHS_H