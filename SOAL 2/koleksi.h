#ifndef KOLEKSI_H
#define KOLEKSI_H

#include <cstring>

class KoleksiKendaraan {
    public:
        // ctor, parameter: nama kendaraan
        Kendaraan(char*);
        
        // cctor
        Kendaraan(const Kendaraan&);

        // dtor
        ~Kendaraan();

        // Asumsi: kendaraan unik, parameter: nama kendaraan
        void addKendaraan(char*);
        void Kendaraan(char*);
        
        void setName(char*);
        char* getName() const;
        int getNumOfKendaraan() const;

        // print
        void viewKendaraanList() const;
        static int Kendaraan_max();

    protected:
        char* name;
        int num_of_kendaraan; // jumlah kendaraan yang ada pada kendaraan_list
        char** kendaraan_list; // daftar nama kendaraan
        static int n_kendaraan;
};

#endif