#include <stdio.h>

int faktor(int x)
{
    if(x==1) return 1; 
    return (x*faktor(x-1));
}

int main()
{
    int x;
    scanf("%d", &x); 
    printf("%d", faktor(x));
    return 0;
}
