/******** Hanny Margaretha Aritonang *********/

#ifndef __CAR__
#define __CAR__

#include <iostream>
using namespace std;

class Car {
    private :
        int nomor;
        int tahun_keluaran;
        string merk;
        string kategori;

        int* lamaSewa;
        //int biayaSewa;

        static int hargaSewa;
    
    public :
        Car ();                                          //default-ctor
        Car (int nomor, int tahun_keluaran, string merk, string kategori);   //user-defined-ctor
        Car& operator =(const Car &c);
        ~Car();
        
    void printInfo();

    long biayaSewa(int lamaSewa);



};
#endif
