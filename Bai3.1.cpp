#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream f("maTran.txt");
    int n; 
    f >> n;
    int a[100];
    for (int i = 0; i < n*n; i++) f >> a[i];
    f.close();
    cout << "Ma tran ban dau:\n";
    for (int i = 0; i < n*n; i++) {
        cout << a[i] << ( (i+1)%n==0 ? '\n' : ' ' );
    }
    sort(a, a + n*n, greater<int>());
    ofstream g("maTranMoi.txt");
    g << n << endl;
    for (int i = 0; i < n*n; i++) {
        g << a[i] << ( (i+1)%n==0 ? '\n' : ' ' );
    }
    g.close();
    cout << "\nMa tran sap xep giam dan:\n";
    for (int i = 0; i < n*n; i++) {
        cout << a[i] << ( (i+1)%n==0 ? '\n' : ' ' );
    }
    return 0;
}
