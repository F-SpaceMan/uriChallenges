#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n = 0, m = 0;
    int colun, lin, columo, limo;

    while(cin >> n >> m)
    {
        int triz[n][m] = {};

        if(n >= 2 && n <= 100)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    cin >> triz[i][j];
                }
            }
        }
        if(n >= 2 && n <= 100)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if(triz[i][j] == 1)
                    {
                        lin = i;
                        colun = j;
                    }
                    else if(triz[i][j] == 2)
                    {
                        limo = i;
                        columo = j;
                    }
                }
            }
        }
        int res = abs(limo - lin) + abs(columo - colun);

        cout << res << endl;
    }

    system("pause");
    return 0;
}
