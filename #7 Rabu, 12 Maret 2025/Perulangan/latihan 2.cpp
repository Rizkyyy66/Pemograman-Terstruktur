// menjumlahkan bilangan 1 s/d 10
#include <iostream>
using namespace std;
int main(){
    // SIAPKAN 2 VARIABEL
    int x = 1; // inisial untuk literasi
    int total=0; // inisial untuk nilai total
    while(x<=10){
        cout<< "Iterasi = " <<x <<endl;
        total+=x;
        x++;
    }
    cout<<"Hasil Penjumlahan Nilai 1 s/d 10 : " << total << endl;
    return 0;
}
