#include <stdio.h>
/* Pengingat
int / long: (bilangan bulat)                    int: %d, long: %l
float /  double: (bilangan desimal)             float: %f | double: %lf
char kata: a b c 1 2 # @                        char: %c
char kata[15] : hello | [15]: Jumlah huruf      string: %s
bool : true (1,5,-1) / false (0)                output: %d
*/

int main()
{ 

    int angkaBebas, x, y, total = 0;
    printf("masukkan data angka armstrong! \n\n");
    scanf("%d", &angkaBebas);
    x = angkaBebas;
	

	if (x > 999)
{
		printf("Incorrect");
		return 0;
}
	
   	if (x > 10)	
	{
       	y = x % 10;
       	x = x / 10;
       	total = y*y*y;
    }
    
    if (x > 10)
	{
       	y = x % 10;
       	x = x / 10;
       	total += y*y*y;
    }
    
    if (x > 10)
	{
       	y = x % 10;
       	x = x / 10;
       	total += y*y*y;
    }
    
    total += x*x*x;

    if (total == angkaBebas)
	{
       	printf("ini Armstrong \n\n");
    }
   	else
	{
    	printf("ini bukan Armstrong \n\n");
    }
    return 0;
    
}