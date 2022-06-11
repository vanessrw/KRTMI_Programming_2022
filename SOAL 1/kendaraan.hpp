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
        // dua variabel tersebut sama seperti milik hanny
        // komentar dari aku sama seperti pada hanny
    
    public :
        Kendaraan()    // default-constructor 
        // gak ada titik komanya di belakang, error nih kalau dicompile
        
        Kendaraan(int nomor, int tahun_keluaran, string merk, string kategori);  //user-defined constructor
        Kendaraan(const Kendaraan &k);   // copy constructor
        Kendaraan& operator=(const Kendaraan &k);    // assignment operator
        ~Kendaraan();    // destructor

        // another function
        void printInfo();
        
        static int get_harga_sewa();
        long biayaSewa(int lamaSewa);
};

// PER JENIS KENDARAAN
struct bus{
    int bus_id;
    int bus_year;
    string bus_merk;
    string bus_kategori;
};
struct minibus{
    int minibus_id;
    int minibus_year;
    string minibus_merk;
    string minibus_kategori;
};

struct car{
    int car_id;
    int car_year;
    string car_merk;
    string car_kategori;
};

// tidak ada perintah untuk membuat ADT untuk setiap kategori kendaraan
// kategori kendaraan cukup berupa string saja
// kenapa kamu mempersulit diri sendiri :v

#endif