#include <iostream> // Library untuk proses input (cin) dan output (cout)
#include <cstdlib> // Library untuk fungsi system("cls")
#include <string> // Library untuk menggunakan tipe data string
using namespace std; // Supaya tidak perlu menulis 'std::' sebelum cin/cout

int main() { // Fungsi Utama
    system("cls"); // Untuk membersihkan layar
    int num, temp, digit, sum = 0, n = 0; // Deklarasi variabel
    /* num : menyimpan angka yang diinput user
       temp : variabel sementara untuk menghitung angka
       digit : menyimpan setiap digit angka
       sum : hasil perhitungan (awal 0)
       n : jumlah digit angka
    */

    cout << "INPUT : "; // Menampilkan teks INPUT :
    cin >> num; // Mengambil input angka dari user

    temp = num; // Menyimpan nilai asli ke temp untuk menghitung jumlah digit

    while (temp != 0) { // Perulangan untuk menghitung ada berapa digit dalam angka tersebut
        n++; // Menambah jumlah digit
        temp /= 10; // Menghapus digit terakhir
    }

    temp = num; // Reset temp ke nilai asli untuk menghitung nilai Armstrong
    string proses = ""; // Menyimpan proses perhitungan dalam bentuk string

    while (temp != 0) { // Perulangan untuk memproses setiap digit satu per satu
        digit = temp % 10; // Mengambil digit terakhir

        int hasil = 1; // Menyimpan hasil pangkat digit pangkat n 
        for (int i = 0; i < n; i++) { // Menghitung digit pangkat n
            hasil *= digit; // Mengalikan digit sebanyak n kali
        }

        sum += hasil; // Menambahkan hasil pangkat ke total sum
        char ch = '0' + digit; //Mengubah tipe data integer digit menjadi char supaya bisa digabung ke string

        string term = ""; // Menyimpan bentuk mis: jika digit 5 dan n=3, maka jadi 5*5*5
        for (int i = 0; i < n; i++) { // Membuat proses perkalian dalam string
            term += ch; // Menambah digit
            if (i < n - 1) term += "*"; // Menambahkan "*" kecuali digit terakhir
        }

        if (proses == "") { // Membuat urutan proses dari depan ke belakang
            proses = term;
        } else {
            proses = term + " + " + proses;
        }

        temp /= 10; // Menghapus digit terakhir yang sudah diproses
    }

    if (sum == num) { // Mengecek apakah hasil penjumlahan pangkat = angka awal
        cout << "OUTPUT : YES, " << num << " is an Armstrong Number" << endl; // Jika sum = num, maka angka tersebut adalah bilangan Armstrong
    } else {
        cout << "OUTPUT : NO, " << num << " is not an Armstrong Number" << endl; // Jika tidak, maka angka tersebut bukan bilangan Armstrong
    }

    cout << "         " << proses << " = " << sum << endl; // Menampilkan proses perhitungannya
}