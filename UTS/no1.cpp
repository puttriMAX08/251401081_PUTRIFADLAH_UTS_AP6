#include <iostream> // Library untuk proses input (cin) dan output (cout)
#include <cstdlib> // Library untuk fungsi system("cls")
using namespace std; // Supaya tidak perlu menulis 'std::' sebelum cin/cout

int main() { // Fungsi Utama
    system("cls"); // Untuk membersihkan layar
    int a, b; // Deklarasi variabel untuk menyimpan a dan b yang tipenya integer (bilangan bulat)

    cout << "INPUT : "; // Menampilan teks "INPUT : ""
    cin >> a >> b; // Mengambil dua nilai dari user dan menyimpannya ke variabel a dan b
    
    // Mencari FPB pakai algoritma Euclid
    while (b != 0) { // Perulangan selama nilai b tidak sama dengan 0
        int temp = b; // Menyimpan nilai b sementara ke variabel temp
        b = a % b; // Menghitung sisa bagi (mod) a dengan b, lalu disimpan ke  b
        a = temp; // Memindahkan nilai b ke a
    }

    // Setelah b = 0 maka a adalah FPB
    cout << "OUTPUT : " << a << endl; // Menampilkan hasil FPB
}