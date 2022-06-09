/******* Hanny Margaretha Aritonang *******/

#include "kendaraan.hpp"

int Kendaraan:: hargaSewa = 500000;
int menu();
Kendaraan :: Kendaraan() {
    this-> nomor = 0;
    this-> tahun_keluaran = 0;
    this-> merk = "";
    this-> kategori = "mobil";
    this-> lamaSewa = new int[hargaSewa];
}

Kendaraan :: Kendaraan (int nomor, int tahun_keluaran, string merk, string kategori):
nomor(nomor), tahun_keluaran(tahun_keluaran), merk(merk), kategori(kategori){
}
Kendaraan :: Kendaraan(const Kendaraan &c) {
    this-> nomor = c.nomor;
    this-> tahun_keluaran = c.tahun_keluaran;
    this-> merk = c.merk;
    this-> kategori = c.kategori;
}

Kendaraan& Kendaraan :: operator=(const Kendaraan &c){
    this-> nomor = c.nomor;
    this-> tahun_keluaran = c.tahun_keluaran;
    this-> merk = c.merk;
    this-> kategori = c.kategori;
    return *this;
}

void Kendaraan:: cars(){
    ifstream ifs;
    ifs.open("cars.txt");
    int nomor_mobil;

    while(!ifs.eof()){

    }
    /*cout<<"\n \n \t\t";
    cout<<"\n\t\t# # # # # # # # # # # # # # #";
    cout<<"\n\t\t#  Merk mobil yang tersedia #";
    cout<<"\n\t\t#---------------------------#";
    cout<<"\n\t\t#       1. Ferrari 2015     #";
    cout<<"\n\t\t#       2. Tesla 2017       #";
    cout<<"\n\t\t#       3. Ford 2019        #";
    cout<<"\n\t\t#       4. Exit             #";
    cout<<"\n\t\t# # # # # # # # # # # # # # #";
    cout<<"\n\t\tMasukkan angka :       "; cin >> nomor_mobil;
    cout<<"_____________________________";
    fflush(stdin);
    scanf("%d", &nomor_mobil);
    
    switch (nomor_mobil)
    {
        case 1:
            this-> nomor = 101;
            this-> tahun_keluaran = 2015;
            this-> merk = "Ferrari";
            break;
        case 2:
            this-> nomor = 102;
            this-> tahun_keluaran = 2017;
            this-> merk = "Tesla";
            break;
        case 3:
            this-> nomor = 103;
            this-> tahun_keluaran = 2019;
            this-> merk = "Ford";
            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "Angka tidak sesuai. Coba lagi.";
            //getch();
            pilihMerk();
    }*/
}

void Kendaraan :: printInfo(){
    cout << "Nomor : " << this-> nomor << endl;
    cout << "Tahun Keluaran : " << this-> tahun_keluaran << endl;
    cout << "Merk : " << this-> merk << endl;
    cout << "Kategori : " << this-> kategori << endl;
    cout << endl;
}

long Kendaraan:: biayaSewa(int lamaSewa){
    return (lamaSewa * hargaSewa);
}

