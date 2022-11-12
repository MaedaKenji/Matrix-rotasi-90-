#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,j;
    printf("Masukkan baris "); scanf("%d",&i);
    printf("Masukkan kolom "); scanf("%d",&j);

    int array[i][j];
    int array2[j][i];

    for (int a=0;a<i;a++)
    {
        for (int b=0; b<j;b++)
        {
            printf("Masukkan elemen baris ke %d kolom ke %d: ",a+1,b+1);
            scanf("%d", &array[a][b]);
        }

    }

    for (int a=0;a<i;a++)
    {
        for (int b=0;b<j;b++)
        {
            printf("%d ", array[a][b]);
        }
    printf("\n");
    }

    int k=i-1;
    int l=0;
    for (int a=0;a<j;a++)
    {
        for(int b=0;b<i;b++)
        {
            array2[a][b]= array[k][l];
            k--;
        }
    k=i-1;
    l++;
    }

printf("\n\n");
    for (int a=0;a<j;a++)
    {
        for (int b=0;b<i;b++)
        {
            printf("%d ", array2[a][b]);
        }
    printf("\n");
    }

    return 0;
}
