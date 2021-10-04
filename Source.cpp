#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    while (a > 0 && b > 0 && c > 0 ) {

        if (a + b > c) {
            cout << "Possible";
            return 0;
        }
        if (a + c > b) {
            cout << "Possible";
        }
     
        if (b + c > a) {
            cout << "Possible";
        }
    }
    cout << "ImPossible";
    return 0;
}
