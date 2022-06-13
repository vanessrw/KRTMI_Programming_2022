#include "koleksikendaraan.hpp"
#include "kendaraan.hpp"

KoleksiKendaraan :: KoleksiKendaraan() {
    this-> size=100;
    this-> Neff=0;
    this-> koleksi = new Kendaraan [this->size];
}

KoleksiKendaraan :: KoleksiKendaraan(int size) {
    this-> size=size;
    this-> Neff=0;
    this-> koleksi = new Kendaraan [this->size];
}

KoleksiKendaraan :: KoleksiKendaraan(const KoleksiKendaraan &kk) {
    this-> size=kk.size;
    this-> Neff=kk.Neff;
    this-> koleksi = new Kendaraan [this->size];
    for(int i = 0; i < this-> Neff; i++){
        this->koleksi[i]=kk.koleksi[i];
    }
}

KoleksiKendaraan& KoleksiKendaraan::operator=(const KoleksiKendaraan &kk) {
    this-> size=kk.size;
    this-> Neff=kk.Neff;
    delete[] this->koleksi;
    this-> koleksi = new Kendaraan [this->size];
    for(int i = 0; i < this-> Neff; i++){
        this->koleksi[i]=kk.koleksi[i];
    }
}

KoleksiKendaraan::~KoleksiKendaraan(){
    delete[] this->koleksi;
}

void KoleksiKendaraan :: printAll(){
    //
}

void KoleksiKendaraan::operator<<(Kendaraan &K){
    if(this->Neff < this->size){
        koleksi[this->Neff] = K;
        this->Neff++;
    }
}

void operator<<(KoleksiKendaraan){
//
}
