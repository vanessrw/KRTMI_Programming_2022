/******** Hanny Margaretha Aritonang *********/

#ifndef __KOLEKSIKENDARAAN__
#define __KOLEKSIKENDARAAN__

#include <iostream>
using namespace std;

class KoleksiKendaraan {
    private :
        char arrKategori[100], arrMerk[100];
        int arrTahun[100], arrNomor[100];
        int Neff;
    
    public :
        KoleksiKendaraan ();                                //default-ctor
        KoleksiKendaraan (char array[100], int Neff);     //user-defined-ctor
        KoleksiKendaraan (const KoleksiKendaraan &kk);      //copy ctor
        ~KoleksiKendaraan();

        void menu();

        void printAll();

};

struct Stack{

};


#endif
