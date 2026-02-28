#include <iostream>
using namespace std;

int findMax(int arr[], int i, int n) {
    if (i == n - 1)
    return arr[i];
    int m = findMax(arr, i + 1, n);
    return (arr[i] > m) ? arr[i] : m;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << findMax(arr, 0, n) << endl;
}
