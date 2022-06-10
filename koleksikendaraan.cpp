/******* Hanny Margaretha Aritonang *******/

#include "koleksikendaraan.hpp"
string arrKategori [100]= {"bus", "minibus","mobil"};
string arrMerk [100] = {"Toyota","Daihatsu","Nissan"};
int arrTahun [100] = {2011,2012,2013};
int arrNomor [100] = {101,202,303};

KoleksiKendaraan :: KoleksiKendaraan() {
    this-> arrKategori[100]={};
    this-> arrMerk[100]={};
    this-> arrNomor[100]={};
    this-> arrTahun[100]={};
    this-> Neff = 0;
}
KoleksiKendaraan :: KoleksiKendaraan(const KoleksiKendaraan &kk) {
    this-> Neff = kk.Neff;
    this-> arrKategori[100]=kk.arrKategori[100];
    this-> arrMerk[100]=kk.arrMerk[100];
    this-> arrNomor[100]=kk.arrNomor[100];
    this-> arrTahun[100]=kk.arrTahun[100];
}

KoleksiKendaraan& KoleksiKendaraan::operator=(const KoleksiKendaraan& kk) {
    this-> Neff = kk.Neff;
    this-> arrKategori[100]=kk.arrKategori[100];
    this-> arrMerk[100]=kk.arrMerk[100];
    this-> arrNomor[100]=kk.arrNomor[100];
    this-> arrTahun[100]=kk.arrTahun[100];
    return *this;
}

void KoleksiKendaraan :: printAll(){
    cout << arrKategori[100];
    cout << arrMerk[3];
    cout << arrNomor[100];
    cout << arrTahun[100];
}
