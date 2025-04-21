#include <iostream>
using namespace std;

int main() {
    int kode1, kode2, kode3;
    
    cout << "Kode 1: ";
    cin >> kode1;
    if (kode1 < 50) {
        cout << "Mau ngeretas kah maniezz? " << endl;
        return 0; 
    }

    cout << "Kode 2: ";
    cin >> kode2;
    if (kode2 < 50) {
        cout << "Nice try diddy" << endl;
        return 0; 
    }

    cout << "kode 3:";
    cin >> kode3;
    if (kode3 < 50) {
        cout << "Absolute Cinema" << endl;
        return 0; 
    }

    int total = kode1 + kode2 + kode3;
    
    if (total >= 200) {
        cout << "Bomb dinonaktifkan, enjoy your day Sir Axelrode" << endl;
    } else {
        cout << "Bomb meledak DUARRRR!!!" << endl;
    }

    return 0;
}