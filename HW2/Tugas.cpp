#include <iostream>

using namespace std;

int main() {
    int b1, k1, b2, k2;
    double skalar;

    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> b1;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> k1;
    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> b2;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> k2;

	cout << endl;
    // Membuat matriks A
    int matrixA[b1][k1];

    cout << "Masukkan nilai matriks A:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cin >> matrixA[i][j];
        }
    }

    // Membuat matriks B
    int matrixB[b2][k2];

    cout << "Masukkan nilai matriks B:" << endl;
    for (int i = 0; i < b2; i++) {
        for (int j = 0; j < k2; j++) {
            cin >> matrixB[i][j];
        }
    }
    
    cout<<endl;

    // Membuat matriks hasil penjumlahan
    int hasilPenjumlahan[b1][k1];

    // Melakukan penjumlahan matriks A dan matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            hasilPenjumlahan[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Menampilkan hasil penjumlahan matriks
    cout << "Hasil penjumlahan matriks :" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cout << hasilPenjumlahan[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    
    // Membuat matriks hasil pengurangan
    int hasilPengurangan[b1][k1];

    // Melakukan pengurangan matriks A dan matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            hasilPengurangan[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    // Menampilkan matriks hasil pengurangan
    cout << "Hasil pengurangan matriks:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cout << hasilPengurangan[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    // Cek apakah matriks dapat dikalikan
    if (k1 != k2 || b1 != b2) {
        cout << "Matriks tidak dapat dikalikan satu sama lain." << endl;
    }else{

    // Membuat matriks hasil perkalian 
    int hasilPerkalian[b1][k2];

    // Melakukan perkalian matriks A dan matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < 2; j++) {
            hasilPerkalian[i][j] = 0;
            for (int k = 0; k < k1; k++) {
                hasilPerkalian[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Menampilkan matriks hasil perkalian 
    cout << "Hasil perkalian matriks:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k2; j++) {
            cout << hasilPerkalian[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    cout << "Masukkan skalar untuk perkalian skalar: ";
    cin >> skalar;

    // Melakukan perkalian matriks A dengan skalar
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            matrixA[i][j] *= skalar;
        }
    }
       // Menampilkan matriks A hasil perkalian dengan skalar
    cout << "Hasil perkalian matriks A dengan skalar " << skalar << ":"<<endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
        // Melakukan perkalian matriks B dengan skalar
    for (int i = 0; i < b2; i++) {
        for (int j = 0; j < k2; j++) {
            matrixB[i][j] *= skalar;
        }
    }
       // Menampilkan matriks B hasil perkalian dengan skalar
    cout << "Hasil perkalian matriks B dengan skalar " << skalar << ":"<<endl;
    for (int i = 0; i < b2; i++) {
        for (int j = 0; j < k2; j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }
    
}
    return 0;
}
