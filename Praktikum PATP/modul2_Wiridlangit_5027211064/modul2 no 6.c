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
    char stc[99];
    int n;
    int x;

    printf("Enter sentence(kalimat): \n");
    gets(stc); 

    
    for(n=0; n <= strlen(stc); n++)
    { 
      x = (int)(stc[n]);

        if(stc[n-1] == '_')
        {
        if(x>=65 && x<=90) 
            printf("%c", stc[n]);
        else 
          
        if(x>=97 && x<=122)
        { 
            x = x - 32; 
            printf("%c", (char)(x)); 
        }
        }
        else 
        
        if(stc[n-1] != '_')
        {
        if(x>=65 && x<=90)
        { 
            x = x + 32; 
            printf("%c", (char)(x)); 
        } 
        else 
          
        if (x>=97 && x<=122)
        { 
            printf("%c", stc[n]); 
        }
        }          
    }

  return 0;
  }