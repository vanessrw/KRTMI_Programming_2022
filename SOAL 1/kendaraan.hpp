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

        int*lama_sewa;
        static int harga_sewa;
    
    public :
        Kendaraan();    // default-constructor 
        Kendaraan(int nomor, int tahun_keluaran, string merk, string kategori);  //user-defined constructor
        Kendaraan(const Kendaraan &k);   // copy constructor
        Kendaraan& operator=(const Kendaraan &k);    // assignment operator
        ~Kendaraan();    // destructor

        // another function
        void printInfo();
        
        static int get_harga_sewa();
        long biayaSewa(int lamaSewa);
};

#endif