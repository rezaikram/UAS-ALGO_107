//1. 
#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = 100 ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}
//isi disini
void tampilkanSemuaMahasiswa();
	cout << "========== DATA SEMUA MAHASISWA ==========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM     : " << NIM[i] << endl;
		cout << "Nama    : " << nama[i] << endl;
		cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
		cout << endl;
	}
}
//isi disini
void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			cariMahasiswaByNIM();
			break;
		case 4:
			sortByTahunMasuk();
			break;
		case 5:
			cout << "Selesai" << endl;
			break;
		default:
			cout << "Pilihan tidak valid. silahkan pilih angka 1-5" << endl;
		}

		cout << endl;
	} while (pilihan != 5);
	return 0;
}


//2. Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan? (10 Poin)
//		1. quick sort buat mengurutkan data
//		2. binary search buat mencari data
//		3. insertion sort nuat menampilkan data
//3. Jelaskan perbedaan mendasar antara algorithma stack dan queue! (15 Poin)
//		Algoritma stack itu element pertama yang masuk akan menjadi elemen terakhir yang keluar
//		sengangkan algoritma queue itu element pertama yang masuk akan menjadi element pertama juga yang keluar contoh nya seperti kock
//4. Jelaskan pada saat bagaimana harus menggunakan algorithma stack?(15 poin)
//		Pada saat kita mau meemasukkan suatu element dan ingin mengeluarkannya paling terakhir
//
//
//5. a.  Seberapa banyak kedalaman yang dimiliki struktur tersebut?
//			akan terus menerus hingga mendapatkan angka 1 dan tidak dapat di pecah lagi
//	 b.  Bagaimana cara membaca struktur pohon di atas? (Pilih salah satu metode yaitu 
//			Inorder, Preorder atau Postorder Traversal)
//			In = 1 5 8 10 12 15  20 22 25 28 30 36 38 40 45 48 50
//			Preorder = 1 5 8 10 12 15 20 22 25 28 30 36 38 40 45 48 50
//			Post = 2 5 8 10 12 15 20 22 28 30 36 38 40 40 45 48 50 1    