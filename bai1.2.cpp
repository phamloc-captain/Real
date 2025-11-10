#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double AB = 6.0, AC = 8.0;
    double BC = sqrt(AB * AB + AC * AC);
    cout << "Canh huyen cua tam giac ABC: " << BC << " cm" << endl;
    return 0;
}