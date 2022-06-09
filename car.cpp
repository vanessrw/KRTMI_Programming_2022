/******* Hanny Margaretha Aritonang *******/

#include "car.hpp"

int Car:: hargaSewa = 500000;

Car :: Car() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = "";
    this-> kategori = "mobil";
    this-> lamaSewa = new int[hargaSewa];
}

Car :: Car (int nomor, int tahun_keluaran, string merk, string kategori):
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori){
}
Car :: Car(const Car &c) {
    this-> nomor = c.nomor;
    this-> tahun_keluaran = c.tahun_keluaran;
    this-> merk = c.merk;
    this-> kategori = c.kategori;
}

Car& Car :: operator=(const Car &c){
    this-> nomor = c.nomor;
    this-> tahun_keluaran = c.tahun_keluaran;
    this-> merk = c.merk;
    this-> kategori = c.kategori;
    return *this;
}

void Car :: printInfo(){
    cout << "Nomor : " << this-> nomor << endl;
    cout << "Tahun Keluaran : " << this-> tahun_keluaran << endl;
    cout << "Merk : " << this-> merk << endl;
    cout << "Kategori : " << this-> kategori << endl;
    cout << endl;
}

long Car:: biayaSewa(int lamaSewa){
    return (lamaSewa * hargaSewa);
}

