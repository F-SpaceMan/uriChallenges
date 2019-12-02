#include<iostream>
#include<stdlib.h>


using namespace std;

int main()
{
    int atributo;
    int skills;
    int nucartasM, nucartasL;
    int escolhaM, escolhaL;
    long int skillm[100][100] = {};
    long int skileo[100][100] = {};

    while(cin >> skills >> nucartasM >> nucartasL)
    {
        for(int i = 0; i < nucartasM; i++)
        {
            for(int j = 0; j < skills; j++)
                cin >> skillm[i][j];
        }
        for(int i = 0; i < nucartasL; i++)
        {
            for(int j = 0; j < skills; j++)
                cin >> skileo[i][j];
        }
        cin >> escolhaM >> escolhaL;

        cin >> atributo;


        if(skillm[escolhaM-1][atributo-1] > skileo[escolhaL-1][atributo-1])
            cout << "Marcos" << endl;
        else if(skillm[escolhaM-1][atributo-1] < skileo[escolhaL-1][atributo-1])
            cout << "Leonardo" << endl;
        else
            cout << "Empate" << endl;
    }


    system("pause");
    return 0;
}
