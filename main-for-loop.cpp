#include <iostream>
using namespace std;

int main() {
    int hasil = 1;
    
    for(int sum = 2; sum <= 10 ; sum++) {
        hasil += sum;
        cout << hasil - sum << " + " << sum << " = " << hasil << endl;
    }
}