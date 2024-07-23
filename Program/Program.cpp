#include <iostream>

using namespace std;


int main()
{
    int a = 0;
    int b = 0;

    int c = 0;

    cin >> a >> b;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    
    cout << "최대공약수 : " << a, b;


    return 0;
}