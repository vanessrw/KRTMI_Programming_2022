#include "car.hpp"

// kenapa includenya car.hpp? :v menggokil
// harusnya include "kendaraan.hpp"

void menu(){
    int pilih;
    cout<<"--MENU--";
    cout<<"\n\t\t#  1. Sewa Kendaraan ";
    cout<<"\n\t\t#  2. Info ";
    cout<<"\n\t\t#  3. Exit ";
    cout<<"Masukkan angka: "; cin >> pilih;

    fflush(stdin);
    scanf("%d", &pilih);
    
    switch (pilih)
    {
        case 1:
            pilih_kendaraan();
            break;
        case 2:
            printInfo();
            breaki; // breaki...

        case 3:
            exit(1);
            break;
        
        default:
            cout << "Input tidak valid !";
            getch();
            menu();
    }
}

void pilih_kendaraan(){
    int nomor_kendaraan;
    
    cout<<"1. Bus";
    cout<<" 2. Minibus";
    cout<<"3. Mobil";
    cout<<" 4. Kembali";
    cout<<"5. Exit";

    cout<<"Masukkan angka: "; cin >> nomor_kendaraan;
    fflush(stdin);
    scanf("%d", &nomor_kendaraan);

    switch (nomor_kendaraan)
    {
        case 1:
            Bus();
            break;
        case 2:
            Minibus();
            break;
        case 3:
            Car();
            break;
        case 4:
            menu();
            break;
        case 5:
            exit(1);
            break;
        default:
            cout << "Input tidak valid !";
            getch();
            pilih_kendaraan();
    }
}

// main ini tidak bisa dijalankan...
// sebenarnya aku tidak mengharap ada menu menu seprti ini di main
// hanya tunjukkan saja bagaimana kelas yang telah kamu buat bisa berfungsi ketika
// dikirimkan maessage tertentu