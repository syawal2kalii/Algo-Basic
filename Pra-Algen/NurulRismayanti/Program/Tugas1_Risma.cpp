#include<iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int bin1, bin2, bin3, bin4, bin5;
int main(){
 string Matakuliah[15] = {"web", "jarkom", "st", "bd","pti","psti", "pbo", "ap", "bd2", "sd", "aa", "Aaps", "bd3", "bd4", "mikrotik"};
 string Dosen[15] = {"dosen1", "dosen2", "dosen3", "dosen4", "dosen5", "dosen6", "dosen7", "dosen8",
                    "dosen9", "dosen10", "dosen11", "dosen12", "dosen13", "dosen14","dosen15"};
 string Kelas[15] = {"A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8", "A9", "A10", "A11", "A12", "A13", "A14", "A15"};
 string Ruangan[15] = {"labrpl", "labjarkom", "labdasar", "labmikro", "labap", "labmultimedia", "labsd",
                        "labpsti", "labbd", "labpbo", "labst", "labaa", "labfik", "iclabs", "labfikom"};
 string waktu[15]= {"senin-13:00-14:40",
                    "senin-14:00-16:00",
                    "senin-16:00-18:00",
                    "selasa-13:00-14:40",
                    "selasa-14:00-16:00",
                    "selasa-16:00-18:00",
                    "rabu-13:00-14:40",
                    "rabu-14:00-16:00",
                    "rabu-16:00-18:00",
                    "kamis-13:00-14:40",
                    "kamis-14:00-16:00",
                    "kamis-16:00-18:00",
                    "jumat-13:00-14:40",
                    "jumat-14:00-16:00",
                    "jumat-16:00-18:00",
                    };
 
 string biner[15];
 char condition;
 int n = 0;
 do{
	cout<<"Masukkan Bilangan Biner    : ";
	cin>>biner[n];
	cout<<"Y/N: ";
	cin>>condition;	
	n++;
	} while(condition!='n' || 'N');
	string cari;
	    cout<<"Masukkan Cari: ";
	    cin>>cari;
	     for (int j = 0; j < 15; j++){
	     if (cari == biner[j]){
	         
	        cout<<"Kelas    : "<<Kelas[bin3]<<endl;         
	        cout<<"Waktu    : "<<waktu[bin5]<<endl;         
	        cout<<"Matkul   : "<<Matakuliah[bin1]<<endl;         
	        cout<<"Dosen    : "<<Dosen[bin2]<<endl;         
	        cout<<"Ruangan  : "<<Ruangan[bin4]<<endl; 
	     }
	 }

//MEMECAHKAN INPUTAN MENJDI 5 BAGIAN

string bagian, bagian1, bagian2, bagian3, bagian4;
int i;
int x = 1;
	for(i = 0; i < 4; i++){
		bagian= biner[n].substr(i,4);
		i += 4;
	}
	for(i = 4; i < 8; i++){
		bagian1= biner[n].substr(i,4);
		i += 4;
	}
	for(i = 8; i < 12; i++){
		bagian2= biner[n].substr(i,4);
		i += 4;
	}
	for(i = 12; i < 16; i++){
		bagian3= biner[n].substr(i,4);
		i += 4;
	}
	for(i = 16; i < 20; i++){
		bagian4= biner[n].substr(i,4);
		i += 4;
	}
int biner1 = atoi(bagian.c_str());
int biner2 = atoi(bagian1.c_str());
int biner3 = atoi(bagian2.c_str());
int biner4 = atoi(bagian3.c_str());
int biner5 = atoi(bagian4.c_str());
bin1 = biner1;
bin2 = biner2;
bin3 = biner3;
bin4 = biner4;
bin5 = biner5;

//KONVERSI BINER KEDESIMAL

int dua1 = 1, dua2 = 1, dua3 =1, dua4 =1, dua5 = 1;
int desi1 = 0, desi2 = 0, desi3 = 0, desi4 = 0, desi5 = 0;
	do{
	desi1+=(biner1%2)*dua1;
	dua1*=2;
	biner1/=10;
	}while (biner1);
	
	do{
	desi2+=(biner2%2)*dua2;
	dua2*=2;
	biner2/=10;
	}while (biner2);
	
	
	do{
	desi3+=(biner3%2)*dua3;
	dua3*=2;
	biner3/=10;
	}while (biner3);
	
	do{
	desi4+=(biner4%2)*dua4;
	dua4*=2;
	biner4/=10;
	}while (biner4);
	
	do{
	desi5+=(biner5%2)*dua5;
	dua5*=2;
	biner5/=10;
	}while (biner5);
    
}
