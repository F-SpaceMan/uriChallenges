#include<stdio.h>

int main()
{
    char t;
    double M[12][12] = {};
    double soma = 0, med = 0;
    int i, j, num = 0;

    scanf("%c", &t);
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
            if(i < j && i + j > 11)
            {
                soma = soma + M[i][j];
                num++;
            }

        }
    }
    if(t == 'S')
        printf("%.1lf\n",soma);

    else if(t == 'M')
    {
        med = soma/num;
        printf("%.1lf\n",med);
    }

    return 0;
}

