#ifndef __KENDARAAN__
#define __KENDARAAN__

#include <iostream>
using namespace std;

class Kendaraan {
    private :
        int nomor;
        int tahun_keluaran;
        string merk;
        string kategori;
        
    public :
        Kendaraan();                                          //default-ctor
        Kendaraan(int nomor, int tahun_keluaran, string merk, string kategori);   //user-defined-ctor
        Kendaraan(const Kendaraan &k);
        Kendaraan& operator=(const Kendaraan &k);
        ~Kendaraan();

    void printInfo();

    long biayaSewa(int lamaSewa);

};


#endif
