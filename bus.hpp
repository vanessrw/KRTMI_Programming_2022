/******** Hanny Margaretha Aritonang *********/

#ifndef __BUS__
#define __BUS__

#include <iostream>
using namespace std;

class Bus {
    private :
        int nomor;
        int tahun_keluaran;
        string merk;
        string kategori;

        int* lamaSewa;
        //int biayaSewa;

        static int hargaSewa;
    
    public :
        Bus ();                                          //default-ctor
        Bus (int nomor, int tahun_keluaran, string merk, string kategori);   //user-defined-ctor
        
    void printInfo();

    void biayaSewa(int lamaSewa);

    void operator+=(int lamaSewa);



};
#endif
