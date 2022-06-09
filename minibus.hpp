/******** Hanny Margaretha Aritonang *********/

#ifndef __MINIBUS__
#define __MINIBUS__

#include <iostream>
using namespace std;

class Minibus {
    private :
        int nomor;
        int tahun_keluaran;
        string merk;
        string kategori;

        int* lamaSewa;
        //int biayaSewa;

        static int hargaSewa;
    
    public :
        Minibus ();                                          //default-ctor
        Minibus (int nomor, int tahun_keluaran, string merk, string kategori);   //user-defined-ctor
        
    void printInfo();

    void biayaSewa(int lamaSewa);

    void operator+=(int lamaSewa);



};
#endif
