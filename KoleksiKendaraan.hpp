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
        KoleksiKendaraan(const KoleksiKendaraan &kk);
        KoleksiKendaraan& operator=(const KoleksiKendaraan &kk);
        ~KoleksiKendaraan();

        void operator<<(Kendaraan &K);

};

#endif