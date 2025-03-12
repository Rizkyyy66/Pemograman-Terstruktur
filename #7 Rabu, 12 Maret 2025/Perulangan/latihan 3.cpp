#include <iostream>
using namespace std;
int main(){
    int angka;
    do {
        cout<<"Masukan Sebuah Nilai (Nilai 0  Untuk Berhenti) : ";
        cin>>angka;
        cout<<"Anda Menginput Nilai :"<<angka<<endl;
    } while(angka!=0);
    cout<<"Progam Selesai. Terima Kasih"<<endl;
    return 0;
}
