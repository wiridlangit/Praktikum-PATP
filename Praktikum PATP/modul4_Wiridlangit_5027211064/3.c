#include <stdio.h>

void reverse(int x, int arr[])
{

    int indeks = 0;
    int temp;
    int i;

    for(i = x-1; i > x/2; i--)
    {
        temp = arr[i];
        arr[i] = arr[indeks];
        arr[indeks] = temp;
        indeks++;

    }
}

int main()
{

    int x;
    int i;
    scanf("%d", &x);
    int arr[x];
    
    for(i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

reverse(x, arr);

    for(i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }

return 0;
}
