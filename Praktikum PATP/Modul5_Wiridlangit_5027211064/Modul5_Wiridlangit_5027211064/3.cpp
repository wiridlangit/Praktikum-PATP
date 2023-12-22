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
int left(int a[], int n, int item) 

{
   for(int i=0;i<n;i++){
      if(item<=a[i])
         return i;
   }
   return -1;
}
int right(int a[], int n, int item) 

{
   for(int i=n-1;i>=0;i--){
      if(item>=a[i])
         return i+1;
   }
   return -1;
}
int main()

{
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
  pencarian(a,0,n-1);
  int m;
  scanf("%d", &m);
  int b[m][2];
  for(int i=0;i<m;i++)
    scanf("%d %d", &b[i][0], &b[i][1]);
  for(int i=0;i<m;i++){
    int l=left(a,n,b[i][0]);
    int r=right(a,n,b[i][1]);
    printf("%d\n", r-l);
  }
}