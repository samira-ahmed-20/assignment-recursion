#include <iostream>
using namespace std;
void print(int n){
    if (n <= 0)
        return;
    
    print(n / 10);
    cout << n % 10 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        if (num == 0) {
            cout << "0";
        }
        else 
            print(num);

        cout << endl;
    }
    return 0;
}