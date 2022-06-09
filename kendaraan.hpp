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
        Kendaraan& operator =(const Kendaraan &k);
        ~Kendaraan();

    void cars();
        
    void printInfo();

    long biayaSewa(int lamaSewa);



};
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


#endif
