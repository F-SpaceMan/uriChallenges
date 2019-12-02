#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n, m;
    int linha = 0, coluna = 0;

    cin>>n>>m;

    int ma[n][m];

    if(n >= 3 && m <=1000)
    {
        for(int i=0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> ma[i][j];
            }

        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(ma[i][j] == 42)
                {
                    if(ma[i-1][j-1] == 7 && ma[i-1][j] == 7 && ma[i-1][j+1] == 7 && ma[i][j-1] == 7 && ma[i][j+1] == 7 && ma[i+1][j-1] == 7 && ma[i+1][j] == 7 && ma[i+1][j+1] == 7)
                    {
                        linha = i+1;
                        coluna = j+1;
                        break;
                    }
                }
            }
        }
    }


    cout<< linha <<" "<< coluna <<endl;
    system("pause");
    return 0;
}
