#include <stdio.h>
void pencarian(int numb[],int awal,int akhir)

{
   int i, j, pivot, temp;
   if(awal<akhir){
      pivot=awal;
      i=awal;
      j=akhir;
      while(i<j){
         while(numb[i]<=numb[pivot]&&i<akhir)
         i++;
         while(numb[j]>numb[pivot])
         j--;
         if(i<j){
            temp=numb[i];
            numb[i]=numb[j];
            numb[j]=temp;
         }
      }
      temp=numb[pivot];
      numb[pivot]=numb[j];
      numb[j]=temp;
      pencarian(numb,awal,j-1);
      pencarian(numb,j+1,akhir);
   }
}
int main()

{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    pencarian(a, 0, n-1);
    printf("%d", a[n-1]);
}
