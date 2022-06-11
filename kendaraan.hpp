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
        // untuk apa membuat array dari lamaSewa?
        // apakah ini seperti history kendaraan pernah disewa berapa lama aja?

        static int hargaSewa;
        // apakah value dari hargaSewa dimiliki oleh semua kendaraan?
        // atau apakah untuk setiap kategori kendaran memiliki harga sewanya masing masing?
    
    public :
        Kendaraan ();                                          //default-ctor
        Kendaraan (int nomor, int tahun_keluaran, string merk, string kategori);   //user-defined-ctor
        // sebenarnya tidak perlu ada spasi di antara nama constructor dan tanda kurung
        // mana operator yang lain?
        // copy constructor, assignment operator, destructor??

    string get_kategori() const;
    void set_kategori(string kategori);

    int get_nomor() const;
    void set_nomor(int nomor);

    int get_tahun() const;
    void set_tahun(int tahun);
    
    string get_merk() const;
    void set_merk(string merk);
    // okelah dibuat setter dan getter dengan getter const 

    void pilih_kendaraan();
    // apa yang akan dipilih dari kendaraan?

    void printInfo();

    long biayaSewa(int lamaSewa);

};


#endif
