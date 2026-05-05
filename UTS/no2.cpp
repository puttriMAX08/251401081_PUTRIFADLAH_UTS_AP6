#include <iostream> // Library untuk proses input (cin) dan output (cout)
#include <cstdlib> // Library untuk fungsi system("cls")
using namespace std; // Supaya tidak perlu menulis 'std::' sebelum cin/cout

int main() { // Fungsi Utama
    system("cls"); // Untuk membersihkan layar
    int n, a = 0, b = 1, hasil; // Deklarasi variabel
    // n untuk menyimpan inputan dari user, a sebagai suku pertama (0), b sebagai suku kedua (1), hasil untuk menyimpan jumlah

    cout << "INPUT : "; // Menampilkan teks INPUT :
    cin >> n;  // Mengambil input n dari user

    if (n == 0) { // Kondisi jika n = 0 , maka hasilnya = 0
        hasil = 0;
    } else if (n == 1) { // Kondisi jika n = 1, maka hasilnya = 1
        hasil = 1;
    } else {
        for (int i = 2; i <= n; i++) { // Perulangan untuk menghitung Fibonacci mulai dari suku ke-2 sampai n
            hasil = a + b; // Menjumlahkan dua suku sebelumnya
            a = b;  // Memindahkan nilai b ke a
            b = hasil; // Menyimpan hasil sebagai nilai b terbaru
        }
    }

    cout << "OUTPUT : " << hasil << endl; // Menampilkan hasil Fibonacci ke-n
}