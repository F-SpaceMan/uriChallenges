#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
    string msg;
    int casas = 0, repet , c= 0;
    int uni = 0;

    cin >> repet;

    while(uni < repet)
    {
        cin >> msg;
        cin >> casas;

        int tam = msg.size();

        if(tam <= 50 && casas <= 25 && casas >= 0)
        {
            if(casas == 0)
            {
                cout << msg << endl;
            }
            else
            {
                for(c = 0; c < tam; c++)
                {
                    if((msg[c] - casas) < 'A')
                    {
                        msg[c] = ((msg[c] - casas) + 26);
                    }
                    else
                    {
                        msg[c] = (msg[c] - casas);
                    }
                }
                cout << msg << endl;
            }
        }

        uni++;
    }

    system("pause");
    return 0;

}
