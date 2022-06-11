#include "kendaraan.hpp"

int Kendaraan:: hargaSewa = 500000;
// di interface adanya harga_sewa, bukan hargaSewa
// error nih kalau dicompile

// implementasi dari bus.hpp

Kendaraan :: Kendaraan() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = "";
    // sama seperti hanny, silakan liat komentar di hanny

    this-> kategori = "mobil";
    this-> lama_sewa = new int[harga_sewa];
}

Kendaraan::Kendaraan(int nomor, int tahun_keluaran, string merk, string kategori) : 
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori) {

}
// sama seperti hanny, silakan liat komentar di hanny


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

// tidak ada method bernama biaya_sewa, adanya biayaSewa
// kamu malah kebalik antara nama method dan nama variabel
// lain kali lebih hati hati dan teliti
// kalau perlu silakan install extension pada IDE-mu yang membuat pembacaan
// error menjadi lebih mudah

// tidak ada parameter lama_sewa pada method kamu, tapi kamu gunakan di implementasinya

// dan yah pada akhirnya kamu membandingkan kateogori dengan string, bukan 
// dengan kategori yang ada di struct, jadinya useless gak terpakai padahal udah kamu buat