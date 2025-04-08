#include <iostream>

using namespace std;

// Function to check if the strings intersect
bool intersectClockwise(int a, int b, int c, int d) {
    // Checking if one string's endpoints lie on opposite sides of the other string
    if ((a < c && c < b && b < d) || (a > c && (c < b || b < d))) {
        return true;
    }
    if ((c < a && a < d && d < b) || (c > a && (a < d || d < b))) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (intersectClockwise(a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
