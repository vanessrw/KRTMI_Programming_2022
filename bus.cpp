/******* Hanny Margaretha Aritonang *******/

#include "bus.hpp"

int Bus:: hargaSewa = 1000000;

Bus :: Bus() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = "";
    this-> kategori = "mobil";
    this-> lamaSewa = new int[hargaSewa];
}

Bus :: Bus (int nomor, int tahun_keluaran, string merk, string kategori):
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori){
}
Bus :: Bus(const Bus &b) {
    this-> nomor = b.nomor;
    this-> tahun_keluaran = b.tahun_keluaran;
    this-> merk = b.merk;
    this-> kategori = b.kategori;
}

Bus& Bus :: operator=(const Bus &b){
    this-> nomor = b.nomor;
    this-> tahun_keluaran = b.tahun_keluaran;
    this-> merk = b.merk;
    this-> kategori = b.kategori;
    return *this;
}

void Bus :: printInfo(){
    cout << "Nomor : " << this-> nomor << endl;
    cout << "Tahun Keluaran : " << this-> tahun_keluaran << endl;
    cout << "Merk : " << this-> merk << endl;
    cout << "Kategori : " << this-> kategori << endl;
    cout << endl;
}

long Bus:: biayaSewa(int lamaSewa){
    return (lamaSewa * hargaSewa);
}

