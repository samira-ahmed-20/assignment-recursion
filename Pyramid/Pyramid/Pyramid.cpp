#include <iostream>
using namespace std;

void printPyramid(int n, int row = 1) {
    if (row > n)   
        return;
    for (int i = 0; i < n - row; i++)
        cout << " ";
    for (int i = 0; i < 2 * row - 1; i++)
        cout << "*";
    cout << endl;
    printPyramid(n, row + 1);
}

int main() {
    int N;
    cin >> N;
    printPyramid(N);

    return 0;
}