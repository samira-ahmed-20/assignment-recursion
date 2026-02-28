#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1)  
        return arr[0];
    int maxRest = findMax(arr, n - 1);
    return (arr[n - 1] > maxRest) ? arr[n - 1] : maxRest;
}

int main() {
    int N;
    cin >> N;
    int arr[1000]; 
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cout << findMax(arr, N) << endl;

    return 0;
}