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
    char str[99];
    int a = 0, 
    i = 0, 
    u = 0, 
    e = 0, 
    o = 0, n;

    printf("Masukkan string atau kata: ");
    gets(str);

    for (n = 0; n < strlen(str); n++)
    {
        if (str[n] == 'a' || str[n] == 'A')
        {
            a++;
        }
        else 
        
        if (str[n] == 'i' || str[n] == 'I')
        {
            i++;
        }
        else 
        
        if (str[n] == 'u' || str[n] == 'U')
        {
            u++;
        }
        else 
        
        if (str[n] == 'e' || str[n] == 'E')
        {
            e++;
        }
        else 
        
        if (str[n] == 'o' || str[n] == 'O')
        {
            o++;
        }
    }

    printf("A/a : %d \n", a);

    printf("I/i : %d \n", i);

    printf("U/u : %d \n", u);

    printf("E/e : %d \n", e);

    printf("O/o : %d \n", o);

    return 0;
}