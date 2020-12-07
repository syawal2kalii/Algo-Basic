#include <iostream>
#include <cstdlib>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string crhomosome [15];
int hasil[5];

int konversiDes(int bin)
{
    int sisa, hasil, a;
    hasil = 0;
    int pangkat = 0;
    while (bin >= 1)
    {
        sisa = bin % 2;
        hasil += sisa * pow(2, pangkat);
        bin = bin / 10;
        pangkat++;
    }
	 return hasil;
}

void substring(int x){


	string subSub[5];

	int a = 0;

	for(int i = 0; i < 5; i++){
		subSub[i] = crhomosome[x].substr(a,4);
		a = a + 4;
	}

	int atoiX[5];
	
	for(int i = 0; i < 5; i++){
    	atoiX[i] = atoi(subSub[i].c_str());
        cout<<atoiX[i]<<" ";
	}

	for(int i = 0; i < 5; i++){
		hasil[i] = konversiDes(atoiX[i]);
	}

	for(int i = 0; i < 5; i++){
		cout<<hasil[i]<<" ";
	}
    cout<<endl;
}

int main(){
    string mataKuliah [15] = {"web","jarkom","struktur data","basis data I","basis data II",
                             "microcontroler","microprocessor","Pengantar Pemrograman","Pemrograman Terstruktur","APL",
                             "SPK","java","web lanjut","mobile","sistem operasi"};
    string dosen[15] = {"dosen1","dosen2","dosen3","dosen4","dosen5",
                        "dosen6","dosen7","dosen8","dosen9","dosen10",
                        "dosen11","dosen12","dosen13","dosen14","dosen15"};
    string kelas[15] = {"A1","A2","A3","A4","A5","A6","A7","A8","A9","B1","B2","B3","B4","B5","B6"};
    string waktu[15] = {
        "senin, 07:40-09:20","senin, 13:00-14:40","senin, 14:40-16:20",
        "selasa, 07:40-09:20","selasa, 13:00-14:40","selasa, 14:40-16:20",
        "rabu, 07:40-09:20","rabu, 13:00-14:40","rabu, 14:40-16:20",
        "kamis, 07:40-09:20","kamis, 13:00-14:40","kamis, 14:40-16:20",
        "jumat, 07:40-09:20","jumat, 13:00-14:40","jumat, 14:40-16:20",};
	string ruangan[15] = {
        "R101","R102","R103","R104","R105",
        "R106","R107","R108","R109","R201",
        "R202","R203","R204","R205","R202"
        };
        
	int n = 0;
	char condition;
	do{	
		cout<<"input: ";
		cin>>crhomosome[n]; 
		cout<<"Y/N: ";
		cin>>condition;	
		n++;
	}while(condition!='n');

    string cari;
    cout<<"Masukkan Cari: ";
    cin>>cari;
    
    for (int i = 0; i < 15; i++){
     if (cari == crhomosome[i]){
         substring(i);
        cout<<"Kelas    : "<<kelas[hasil[2]]<<endl;         
        cout<<"Waktu    : "<<waktu[hasil[4]]<<endl;         
        cout<<"Matkul   : "<<mataKuliah[hasil[0]]<<endl;         
        cout<<"Dosen    : "<<dosen[hasil[1]]<<endl;         
        cout<<"Ruangan  : "<<ruangan[hasil[3]]<<endl;         
     }
    } 
}
