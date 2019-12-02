#include<stdio.h>

int main()
{
    int L;
    char t;
    double M[12][12] = {};
    double soma, med = 0.0;
    int i, j = 0;

    scanf("%d", &L);
    getchar();

    if(L >= 0 && L <= 11)
    {
        scanf("%c", &t);
        for(i = 0; i <= 11; i++)
        {
            for(j = 0; j <= 11; j++)
            {
                scanf("%lf", &M[i][j]);
                if(i == L)
                    soma = soma + M[i][j];
            }
        }
        if(t == 'S')
            printf("%.1lf\n",soma);

        else if(t == 'M')
        {
            med = soma/12;
            printf("%.1lf\n",med);
        }

    }
    return 0;
}
