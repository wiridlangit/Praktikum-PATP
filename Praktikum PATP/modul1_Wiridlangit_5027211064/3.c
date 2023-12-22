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

    int p, q, r, s;

    printf("Input angka \n");
    scanf("%d %d %d %d", &p, &q, &r, &s);

    if (p == 0 && q == 0 && r == 0 && s == 0) 
		
    {
        printf("1 1 1 1 1 1 0"); 
    } 
    	
	else 
    
    if (p == 0 && q == 0 && r == 0 && s == 1) 
		
    {
        printf("0 1 1 0 0 0 0"); 
    } 
        
	else 
    
    if (p == 0 && q == 0 && r == 1 && s == 0) 
		
    {
        printf("1 1 0 1 1 0 1"); 
    } 
        
	else 
    
    if (p == 0 && q == 0 && r == 1 && s == 1) 
		
    {
        printf("1 1 1 1 0 0 1");
    } 
       	
	else 
    
    if (p == 0 && q == 1 && s == 0 && r == 0) 
		
    {
        printf("0 1 1 0 0 1 1");
    } 
      	
	else 
    
    if (p == 0 && q == 1 && r == 0 && s == 1) 
		
    {
        printf("1 0 1 1 0 1 1"); 
    } 
	
	else 
    
    if (p == 0 && q == 1 && r == 1 && s == 0) 
		
    {
        printf("1 0 1 1 1 1 1"); 
    } 
       	
	else 
    
    if (p == 0 && q == 1 && r == 1 && s == 1) 
		
    {
        printf("1 1 1 0 0 0 0"); 
    } 
      	
	else 
    
    if (p == 1 && q == 0 && r == 0 && s == 0) 
		
    {
        printf("1 1 1 1 1 1 1");    
    } 
       	
	else 
    
    if (p == 1 && q == 0 && r == 0 && s == 1) 
		
    {
        printf("1 1 1 1 0 1 1"); 
    } 
    
	else 

	{
        printf("0 0 0 0 0 0 0");
    }
    
    return 0;
    
}