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

    //soal 2
    KoleksiKendaraan KK;

    return 0;
}