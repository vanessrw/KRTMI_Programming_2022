#ifndef KOLEKSI_H
#define KOLEKSI_H

#include <cstring>

class KoleksiKendaraan {
    public:
        // ctor, parameter: nama kendaraan
        Kendaraan(char*);
        // nama constructor harus sama dengan nama kelas
        // berdasarkan spek soal, parameter masukan adalah size dari array of kendaraan
        // bukan nama dari kendaraan
        
        // cctor
        Kendaraan(const Kendaraan&);
        // penulsian cctor masih salah, harusnya:
        // KoleksiKendaraan(const KoleksiKendaraan&);

        // mana operator assignment?

        // dtor
        ~Kendaraan();
        // namanya salah juga

        // Asumsi: kendaraan unik, parameter: nama kendaraan
        void addKendaraan(char*);
        void Kendaraan(char*);
        // ini untuk apa ...?
        
        void setName(char*);
        char* getName() const;
        int getNumOfKendaraan() const;

        // print
        void viewKendaraanList() const;
        static int Kendaraan_max();

        // tidak ada operator overload
        // operator<<(KoleksiKendaraan)
        // padahal ini adalah bagianmu???
        // kenapa malah membuat method lain yang sebenarnya tidak perlu? (tidak diminta pada spesifikasi soal)

    protected:
        char* name;
        // nama untuk apa??

        int num_of_kendaraan; // jumlah kendaraan yang ada pada kendaraan_list
        // oke bisa disebut Neff
        char** kendaraan_list; // daftar nama kendaraan
        // harusny yang dibuat tuh array of Kendaraan buakan array of char
        // kamu perlu menginclude file kendaraan.h
        // lalu buat array seperti ini
        // Kendaraan* kendaraan_list;

        static int n_kendaraan;
        // apakah setiap koleksi kendaraan yang dibuat perlu mengetahui informasi ini bersama?
        // btw kalo enggak disuruh, enggak perlu dibuat
        // dan sebenarnya ini n kendaraan apa ._.

};

#endif