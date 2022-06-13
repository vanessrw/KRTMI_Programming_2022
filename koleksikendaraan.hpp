/******** Hanny Margaretha Aritonang *********/

#ifndef __KOLEKSIKENDARAAN__
#define __KOLEKSIKENDARAAN__

#include "kendaraan.hpp"
using namespace std;

class KoleksiKendaraan {
    private :
        Kendaraan* koleksi;
        int size;
        int Neff;
    
    public :
        KoleksiKendaraan ();                                //default-ctor
        KoleksiKendaraan (int size);     //user-defined-ctor
        KoleksiKendaraan (const KoleksiKendaraan &kk);      //copy ctor
        ~KoleksiKendaraan();

        void printAll();

};

#endif
