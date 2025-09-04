#include <stdio.h>
#include <stdlib.h>

int main()
{
    int floatSize = sizeof(float);
    int intSize = sizeof(int);
    int shortSize = sizeof(short);
    int doubleSize = sizeof(double);
    int longSize = sizeof(long);
    printf("Float size : %d", floatSize);
    printf("Int size : %d", intSize);
    printf("Short size : %d", shortSize);
    printf("Long size : %d", longSize);
    printf("Double size : %d", doubleSize);
    return 0;
}
