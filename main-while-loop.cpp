#include <iostream>
using namespace std;

int main() {
    int hasil = 1;
    int sum = 2;

    while (sum <= 10)
    {
        hasil += sum;

        cout << hasil - sum << " + " << sum << " = " << hasil << "\n";
        
        sum ++;
    }
}