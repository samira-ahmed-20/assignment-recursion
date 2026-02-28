#include <iostream>
using namespace std;
 
void printBinary(int n) {
    if (n == 0)
        return;  
    printBinary(n / 2);      
    cout << n % 2;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int num;
        cin >> num;
        if (num == 0)
            cout << 0;  
        else
            printBinary(num);
        cout << endl;
    }
    return 0;
}