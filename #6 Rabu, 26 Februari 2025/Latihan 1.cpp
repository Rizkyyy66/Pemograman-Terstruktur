#include <iostream>
using namespace std;

int main() {
    int tinggi, berat;

    cout << "Masukkan tinggi badan (dalam cm): ";
    cin >> tinggi;
    cout << "Masukkan berat badan (dalam kg): ";
    cin >> berat;

    int selisih = tinggi - berat;

    if (selisih > 120) {
        cout << "Kegemukan" << endl;
    }
    else if (selisih >= 111 && selisih <= 120) {
        cout << "Ideal" << endl;
    }
    else if (selisih >= 100 && selisih <= 110) {
        cout << "Kurus" << endl;
    }
    else {
        cout << "Sangat Kurus" << endl;
    }

    return 0;
}
