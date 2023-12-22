#include <stdio.h>


int P(int q, int x)
{
    if (q>x)
    return 0; 
    return (q*q+P(q+1,x)); 
}

int main()
{
    int x;
    scanf("%d",&x); 
    printf("%d", P(0,x));
    return 0;
}
