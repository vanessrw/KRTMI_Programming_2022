#include "koleksi.hpp"
#include "kendaraan.hpp"
#include <iostream>

using namespace std;


KoleksiKendaraan::KoleksiKendaraan(){
    this->size = 100;
    this->num_of_kendaraan = 0;
    this->koleksi = new Kendaraan[this->size];
    this->kendaraan = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(int size){
    this-> size = size;
    this-> num_of_kendaraan = 0;
    this-> koleksi = new Kendaraan [this->size];
    this->kendaraan = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan &KK){
    this->size = KK.size;
    this->num_of_kendaraan = KK.num_of_kendaraan;
    this->koleksi = new Kendaraan[this->size];
    this->kendaraan = new Kendaraan[this->size];
    for(int i = 0; i < this->num_of_kendaraan; i++){
        koleksi[i] = KK.koleksi[i];
    }
}

KoleksiKendaraan& KoleksiKendaraan::operator=(const KoleksiKendaraan &KK){
    this->size = KK.size;
    this->num_of_kendaraan = KK.num_of_kendaraan;
    delete[] this->koleksi;
    this->koleksi = new Kendaraan[this->size];
    this->kendaraan = new Kendaraan[this->size];
    for(int i = 0; i < this->num_of_kendaraan; i++){
        this->koleksi[i]=KK.koleksi[i];
    }
}

KoleksiKendaraan::~KoleksiKendaraan(){
    delete[] this->koleksi;
}



void KoleksiKendaraan::operator<<(KoleksiKendaraan &KK){
    if(this->num_of_kendaraan < this->size){
        for (int i=0; i< this->num_of_kendaraan; i++){
            this->kendaraan[this->num_of_kendaraan] = KoleksiKendaraan[this->num_of_kendaraan];
        }
    else{
        cout << "Gagal menambahkan kendaraan, list penuh !" << endl;
    }
}
}