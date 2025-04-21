#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int jumlahJudul = 0;
    int i = 0;

    cout << "Daftar judul buku: ";
    getline(cin, input);

    while (i < input.length()) {
        // cek spasi
        while (i < input.length() && input[i] == ' ') {
            i++;
        }
        // cek sisa karakter
        if (i < input.length()) {
            jumlahJudul++;
        }
        // cek jumlah judul
        while (i < input.length() && input[i] != ' ') {
            i++;
        }
    }

    cout << "Jumlah judul buku: " << jumlahJudul << endl;
    
    return 0;
}