#include <iostream>
using namespace std;

void printInvertedPyramid(int n, int row = 1) {
    if (row > n)
        return;
    for (int i = 0; i < row - 1; i++)
        cout << " ";
    for (int i = 0; i < 2 * (n - row + 1) - 1; i++)
        cout << "*";
    cout << endl;
    printInvertedPyramid(n, row + 1);
}
int main() {
    int N;
    cin >> N;
    printInvertedPyramid(N);

    return 0;
}