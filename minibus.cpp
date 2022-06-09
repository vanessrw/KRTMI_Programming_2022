/******* Hanny Margaretha Aritonang *******/

#include "minibus.hpp"

Minibus :: Minibus() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = "";
    this-> kategori = "mobil";
    this-> lamaSewa = new int[hargaSewa];
}

Minibus :: Minibus (int nomor, int tahun_keluaran, string merk, string kategori):
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori){
}
Minibus :: Minibus(const Minibus &m) {
    this-> nomor = m.nomor;
    this-> tahun_keluaran = m.tahun_keluaran;
    this-> merk = m.merk;
    this-> kategori = m.kategori;
}

Minibus& Minibus :: operator=(const Minibus &m){
    this-> nomor = m.nomor;
    this-> tahun_keluaran = m.tahun_keluaran;
    this-> merk = m.merk;
    this-> kategori = m.kategori;
    return *this;
}

void Minibus :: printInfo(){
    cout << "Nomor : " << this-> nomor << endl;
    cout << "Tahun Keluaran : " << this-> tahun_keluaran << endl;
    cout << "Merk : " << this-> merk << endl;
    cout << "Kategori : " << this-> kategori << endl;
    cout << endl;
}

long Minibus:: biayaSewa(int lamaSewa){
    if(lamaSewa <=5){
        hargaSewa = 5000000;
        return (hargaSewa);
    }
    else{
        hargaSewa = 500000;
        return (5000000 + (lamaSewa-5) * hargaSewa);
    }
}

