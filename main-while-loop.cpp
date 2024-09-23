#include <iostream>
using namespace std;

int main() {
    int hasil = 0;
    int penjumlahan = 1;

    while (true)
    {
        hasil += penjumlahan;

        cout << hasil - penjumlahan << " + " << penjumlahan << " = " << hasil << "\n";
        
        if (penjumlahan == 10) {
            break;
        }
        penjumlahan ++;
    }
}