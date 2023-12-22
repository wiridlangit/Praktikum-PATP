#include <stdio.h>
//vscode tidak bisa mengcompile jika dalam bentuk c, tetapi bisa dalam online compiler.

int maximum(int x, int y[])
{
    int N=1;

    for(int j=0;j<x;j++)
    {
    if(N<y[j])N=y[j];
    }
    return N;
}

int minimum(int x, int y[])
{
    int n=9999999;

    for(int k=0;k<x;k++)
    {
    if(n>y[k])n=y[k];
    }
    return n;
}

int main()
{
    int x;
    scanf("%d", &x);
    int y[x];

    for(int i=0;i<x;i++)
    
    {
    scanf("%d", &y[i]); 
    }
    printf("Max: %d\n", maximum(x,y));
    printf("Min: %d", minimum(x,y));

    return 0;
}
