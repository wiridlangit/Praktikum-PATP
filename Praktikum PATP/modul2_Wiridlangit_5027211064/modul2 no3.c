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
  int num;
  int x;
  int n;
  int prime;

  printf("Masukkan angka:");
  scanf("%d", &num);
  
  for (x = 2; x <= num; x++)
  {
    prime = 1;

    
    for (n = 2; n <= x/2; n++)
    {
      if(x % n == 0)
      {
        prime = 0;
        break;
      }
    }
    
    if (prime == 1 & x != 1)
    {
      printf("* ");
    } else
    {
      printf("%d ", x);
    }
  }
}
   

