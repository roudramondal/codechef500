#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    int i = 0;
    while (i < T) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int total_minutes_needed = X * Y;
        int total_minutes_available = Z * 24 * 60;

        if (total_minutes_needed <= total_minutes_available) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        i = i + 1;
    }

    return 0;
}
