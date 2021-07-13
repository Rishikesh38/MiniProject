#include "fun.h"
char getRandomS()
{
    char s;
    srand(time(0));
    char arr[] = {'R', 'P', 'S'};
    s = arr[rand()%3];
    return s;
}