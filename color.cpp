#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
int main() {
    int r1, r2, g1, g2, b1, b2;
    float w;
    cout << "enter r1, g1, b1 on which w is applied \n";
    cin >> r1;
    cin >> g1;
    cin >> b1;
    cout << "enter r2, g2, b2 on which 1-w is applied \n";
    cin >> r2;
    cin >> g2;
    cin >> b2;
    cout << "Enter weight for rgb1\n";
    cin >> w;
    cout << sqrt(r1*r1*w + r2*r2*(1-w)) << "\t" << sqrt(g1*g1*w + g2*g2*(1-w)) << "\t" << sqrt(b1*b1*w + b2*b2*(1-w)) << "\n";
    // const int b = 5;
    // const int N = 1000 - 1;

    // const int p = N / a;
    // const int q = N / b;
    // const int r = N / (a * b);

    // cout << p << "\t" << q << "\t" << r << endl;
    // cout << a * nsum(p) + b * nsum(q) - a * b * nsum(r) << endl;

    return 0;
}
// int nsum(int n) {
//     return n * (n + 1) / 2;
// }