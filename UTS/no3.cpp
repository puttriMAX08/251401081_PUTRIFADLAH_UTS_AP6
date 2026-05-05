#include <iostream> // Library untuk proses input (cin) dan output (cout)
#include <cstdlib> // Library untuk fungsi system("cls")
using namespace std; // Supaya tidak perlu menulis 'std::' sebelum cin/cout

int main() { // Fungsi Utama
    system("cls"); // Untuk membersihkan layar
    int num, reverse = 0; // Deklarasi variabel
    // num untuk menyimpan angka yang diinput user ; reverse menyimpan hasil reverse

    cout << "INPUT : "; // Menampilkan teks INPUT : 
    cin >> num; // Mengambil input angka dari user

    while (num != 0) {  // Perulangan akan berjalan selama num tidak bernilai 0
        int digit = num % 10; // Mengambil digit terakhir menggunakan modulus (sisa bagi)
        reverse = reverse * 10 + digit; // Menggeser posisi angka di reverse ke kiri dan menambah digit baru
        num /= 10; // Menghapus digit terakhir dari num
    }
    cout << "OUTPUT : " << reverse << endl; // Menampilkan hasil reverse
}