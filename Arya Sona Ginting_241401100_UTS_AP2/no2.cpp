#include <iostream>
using namespace std;

int main() {
    int kode;

    cout << "Masukkan 3 digit kode: ";
    cin >> kode;

    if (kode < 100 || kode > 999) {
        cout << "SALAH" << endl; 
    } else {
        int digit1 = kode / 100; 
        int digit2 = (kode / 10) % 10; 
        int digit3 = kode % 10; 

        int jumlah = digit1 + digit2 + digit3; 

        cout << "Jumlah ke 3 digit adalah: " << jumlah << endl;
    }

    return 0;
}