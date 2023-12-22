#include <stdio.h>

int naik (int a, int b, int*c) 
{
    *c = a + b;
    return *c;
}

int main() 
{
    int a = 1, b = 2;
    int c;
    printf("%d", naik(a, b, &c));
    
return 0;
}
