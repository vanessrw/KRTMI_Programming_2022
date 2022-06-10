#ifndef __KENDARAAN__
#define __KENDARAAN__

#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
    private:
        int nomor;
        int tahun_keluaran;
        string merk;
        string kategori;
        int lamaSewa;
        //static int sewa_perjam;

    public:
        Kendaraan();
        Kendaraan(int nomor, int tahun_keluaran, string merk, string kategori);
        Kendaraan(const Kendaraan &k);
        Kendaraan& operator=(const Kendaraan &k);
        ~Kendaraan();

        void printInfo();

        long biayaSewa(int lamaSewa);

};

#endif