#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double r;
    double uclid;
    double taxi;
    double pi = M_PI;
    cin >> r;

    uclid = pi * r * r;
    taxi = 2 * r * r;

    printf("%.6f\n", uclid);
    printf("%.6f\n", taxi);

    return 0;
}