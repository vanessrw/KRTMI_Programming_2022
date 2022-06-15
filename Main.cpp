#include "Kendaraan.cpp"
#include "KoleksiKendaraan.cpp"

using namespace std;

int main(){
    //soal 1
    //uji print default
    Kendaraan k_def;
    k_def.printInfo();
    //uji print juga
    Kendaraan k1(1, 2021, "calya", "mobil");
    k1.printInfo();
    //uji biaya sewa
    cout << k1.biayaSewa(5) << endl;

    //soal 2b
    KoleksiKendaraan KK;
    KK << k_def;
    KK << k1;

    return 0;
}