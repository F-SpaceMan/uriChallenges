#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double A, B, C, delta, divi, raiz, x1, x2;

    cin >> A >> B >> C;

    delta = (B*B) - (4*A*C);
    raiz = sqrt(delta);
    divi = 2*A;

    if(delta < 0 || divi == 0)
    {
        cout << "Impossivel calcular" << endl;

    }
    else
    {
        x1 = (-B+raiz)/ divi;
        x2 = (-B-raiz)/ divi;

        cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << x2 << endl;

    }

    system("pause");
    return 0;
}
