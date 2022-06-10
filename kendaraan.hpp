/******** Hanny Margaretha Aritonang *********/

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

        int* lamaSewa;

        static int hargaSewa;
    
    public :
        Kendaraan ();                                          //default-ctor
        Kendaraan (int nomor, int tahun_keluaran, string merk, string kategori);   //user-defined-ctor
    
    string get_kategori() const;
    void set_kategori(string kategori);

    int get_nomor() const;
    void set_nomor(int nomor);

    int get_tahun() const;
    void set_tahun(int tahun);
    
    string get_merk() const;
    void set_merk(string merk);

    void pilih_kendaraan();
    void printInfo();

    long biayaSewa(int lamaSewa);

};


#endif
