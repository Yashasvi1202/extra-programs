#include <stdio.h>
int main()
{
    int pro=1,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
      pro=pro*i;
    }
    printf("The factoial of n is %d",pro);
    return 0;
}
