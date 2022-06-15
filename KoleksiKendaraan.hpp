#ifndef __KOLEKSIKENDARAAN__
#define __KOLEKSIKENDARAAN__

#include "Kendaraan.hpp"

class KoleksiKendaraan {
    private:
        Kendaraan* koleksi;
        int size;
        int Neff;

    public:
        KoleksiKendaraan();
        KoleksiKendaraan(int size);
        KoleksiKendaraan(const KoleksiKendaraan &KK);
        KoleksiKendaraan& operator=(const KoleksiKendaraan &KK);
        ~KoleksiKendaraan();

        void operator<<(Kendaraan &K);
        KoleksiKendaraan& operator<<(const Kendaraan &K);

};

#endif