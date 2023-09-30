#include <iostream>

using namespace std; // Menggunakan namespace std

int main() {
    int angka;
    
    do { //Penggunaan Do While
        cout << "Masukkan sebuah angka (masukkan angka negatif untuk keluar): ";
        cin >> angka;
        
        if (angka >= 0) {
            cout << "Anda memasukkan: " << angka << endl;
        }
    } while (angka >= 0);

    cout << "Anda telah keluar dari program." << endl;

    return 0;
}

