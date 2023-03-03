#include <iostream>

using namespace std;

int main()
{
string nama[10], tgl[10];
int jml,jam,total,menu;
int lama[10],i,j;

cout<<"==================="<<endl;
cout<<"PROGRAM RENTAL PS 3"<<endl;
cout<<"==================="<<endl;
cout<<"Masukkan jumlah perental : "<<endl;
cin>>jml;
for(i=0; i<jml; i++){
    cout<<endl;
    cout<<"Masukkan nama : ";
    cin>>nama[i];
    cout<<"Masukkan lama rental : ";
    cin>>lama[i];
    cout<<"Masukkan tanggal rental(dd/mm/yy) : ";
    cin>>tgl[i];

}
cout<<"#1 Lihat daftar perental"<<endl;
cout<<"#2 Keluar"<<endl;
cout<<"Pilih menu(1 atau 2) : ";
cin>>menu;
if(menu==1){
    for(j=0;j<jml;j++){
        cout<<"Nama perental : "<<nama[j]<<endl;
        cout<<"Lama perental : "<<lama[j]<<"jam"<<endl;
        cout<<"Tanggal rental : "<<tgl[j]<<endl;
        total=1000*lama[j];
        cout<<"Biaya rental : "<<total<<endl;
        cout<<"-----------------------"<<endl;
    }
}
else if(menu==2){
    exit(0);
}
else{
    cout<<"Menu tidak ada!Mohon pilih menu dengan benar";
}
return 0;
}

