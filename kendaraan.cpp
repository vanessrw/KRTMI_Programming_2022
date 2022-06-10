#include "kendaraan.hpp"

int Kendaraan:: hargaSewa = 500000;

// implementasi dari bus.hpp

Kendaraan :: Kendaraan() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = "";
    this-> kategori = "mobil";
    this-> lama_sewa = new int[harga_sewa];
}

Kendaraan::Kendaraan(int nomor, int tahun_keluaran, string merk, string kategori) : 
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori) {

}

Kendaraan::Kendaraan(const Kendaraan &k) {
    this->nomor = k.nomor;
    this->tahun_keluaran = k.tahun_keluaran;
    this->merk = k.merk;
    this->kategori = k.kategori;
}

Kendaraan& Kendaraan :: operator=(const Kendaraan &k){
    this-> nomor = k.nomor;
    this-> tahun_keluaran = k.tahun_keluaran;
    this-> merk = k.merk;
    this-> kategori = k.kategori;
    return *this;
}

void Kendaraan :: printInfo(){
    cout << "Nomor : " << this-> nomor << endl;
    cout << "Tahun Keluaran : " << this-> tahun_keluaran << endl;
    cout << "Merk : " << this-> merk << endl;
    cout << "Kategori : " << this-> kategori << endl;
}

long Kendaraan::biaya_sewa() {
    if (this->kategori == "bus"){
        return (1000000*lama_sewa);
    }
    else if (this->kategori == "minibus"){
        if(lama_sewa <= 5){
            return(5000000);
        }
        else{
            return(5000000+(500000*(lama_sewa-5)));
        }
    }
    else{
        return(500000*lama_sewa);
    }
}