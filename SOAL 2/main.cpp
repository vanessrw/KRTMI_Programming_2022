#include "kendaraan.hpp"
#include "koleksi.hpp"
using namespace std;

int main() {
    //1
    // print info
    Kendaraan jenis;
    jenis.printInfo();
    //print detailed info
    Kendaraan x(1, 2022, "avanza", "mobil");
    x.printInfo();
    //biaya sewa
    cout <<x.biayaSewa(2) << endl;

    //2c
    KoleksiKendaraan KK;
    return 0;
}