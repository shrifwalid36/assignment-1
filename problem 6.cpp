#include <iostream>
using namespace std;

int arr[1010];

void print(int i)
{
    if(i < 0)
        return;

    if(i % 2 == 0)
        cout << arr[i] << " ";

    print(i - 1);
}

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> arr[i];

    print(n - 1);
}
