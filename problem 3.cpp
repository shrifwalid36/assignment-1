#include <iostream>
using namespace std;

void printDigits(int n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    printDigits(n / 10);
    cout << n % 10 << " ";
}

int main() {
    int x;
    cin >> x;
    while (x--) {
        int N;
        cin >> N;
        printDigits(N);
        cout << endl;
    }
}
