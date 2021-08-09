#include <math.h>

#define TPERI(a, b, c) (a + b + c)

#define S TPERI(a, b, c) / 2
#define TAREA(a, b, c) (sqrt(S*(S-a)*(S-b)*(S-c)))

#define SPERI(a) (4 * a)
#define SAREA(a) (a * a)

#define CPERI(r) (2 * 3.142 * r)
#define CAREA(r) (3.142 * r * r)
