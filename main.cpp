#include "kendaraan.hpp"
#include "koleksikendaraan.hpp"

void f(Kendaraan c);

int main(){
    Kendaraan bus, minibus, mobil;

    bus.set_kategori("bus");
    bus.get_kategori();
    minibus.set_kategori("minibus");
    minibus.get_kategori();
    mobil.set_kategori("mobil");
    mobil.get_kategori();

    bus.set_nomor(101);
    bus.get_nomor();
    bus.set_tahun(2011);
    bus.get_tahun();
    bus.set_merk("Toyota");
    bus.get_merk();

    minibus.set_nomor(202);
    minibus.get_nomor();
    minibus.set_tahun(2012);
    minibus.get_tahun();
    minibus.set_merk("Daihatsu");
    minibus.get_merk();

    mobil.set_nomor(303);
    mobil.get_nomor();
    mobil.set_tahun(2013);
    mobil.get_tahun();
    mobil.set_merk("Nissan");
    mobil.get_merk();

    // assign value sebaikanya tidak dilakukan satu persatu seprti itu,
    // tapi sebaikanya dilakukan pada user-defined constructor
    // dan yah kamu enggak mengimplementasikan setter di kendaraan.cpp
    // jadi percuba juga karena valuenya enggak bakal masuk ke atribut objek
    // main ini gak bisa dirun ya btw
    
    KoleksiKendaraan arrKategori[]={}, arrMerk[]={}, arrTahun[]={}, arrNomor[]={};

}

void menu(KoleksiKendaraan &kk){
    int pilih;

    cout<<"\n \n \t\t";
    cout<<"\n\t\t# # # # # # # # # # # #";
    cout<<"\n\t\t#        Menu         #";
    cout<<"\n\t\t#     -----------     #";
    cout<<"\n\t\t#  1. Sewa Kendaraan  #";
    cout<<"\n\t\t#  2. Info Kendaraan  #";
    cout<<"\n\t\t#  3. Exit            #";
    cout<<"\n\t\t# # # # # # # # # # # #";
    cout<<"\n\t\tMasukkan angka :       "; cin >> pilih;
    cout<<"_____________________________";
    fflush(stdin);
    scanf("%d", &pilih);
    switch (pilih)
    {
        case 1:
            void pilih_kendaraan();
            break;
        case 2:
            kk.printAll();
            break;

        case 3:
            exit(1);
            break;
        
        default:
            cout << "Angka tidak sesuai. Coba lagi.";
            void getc();
            void menu();
    }
}

void pilih_kendaraan(Kendaraan &k, string merk){
    int nomor_kendaraan, lamaSewa;
    
    cout<<"\n \n \t\t";
    cout<<"\n\t\t# # # # # # # # # # # # # # #";
    cout<<"\n\t\t#  Kendaraan yang tersedia  #";
    cout<<"\n\t\t#---------------------------#";
    cout<<"\n\t\t#       1. Bus              #";
    cout<<"\n\t\t#       2. Minibus          #";
    cout<<"\n\t\t#       3. Mobil            #";
    cout<<"\n\t\t#       4. Kembali          #";
    cout<<"\n\t\t#       5. Exit             #";
    cout<<"\n\t\t# # # # # # # # # # # # # # #";
    cout<<"\n\t\tMasukkan angka     :       "; cin >> nomor_kendaraan;
    cout<<"_____________________________";
    cout<<"\n\t\tMasukkan lama sewa :       "; cin >> lamaSewa;
    fflush(stdin);
    scanf("%d", &nomor_kendaraan);

    switch (nomor_kendaraan)
    {
        case 1:
            k.set_kategori ("bus");
            k.printInfo();
            k.biayaSewa(lamaSewa);
            break;
        case 2:
            k.set_kategori("minibus");
            k.printInfo();
            k.biayaSewa(lamaSewa);
            break;
        case 3:
            k.set_kategori("mobil");
            k.printInfo();
            k.biayaSewa(lamaSewa);
            break;
        case 4:
            void menu();
            break;
        case 5:
            exit(1);
            break;
        default:
            cout << "Angka tidak sesuai. Coba lagi.";
            void getc();
            void pilih_kendaraan();
    }
}
