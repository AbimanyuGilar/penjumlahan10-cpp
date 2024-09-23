#include <iostream>
using namespace std;

int main() {
    int hasil = 0;
    
    for(int i = 1; i <= 10; i++) {
        hasil += i;
        cout << hasil - i << " + " << i << " = " << hasil << endl;
    }
}