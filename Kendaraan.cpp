#include "Kendaraan.hpp"

Kendaraan::(){
    this->nomor = 0;
    this->tahun_keluaran = 0;
    this->merk = "XXX";
    this->kategori = "mobil";
    this->lamaSewa = new int[sewa_perjam];
}

Kendaraan::Kendaraan(int nomor, int tahun_keluaran, string merk, string kategori) : nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori) {

}

Kendaraan::Kendaraan(const Kendaraan &k) {
    this->nomor = k.nomor;
    this->tahun_keluaran = k.tahunKeluaran;
    this->merk = k.merk;
    this->kategori = k.kategori;
}

Kendaraan& Kendaraan::operator=(const Kendaraan &k) {
    this->nomor = k.nomor;
    this->tahun_keluaran = k.tahunKeluaran;
    this->merk = k.merk;
    this->kategori = k.kategori;
    return *this;
}
    
void printInfo() {
    cout << "Nomor: " << this->nomor << endl;
    cout << "Tahun keluaran: " << this->tahun_keluaran << endl;
    cout << "Merk: " << this->merk << endl;
    cout << "Kategori: " << this->kategori << endl;
}

long Kendaraan::biayaSewa() {
    if (this->kategori == "bus"){
        return (1000000*lamaSewa);
    }
    elseif (this->kategori == "minibus"){
        if(lamaSewa <= 5){
            return(5000000);
        }
        else{
            return(5000000+(500000*(lamaSewa-5)));
        }
    }
    else{
        return(500000*lamaSewa);
    }
}

