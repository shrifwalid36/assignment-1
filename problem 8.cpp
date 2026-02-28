#include <iostream>
using namespace std;

void InvertedPyramid(int i, int n)
{
    if (i > n) return;
    for (int j = 0; j < i - 1; j++)
        cout << " ";

    for (int j = 0; j < 2*(n - i + 1) - 1; j++)
        cout << "*";

    cout << endl;
    InvertedPyramid(i + 1, n);
}

int main() {
    int x;
    cin >> x;

    InvertedPyramid(1, x);

    return 0;
}
