#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 6;
const int SO_MIN = 6;
int bmin[N][N];
int mo[N][N];
bool hopLe(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}
int demMin(int x, int y) {
    int dem = 0;
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
            if (hopLe(x+i, y+j) && bmin[x+i][y+j])
                dem++;
    return dem;
}
void veBan(bool thua = false) {
    cout << "\n   ";
    for (int i = 0; i < N; i++) cout << i << " ";
    cout << "\n";
    for (int i = 0; i < N; i++) {
        cout << i << "  ";
        for (int j = 0; j < N; j++) {
            if (mo[i][j] == 0) {
                cout << "* ";
            } else {
                if (bmin[i][j]) cout << "X ";
                else cout << demMin(i,j) << " ";
            }
            if (thua && bmin[i][j]) cout << " ";
        }
        cout << "\n";
    }
}
int main() {
    srand(time(NULL));
    int dem = 0;
    while (dem < SO_MIN) {
        int x = rand() % N;
        int y = rand() % N;
        if (!bmin[x][y]) {
            bmin[x][y] = 1;
            dem++;
        }
    }
    cout << "    TRO CHOI DO MIN DON GIAN \n";
    while (true) {
        veBan();
        int x, y;
        cout << "\nNhap toa do mo (x y): ";
        cin >> x >> y;
        if (!hopLe(x,y)) {
            cout << "Toa do khong hop le!\n";
            continue;
        }
        mo[x][y] = 1;
        if (bmin[x][y]) {
            cout << "\n>>> BAN DA MO TRUNG MIN! GAME OVER!\n";
            veBan(true);
            break;
        }
    }
    return 0;
}
