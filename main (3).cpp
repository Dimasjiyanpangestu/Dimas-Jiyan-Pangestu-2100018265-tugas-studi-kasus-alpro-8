#include <iostream>
using namespace std;
class daftar{
private:
string a[12][2];
string total[12];
string hasil;

public:
  void input(){
  	for (int i=0; i<12; i++){
      cout << " Masukkan judul buku : ";
      cin >> a[i][1];
  }
    for(int i=0; i<12; i++){
      cout << " Kode Buku : ";
      cin >> a[i][0];
    }
  }
  void proses(){
    cout << "===================================================================================================\n";
    cout << "Jenis Buku\t\t\tKode Buku\t\t\tJudul Buku\n";
    cout << "===================================================================================================\n";
    cout << "Novel\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[0][i] << "\t\t\t\t";
    }
    cout << total[0];
    cout << "\nNovel\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[1][i] << "\t\t\t\t";
    }
    cout << total[1];
    cout << "\nNovel\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[2][i] << "\t\t\t\t";
    }
    cout << total[2];
    cout << "\nKomik\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[3][i] << "\t\t\t\t";
    }
    cout << total[3];
    cout << "\nKomik\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[4][i] << "\t\t\t\t";
    }
    cout << total[4];
    cout << "\nKomik\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[5][i] << "\t\t\t\t";
    }
    cout << total[5];
    cout << "\nKlopedia\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[6][i] << "\t\t\t\t";
    }
    cout << total[6];
    cout << "\nKlopedia\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[7][i] << "\t\t\t\t";
    }
    cout << total[7];
    cout << "\nklopedia\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[8][i] << "\t\t\t\t";
    }
    cout << total[8];
    cout << "\nDongeng\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[9][i] << "\t\t\t\t";
    }
    cout << total[9];
    cout << "\nDongeng\t\t\t";
    for(int i=0; i<2; i++){
      cout << a[10][i] << "\t\t\t\t";
    }
    cout << total[10];
    cout << "\nDongeng\t\t\t" ;
    for(int i=0; i<2; i++){
      cout << a[11][i] << "\t\t\t\t";
      cout << "\n==========================================\n";
    }
    
    
    
  }
};
int main(){
  daftar daftar;
  daftar.input();
  daftar.proses();
  return 0;
}