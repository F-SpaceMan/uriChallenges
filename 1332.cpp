#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
    string p;
    int entradas = 0;

    cin >> entradas;
    int i = 0;
    while(i < entradas)
        {
            cin >> p;
            if(p.size() == 5)
            {
                if((p[0] == 't' && p[1] == 'h' && p[2] == 'r' && p[3] == 'e')||(p[1] == 'h' && p[2] == 'r' && p[3] == 'e' && p[4] == 'e')||(p[0] == 't' && p[2] == 'r' && p[3] == 'e' && p[4] == 'e')||(p[0] == 't' && p[1] == 'h' && p[3] == 'e' && p[4] == 'e')||(p[0] == 't' && p[1] == 'h' && p[2] == 'r' && p[4] == 'e'))
                {
                    cout << "3" << endl;
                }
            }
            else if(p.size() == 3)
            {
                if((p[0] == 't' && p[1] == 'w')||(p[1] == 'w' && p[2] == 'o')||(p[0] == 't' && p[2] == 'o'))
                    cout << "2" << endl;
                else if((p[0] == 'o' && p[1] == 'n')||(p[1] == 'n' && p[2] == 'e')||(p[0] == 'o' && p[2] == 'e'))
                    cout << "1" << endl;
            }
            i++;
        }

    system("pause");
    return 0;
}
