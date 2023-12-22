#include <stdio.h>

int cari(int n, int a[], int dicari) {
    int kiri=0, kanan=n-1;
    while (kiri<kanan){
        int tengah=(kiri+kanan)/2;
        if(a[tengah]<dicari) kiri=tengah + 1;
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
    int m;
    scanf("%d", &m);
    int b[m];
    for(int i=0;i<m;i++)
        scanf("%d", &b[i]);
    for(int i=0;i<m;i++){
        printf("%d\n", cari(n,a,b[i]));
    }
}