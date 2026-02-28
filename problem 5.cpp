#include <iostream>
using namespace std;

void binary(int n)
{
    if(n == 0)
        return;

    binary(n / 2);

    cout << n % 2;
}

int main()
{
    int x;
    cin >> x;

    while(x--)
    {
        int n;
        cin >> n;

        if(n == 0)
            cout << 0;
        else
            binary(n);

        cout << endl;
    }
}
