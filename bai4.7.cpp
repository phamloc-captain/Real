#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ga, cho;
    cout << "Giai bai toan: Vua ga vua cho..." << endl;
    for (ga = 1; ga <= 36; ga++) {
        cho = 36 - ga;
        if (ga * 2 + cho * 4 == 100) {
            cout << "So ga la: " << ga << endl;
            cout << "So cho la: " << cho << endl;
            break; 
        }
    }
    return 0;
}