#include<iostream>
#include<stdlib.h>

using namespace std;

int maior(int A, int B, int C);

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << maior(a,b,c) << " eh o maior" << endl;
    system("pause");
    return 0;
}

int maior(int A, int B, int C)
{
    int maiab = (A+B+abs(A-B))/2;
    return (maiab+C+abs(maiab-C))/2;
}
