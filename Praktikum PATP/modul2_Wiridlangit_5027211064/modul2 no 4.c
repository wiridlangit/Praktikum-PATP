#include <stdio.h>
    /* Pengingat
int / long: (bilangan bulat)                    int: %d, long: %l
float /  double: (bilangan desimal)             float: %f | double: %lf
char kata: a b c 1 2 # @                        char: %c
char kata[15] : hello | [15]: Jumlah huruf      string: %s
bool : true (1,5,-1) / false (0)                output: %d
% bisa diartikan modulus (%2, %3, 5%2, dll)
*/
int main()
    
{
    int y;
    int n;

        printf("Masukkan jumlah angka yang akan diinput:") ;
        scanf("%d", &y);

    int x[y] ;

    for(n = 0; n < y; n++)
    { 
        scanf("%d", &x[n]);
    }

    for(n = 0; y > n; y--)
    { 
        printf("%d \n", x[y-1]); 
    }
return 0;
}