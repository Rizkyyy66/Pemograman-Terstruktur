#include <iostream>
using namespace std;

int main() {
    int skor;

    cout << "Masukkan skor mahasiswa (angka bulat): ";
    cin >> skor;

    if (skor > 80) {
        cout << "Nilai: A" << endl;
    }
    else if (skor >= 60 && skor <= 79) {
        cout << "Nilai: B" << endl;
    }
    else if (skor >= 40 && skor <= 59) {
        cout << "Nilai: C" << endl;
    }
    else if (skor >= 20 && skor <= 39) {
        cout << "Nilai: D" << endl;
    }
    else if (skor < 20) {
        cout << "Nilai: E" << endl;
    } else {
        cout << "Skor tidak valid!" << endl;
    }

    return 0;
}
