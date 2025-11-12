#include <iostream>
using namespace std;
int main() {
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;
    string thien_can[] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
    string dia_chi[] = {"Than", "Dau", "Tuat", "Hoi", "Ti", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui"};
    int can = nam % 10;
    int chi = nam % 12;
    cout << "Nam " << nam << ": " << thien_can[can] << " " << dia_chi[chi];
    return 0;
}