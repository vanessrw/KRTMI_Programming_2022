/******* Hanny Margaretha Aritonang *******/

#include "kendaraan.hpp"

Kendaraan :: Kendaraan() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = " ";
    this-> kategori = "mobil";
    this-> lamaSewa = new int[hargaSewa];
}

Kendaraan :: Kendaraan (int nomor, int tahun_keluaran, string merk, string kategori):
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori){
}

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

