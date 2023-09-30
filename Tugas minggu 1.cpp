#include <iostream>
using namespace std;

// Fungsi untuk menghitung berat badan ideal
double hitungBeratBadanIdeal(int tinggi, char jenisKelamin) {
    double beratBadanIdeal;
    if (jenisKelamin == 'L' || jenisKelamin == 'l') { // Penggunaan if
        beratBadanIdeal = (tinggi - 100) - ((tinggi - 100) * 0.1);
    } else if (jenisKelamin == 'P' || jenisKelamin == 'p') { // Penggunaan else if
        beratBadanIdeal = (tinggi - 100) - ((tinggi - 100) * 0.15);
    } else {
        beratBadanIdeal = 0;
    }
    return beratBadanIdeal;
}

int main() {
    const int jumlahOrang = 5;
    int tinggi[jumlahOrang]; // Deklarasi array satu dimensi
    char jenisKelamin[jumlahOrang]; // Deklarasi array satu dimensi
    double beratBadanIdeal[jumlahOrang]; // Deklarasi array satu dimensi

    // Mengisi data tinggi dan jenis kelamin dengan perulangan for
    for (int i = 0; i < jumlahOrang; i++) {
        cout << "Masukkan tinggi (cm) dan jenis kelamin (L/P) orang ke-" << i+1 << ": ";
        cin >> tinggi[i] >> jenisKelamin[i];
    }

    // Menghitung berat badan ideal dan menampilkannya dengan perulangan while
    int index = 0;
    while (index < jumlahOrang) {
        beratBadanIdeal[index] = hitungBeratBadanIdeal(tinggi[index], jenisKelamin[index]);
        index++;
    }

    cout << "\nHasil perhitungan berat badan ideal:\n";
    // Menampilkan hasil dengan perulangan for
    for (int i = 0; i < jumlahOrang; i++) {
        cout << "Orang ke-" << i+1 << ": ";
        if (beratBadanIdeal[i] > 0) { // Penggunaan if
            cout << "Berat badan ideal = " << beratBadanIdeal[i] << " kg\n";
        } else {
            cout << "Jenis kelamin tidak valid.\n";
        }
    }

    return 0;
}
