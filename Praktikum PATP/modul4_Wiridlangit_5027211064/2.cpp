#include <stdio.h>
#include <string.h>

struct NilaiUNMhs
{
    char nama[100];
    int mat;
    int ipa;
    int bind;
    int bing;
};

struct namamhs
{
    char siswa[100];
};

void find(struct NilaiUNMhs mhs[100], int x, int UNMhs)
{
    struct namamhs findthe[x];

    for(int j = 1; j <= x; j++)
    {
        scanf("%s", &findthe[j].siswa);
    }

    for(int j = 1; j <= x; j++)
    {
        int result = 0;
        int l;
        for(int k = 1; k <= UNMhs; k++)
        {
            if(strcmp(findthe[j].siswa, mhs[k].nama) == 0)
            {
                result = 1;
                l = k;
            }
        }

        if(result == 1)
        {
            printf("Nilai %s\n", findthe[j].siswa);
            printf("Matematika : %d\n", mhs[l].mat);
            printf("IPA : %d\n", mhs[l].ipa);
            printf("Bahasa Indonesia : %d\n", mhs[l].bind);
            printf("Bahasa Inggris : %d\n", mhs[l].bing);
        }

        if(result == 0)
        {
            printf("Nilai %s tidak ditemukan\n", findthe[j].siswa);
        }
    }
}

int main() 
{
    
    int UNMhs;
    scanf("%d", &UNMhs);
    struct NilaiUNMhs mhs[UNMhs];

    for(int i = 1; i <= UNMhs; i++)
    {
        scanf("%s", &mhs[i].nama);
        scanf("%d", &mhs[i].mat);
        scanf("%d", &mhs[i].ipa);
        scanf("%d", &mhs[i].bind);
        scanf("%d", &mhs[i].bing);
    }

    int x;
    scanf("%d", &x);

    find(mhs, x, UNMhs);

return 0;
}
