#ifdef __linux__
	#include <raylib.h>
#elif _WIN32
	#include "raylib.h"
#endif

void shape(Rectangle*, int*, int*);
void cross(Rectangle*);
void circle(Rectangle*);