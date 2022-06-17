#ifndef __KOLEKSIKENDARAAN__
#define __KOLEKSIKENDARAAN__

#include "kendaraan.hpp"

class KoleksiKendaraan {
    public:
        // ctor, parameter: size array kendaraan
        KoleksiKendaraan();
        KoleksiKendaraan(int size);
        KoleksiKendaraan(const Kendaraan &KK)

        // dtor
        ~KoleksiKendaraan();

        void operator<<(KoleksiKendaraan &KK);

    private:
        Kendaraan* koleksi;
        int size;
        int num_of_kendaraan; // jumlah kendaraan yang ada pada kendaraan_list (Neff)
        
};

#endif