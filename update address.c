#include <stdio.h>
void main()
{
 int i=10;
 int *xptr;
 xptr=&i;
 printf("The old value is %d\n",xptr);
 xptr++;
 printf("The new value is %d\n",&xptr);
 

}
