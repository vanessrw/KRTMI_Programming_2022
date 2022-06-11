/******** Hanny Margaretha Aritonang *********/

#ifndef __KOLEKSIKENDARAAN__
#define __KOLEKSIKENDARAAN__

#include <iostream>
using namespace std;

class KoleksiKendaraan {
    private :
        string arrKategori[3], arrMerk[3];
        int arrTahun[100], arrNomor[100];
        // yang ada hanya array of kendaraan, bukan array of string
        // liat contoh yang benar pada branch mujah
        int Neff;
        // aloksasi memori dari array itu tidak dilakukan di sini
        // tapi dilakukan di constructor, jadi cukup tuliskan seperti ini
        // untuk membuat array of sesuatu
        // sesuatu* arrName;
        // nanti di konstrukor tinggal dialokasikan dengan atribut size seperti ini
        // arrName = new sesuatu[size];
        // sayangnya kamu tidak membuat atribut size

    public :
        KoleksiKendaraan ();                                //default-ctor
        KoleksiKendaraan (char array[100], int Neff);     //user-defined-ctor
        // ee aku tidak mengerti kenapa kamu memasukkan array sebagai parameter
        KoleksiKendaraan (const KoleksiKendaraan &kk);      //copy ctor
        ~KoleksiKendaraan();

        void menu(); // menu gak perlu, tidak ada permintaan untuk membuat menu di sini

        void printAll();

};

struct Stack{

}; // ini buat apa? lupa dihapus ea


#endif
