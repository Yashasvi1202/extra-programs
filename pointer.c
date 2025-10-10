#include <stdio.h>
void main()
{
 int i=10;
 int *xptr;
 xptr=&i;
 printf("The value of i is %d\n",*xptr);
}
