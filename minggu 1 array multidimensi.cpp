#include <iostream>
using namespace std; 

int main() {
    // Mendefinisikan array 2D dengan ukuran 3x3
    int array2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Mengakses dan mencetak elemen-elemen array 2D
    cout << "Isi array 2D:\n"; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array2D[i][j] << " "; 
        }
        cout << "\n"; 
    }

    return 0;
}

