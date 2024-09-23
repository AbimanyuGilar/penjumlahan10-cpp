#include <iostream>
using namespace std;

int main() {
    int hasil = 0;
    
    for(int sum = 1; sum <= 10; sum++) {
        hasil += sum;
        cout << hasil - sum << " + " << sum << " = " << hasil << endl;
    }
}