/******* Hanny Margaretha Aritonang *******/

#include "kendaraan.hpp"

// jadi hargaSewa yang merupakan static memiliki value berapa??

Kendaraan :: Kendaraan() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = " ";
    // seharusnya this->merk = "XXX"
    this-> kategori = "mobil";
    this-> lamaSewa = new int[hargaSewa];
}

Kendaraan :: Kendaraan (int nomor, int tahun_keluaran, string merk, string kategori):
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori){
}
// kenapa di user defines constructor, lamaSewa juga tidak dialokasikan
// seperti yang ada di constructor default?

// mana implementasi dari setter dan getter?
// implementasi pilih_kendarran() juga tidak ada? padahal kamu tulis di interface kendaraan.hpp
// kalau emang gak mau diimplemntasikan, di bagian interface kendaraan.hpp tidak perlu dituliskan

void Kendaraan :: printInfo(){
    cout << "Nomor : " << this-> nomor << endl;
    cout << "Tahun Keluaran : " << this-> tahun_keluaran << endl;
    cout << "Merk : " << this-> merk << endl;
    cout << "Kategori : " << this-> kategori << endl;
    cout << endl;
}

long Kendaraan:: biayaSewa(int lamaSewa){
    if(this->kategori=="bus"){
        cout << "Harga sewa = "<< lamaSewa*10000;
    }
    else if (this->kategori=="minibus"){
        if(lamaSewa<=5){
            cout << "Harga sewa = " << 5000000;
        }
        else{
            cout << "Harga sewa = " << ((500000*(lamaSewa-5))+5000000);
        }
    }
    else if(this-> kategori == "mobil"){
        cout << "Harga sewa = " << 500000*lamaSewa ;
    }
    else{
        cout << "Kategori tidak sesuai";
        exit(1);
    }
}
// ini return tipenya long tapi kenapa tidak ada nilai returnnya?

// yah pada akhirnya atribut lamaSewa pada kelas kendaraan tidak digunakan sama sekali
// karena seharusnya lamaSewa hanya menjadi parameter formal pada method biayaSewa()

