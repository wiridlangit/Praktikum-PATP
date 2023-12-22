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

    int n;
    printf("masukkan data angka \n ");
    scanf("%d", &n); 
    
    if (n > 999)
    {
    printf("Incorrect \n");
    return 0;
	}

    int p = n % 10;
    n = n / 10;
    int q = p;
    int r = n % 10;
    n = n / 10;

    int s = n % 10;
    n = n / 10;
    
    if(s==1)
	{
    printf("Seratus ");
	}
    if(s==2)
	{
    printf("Dua Ratus ");
	}
    if(s==3)
	{
    printf("Tiga Ratus ");
	}
    if(s==4)
	{
    printf("Empat Ratus ");
	}
    if(s==5)
	{
    printf("Lima Ratus ");
	}
    if(s==6)
	{
    printf("Enam Ratus ");
	}
    if(s==7)
	{
    printf("Tujuh Ratus ");
	}
    if(s==8)
	{
    printf("Delapan Ratus ");
	}
    if(s==9)
	{
    printf("Sembilan Ratus ");
	}
    
    if(r==1 && p==0)
	{
    printf("Sepuluh ");
	}
    if(r==2)
	{
    printf("Dua Puluh ");
	}
    if(r==3)
	{
    printf("Tiga Puluh ");
	}
    if(r==4)
	{
    printf("Empat Puluh ");
	}
    if(r==5)
	{
    printf("Lima Puluh ");
	}
    if(r==6)
	{
    printf("Enam Puluh ");
	}
    if(r==7)
	{
    printf("Tujuh Puluh ");
	}
    if(r==8)
	{
    printf("Delapan Puluh ");
	}
    if(r==9)
	{
    printf("Sembilan Puluh ");
	}
    
    if(r==1)
	{
    if(q==1)
	{
    printf("Sebelas ");
	}
    if(q==2)
	{
    printf("Dua Belas ");
	}
    if(q==3)
	{
    printf("Tiga Belas ");
	}
    if(q==4)
	{
    printf("Empat Belas ");
	}
    if(q==5)
	{
    printf("Lima Belas ");
	}
    if(q==6)
	{
    printf("Enam Belas ");
	}
    if(q==7)
	{
    printf("Tujuh Belas ");
	}
    if(q==8)
	{
    printf("Delapan Belas ");
	}
    if(q==9)
	{
    printf("Sembilan Belas ");
	}

    }
     
    if (r!=1)
    {
    if(p==1)
	{
    printf("Satu ");
	}
    if(p==2)
	{
    printf("Dua ");
	}
    if(p==3)
	{
    printf("Tiga ");
	}
    if(p==4)
	{
    printf("Empat ");
	}
    if(p==5)
	{
    printf("Lima ");
	}
    if(p==6)
	{
    printf("Enam ");
	}
    if(p==7)
	{
    printf("Tujuh ");
	}
    if(p==8)
	{
    printf("Delapan ");
	}
    if(p==9)
	{
    printf("Sembilan ");
	}
     }
     return 0;
     
 }