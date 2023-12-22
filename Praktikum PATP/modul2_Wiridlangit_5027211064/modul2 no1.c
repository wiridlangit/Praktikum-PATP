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

  printf("Mari mencari angka ganjil dan genap!");
  printf("\n");
  printf("Masukkan angkanya disini: ");
  scanf("%d", &x);

  if(x %2 == 0)
    printf("ini bilangan genap.");

  else
    printf("ini bilangan ganjil.");

  return 0;
}