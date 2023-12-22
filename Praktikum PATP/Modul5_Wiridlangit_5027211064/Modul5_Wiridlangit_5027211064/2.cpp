#include <stdio.h>

void pencarian(int numb[],int awal,int akhir){
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
int cari(int n, int a[], int dicari){
    int kiri=0, kanan=n-1;
    while (kiri<kanan){
        int tengah=(kiri+kanan)/2;
        if(a[tengah]<dicari) kiri=tengah+1;
        else kanan=tengah;
    }
    if(a[kiri]==dicari) return kiri;
    return -1;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    int s[9999];
    for(int i=n-1;i>=0;i--){
        s[a[i]]=i;
    }
    pencarian(a, 0, n-1);
    int m;
    scanf("%d", &m);
    int b[m];
    for(int i=0;i<m;i++)
        scanf("%d", &b[i]);
    for(int i=0;i<m;i++){
        int temu=cari(n, a, b[i]);
        if(temu==-1) printf("-1\n");
        else printf("%d\n", s[b[i]]);
    }
}