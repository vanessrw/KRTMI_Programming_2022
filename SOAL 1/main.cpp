#include "kendaraan.hpp"
using namespace std;

int main() {
    // print info
    Kendaraan jenis;
    jenis.printInfo();
    //print detailed info
    Kendaraan x(1, 2022, "avanza", "mobil");
    x.printInfo();
    //biaya sewa
    cout <<x.biayaSewa(2) << endl;
}