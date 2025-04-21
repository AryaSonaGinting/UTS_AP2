#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaMahasiswa;
    string nim;
    string mataKuliah1, mataKuliah2, mataKuliah3;
    float nilai1, nilai2, nilai3;
    float rataRata;

    cout << "Masukkan nama mahasiswa: ";
    getline(cin, namaMahasiswa);
    cout << "Masukkan NIM mahasiswa: ";
    getline(cin, nim);

    cout << "Masukkan nama mata kuliah 1: ";
    getline(cin, mataKuliah1);
    cout << "Masukkan nama mata kuliah 2: ";
    getline(cin, mataKuliah2);
    cout << "Masukkan nama mata kuliah 3: ";
    getline(cin, mataKuliah3);

    cout << "Masukkan nilai " << mataKuliah1 << ": ";
    cin >> nilai1;
    cout << "Masukkan nilai " << mataKuliah2 << ": ";
    cin >> nilai2;
    cout << "Masukkan nilai " << mataKuliah3 << ": ";
    cin >> nilai3;

    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    cout << "Nama Mahasiswa: " << namaMahasiswa << endl;
    cout << "NIM Mahasiswa: " << nim << endl;
    cout << "Rata-rata nilai Anda: " << rataRata << endl;

    if (nilai1 >= 60) {
        cout << mataKuliah1 << ": Lulus Gengs" << endl;
    } else {
        cout << mataKuliah1 << ": NOOOO KAMU Tidak Lulus!!!" << endl;
    }

    if (nilai2 >= 60) {
        cout << mataKuliah2 << ": Lulus Gengs" << endl;
    } else {
        cout << mataKuliah2 << ": NOOOO KAMU Tidak Lulus!!!" << endl;
    }

    if (nilai3 >= 60) {
        cout << mataKuliah3 << ": Lulus Gengs" << endl;
    } else {
        cout << mataKuliah3 << ": NOOOO KAMU Tidak Lulus!!!" << endl;
    }

    return 0;
}