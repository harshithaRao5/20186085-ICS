#include <stdio.h>
#include <limits.h>
#include <float.h>

void main(int argc, char const *argv[])
{
	printf("range of CHAR is %d to %d \n", CHAR_MIN, CHAR_MAX);
	printf("range of INT is %d to %d \n", INT_MIN, INT_MAX);
	printf("range of FLOAT is %d to %d \n", -FLT_MAX, FLT_MAX);
	printf("range of LONG is %d to %d \n", LONG_MIN, LONG_MAX);
	printf("range of DOUBLE is %d to %d \n", -DBL_MAX, DBL_MAX);
}