#include <iostream>
using namespace std;

void printPyramid(int i, int n)
{
    if (i > n) return;
    for (int j = 0; j < n - i; j++)
        cout << " ";

    for (int j = 0; j < 2 * i - 1; j++)
        cout << "*";

    cout << endl;

    printPyramid(i + 1, n);
}

int main() {
    int x;
    cin >> x;

    printPyramid(1, x);

    return 0;
}
