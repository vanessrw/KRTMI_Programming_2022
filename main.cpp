#include "car.hpp"

void menu(){
    int pilih;

    cout<<"\n \n \t\t";
    cout<<"\n\t\t# # # # # # # # # # # #";
    cout<<"\n\t\t#        Menu         #";
    cout<<"\n\t\t#     -----------     #";
    cout<<"\n\t\t#  1. Sewa Kendaraan  #";
    cout<<"\n\t\t#  2. Info            #";
    cout<<"\n\t\t#  3. Exit            #";
    cout<<"\n\t\t# # # # # # # # # # # #";
    cout<<"\n\t\tMasukkan angka :       "; cin >> pilih;
    cout<<"_____________________________";
    fflush(stdin);
    scanf("%d", &pilih);
    switch (pilih)
    {
        case 1:
            pilih_kendaraan();
            break;
        case 2:
            printInfo();
            breaki;

        case 3:
            exit(1);
            break;
        
        default:
            cout << "Angka tidak sesuai. Coba lagi.";
            getch();
            menu();
    }
}

void pilih_kendaraan(){
    int nomor_kendaraan;
    
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
    cout<<"\n\t\tMasukkan angka :       "; cin >> nomor_kendaraan;
    cout<<"_____________________________";
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
            cout << "Angka tidak sesuai. Coba lagi.";
            getch();
            pilih_kendaraan();
    }
}
