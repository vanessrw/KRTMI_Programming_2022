/******* Hanny Margaretha Aritonang *******/

#include "bus.hpp"

int Bus:: hargaSewa = 1000000;

Bus :: Bus() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = "";
    this-> kategori = "mobil";
    this-> lamaSewa = new int[hargaSewa];
    //this-> biayaSewa = 0;
}

Bus :: Bus (int nomor, int tahun_keluaran, string merk, string kategori):
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori){
    this -> lamaSewa = new int[hargaSewa];
    //this-> biayaSewa = 0;
}

void Bus :: printInfo(){
    cout << "Nomor : " << this-> nomor << endl;
    cout << "Tahun Keluaran : " << this-> tahun_keluaran << endl;
    cout << "Merk : " << this-> merk << endl;
    cout << "Kategori : " << this-> kategori << endl;
    cout << endl;
}

//void Bus:: biayaSewa(int lamaSewa){
    //biayaSewa = lamaSewa * hargaSewa;
//}

