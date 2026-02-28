#include <iostream>
using namespace std;

int sumArray(int arr[], int n, int index = 0) {
    if (index == n)  
        return 0;
    return arr[index] + sumArray(arr, n, index + 1);
}
int main() {
    int N;
    cin >> N;

    int arr[1000]; 
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cout << sumArray(arr, N) << endl;

    return 0;
}