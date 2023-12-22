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
    int x;
    int n;

    printf("Masukkan angka:");
    scanf("%d", &x);

    if (x < 1)
{
    printf("angka belum memenuhi syarat");
}

    for (n = 1; n <= x; n++)
{
    if (n %2 == 0)
    {
        printf("* ");
    }
    else
        printf("%d",n);
}

    return 0;

}
