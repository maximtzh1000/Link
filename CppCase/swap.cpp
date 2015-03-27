#include "swap.h"

extern int buf[];

int *bufp0=&buf[0];
int *bufp1=&buf[1];

void swap(){
    int tmp;
    tmp=*bufp0;
    *bufp0=*bufp1;
    *bufp1=tmp;
}