#include <iostream>
using namespace std;
int main(){
  //LICENCE BY SATYA DONT RECODE THIS PROGRAM//
  // MENYIMPAN VAR //
  int jenis, harga, tambahan, jam_berikutnya, lama;
  
  //DEKLARASIKAN PROGRAM//
  cout << "=======================" << endl;
  cout << "PROGRAM PARKIR MOBIL/MOTOR" << endl;
  cout << "=======================" << endl;
  cout << "PILIH JENIS KENDARAANMU" << endl;
  cout << "1. mobil" << endl;
  cout << "2. motor" << endl;
  cin >> jenis;
  
  //MENGGUNAKAN SWITCH FUNCTION//
  switch (jenis){
    case 1 :
    harga=10000;
    tambahan=500;
    break;
    
    case 2 :
    harga=5000;
    tambahan=100;
    break;
  }
  // MEMPERTANYAKAN LAMA PARKIR //
  cout << "BERAPA LAMA ANDA AKAN PARKIR?" << endl;
  cin >> lama;
  
  //IF ELSE//
  if (lama > 2){
    cout << jam_berikutnya;
  }
  else{
    jam_berikutnya=0;
  }
  //MENAMPILKAN OUTPUT//
  cout << "============================" << endl;
  cout << "2 JAM PERTAMA" << harga << endl;
  cout << "JAM BERIKUTNYA" << jam_berikutnya << endl;
  cout << "TOTAL NYA : " << harga+jam_berikutnya << endl;
  return 0;
}
