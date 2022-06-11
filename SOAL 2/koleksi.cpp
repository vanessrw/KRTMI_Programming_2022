#include "koleksi.h"
#include <iostream>
#include <cstring>
using namespace std;

// yah karena interface yang dibuat sudah tidak sesuai dengan spesifikasi soal,
// jadi tidak bisa aku lanjutkan pemeriksaan pada kode implemntasi ini

int Kendaraan::n_kendaraan = 0;

Kendaraan::Kendaraan(char *n){
    this->name = new char[strlen(n)];
    strcpy(this->name, n);
    this->num_of_kendaraan = 0;
    this->kendaraan_list = new char *[5000];
    n_kendaraan++;
}

Kendaraan::Kendaraan(const Kendaraan &Kendaraan){
    this->name = new char[strlen(Kendaraan.getName())];
    strcpy(this->name, kendaraan.getName());
    this->num_of_kendaraan = kendaraan.num_of_kendaraan;
    this->kendaraan_list = new char *[255];
    for (int i = 0; i < Kendaraan.num_of_kendaraan; i++)
    {
        this->kendaraan_list[i] = new char[strlen(Kendaraan.kendaraan_list[i])];
        strcpy(this->kendaraan_list[i], Kendaraan.kendaraan_list[i]);
    }
    n_kendaraan++;
}

// menambah kendaraan sesuai kapasitas array
void Kendaraan::addKendaraan(char *Kendaraan){
    if (n_kendaraan < 101) {
        this->num_of_kendaraan++;
        this->kendaraan_list[this->num_of_kendaraan - 1] = new char[strlen(Kendaraan)];
        strcpy(this->kendaraan_list[this->num_of_kendaraan - 1], Kendaraan);
        }
    else{
        cout << "Gagal menambahkan kendaraan, list penuh !" << endl;
    }
}

int Kendaraan::getNumOfKendaraan() const{
    return this->num_of_kendaraan;
}

void Kendaraan::viewKendaraanList() const{
    if (this->num_of_kendaraan > 0){
        for (int i = 0; i < this->num_of_kendaraan; i++){
            cout << (i + 1) << ". " << this->kendaraan_list[i] << endl;
        }
    }
    else{
        cout << "List kendaraan kosong." << endl;
    }
}

int Kendaraan::getNumOfKendaraan(){
    return Kendaraan::n_kendaraan;
}