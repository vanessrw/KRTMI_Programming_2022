#include "Kendaraan.hpp"
#include "KoleksiKendaraan.hpp"
#include <iostream>
#include <string>

using namespace std;


KoleksiKendaraan::KoleksiKendaraan(){
    this->size = 100;
    this->Neff = 0;
    this->koleksi = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(int size){
    this->size = size;
    this->Neff = 0;
    this->koleksi = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan &KK){
    this->size = KK.size;
    this->Neff = KK.Neff;
    this->koleksi = new Kendaraan[this->size];
    for(int i = 0; i < this->Neff; i++){
        koleksi[i] = KK.koleksi[i];
    }
}

KoleksiKendaraan& KoleksiKendaraan::operator=(const KoleksiKendaraan &KK){
    this->size = KK.size;
    this->Neff = KK.Neff;
    this->koleksi = new Kendaraan[this->size];
    for(int i = 0; i < this->Neff; i++){
        this->koleksi[i]=KK.koleksi[i];
    }
}
// pada operator assignment, perlu dilakukan penghapusan pada koleksi sebelumnya
// jadi kurang kode ini ditaruh pada line 33
// delete[] this->koleksi;

KoleksiKendaraan::~KoleksiKendaraan(){
    delete[] this->koleksi;
}

void KoleksiKendaraan::operator<<(Kendaraan &K){
    if(this->Neff < this->size){
        koleksi[this->Neff] = K;
        this->Neff++;
    }
}

// sip tinggal dibuat mainnya untuk mengetes apakah 
// method2 ini dapat berjalan baik atau tidak?
// apakah operator overloadingnya dapat berjalan dengan baik?