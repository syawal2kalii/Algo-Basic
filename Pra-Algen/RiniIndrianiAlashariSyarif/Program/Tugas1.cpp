#include <iostream>
#include <cstdlib>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string input [20];
int hasil[5];

int konversiDes(int bin)
{
    int sisa, hasil, a;
    hasil = 0;
    int pangkat = 0;
    while (bin >= 1)
    {
        sisa = bin % 2;
        hasil += sisa * pow (2, pangkat);
        bin = bin / 10;
        pangkat++;
    }
	 return hasil;
}

void substring(int x){


	string subSub[5];

	int a = 0;

	for(int i = 0; i < 5; i++){
		subSub[i] = input[x].substr(a,4);
		a = a + 4;
	}

	int atoiX[5];
	
	for(int i = 0; i < 5; i++){
    	atoiX[i] = atoi(subSub[i].c_str());
	}

	for(int i = 0; i < 5; i++){
		hasil[i] = konversiDes(atoiX[i]);
	}

	for(int i = 0; i < 5; i++){
		cout<<hasil[i];
	}
    cout<<endl;
}

int main(){
    string mataKuliah [20] = {"Sistem Operasi","Logika Informatika","WEB","Jaringan Komputer","Struktur Data",
							  "Basis Data I","Basis Data II", "Microprosessor","Pengantar Pemrograman","Analisa Perangkat Lunak",
							  "Pemrograman Terstruktur","Sistem Pendukung Keputusan","Microcontroller","Metode Numerik","Statistika",
							  "Matdas","APS","AI","Manajemen Proyek","RPLO"};
							  
    string dosen[20] = {"dosen1","dosen2","dosen3","dosen4","dosen5",
						"dosen6","dosen7","dosen8","dosen9","dosen10",
						"dosen11","dosen12","dosen13","dosen14","dosen15",
						"dosen16","dosen17","dosen18","dosen19","dosen20"};
    
    string kelas[20] = {"A1","A2","A3","A4","A5",
						"A6","A7","A8","A9","A10",
						"B1","B2","B3","B4","B5",
						"B6","B7","B8","B9","B10"};
    
    string waktu[20] = {"Senin, 07:40-09:20","Senin, 13:00-14:40","Senin, 14:40-16:20","Selasa, 07:40-09:20","Selasa, 13:00-14:40",
						"Selasa, 14:40-16:20","Rabu, 07:40-09:20","Rabu, 13:00-14:40","Rabu, 14:40-16:20","Kamis, 07:40-09:20",
						"Kamis, 13:00-14:40","Kamis, 14:40-16:20","Jum'at, 07:40-09:20","Jum'at, 13:00-14:40","Jum'at, 14:40-16:20"
						"Sabtu, 07:40-09:20","Sabtu, 13:00-14:40","Sabtu, 14:40-16:20","Ahad, 13:00-14:40","Ahad, 14:40-16:20"};
						
	string ruangan[20] = {"Lab Dasar","Lab Jarkom", "Lab Multimedia", "Lab Industri", "Lab RPL",
						  "Lab Micro","U301","U302","U303","U304",
						  "U305","U306","U307","U308","U309"
						  "U310","U312","U313","U401","U402"};
        
	int n = 0;
	char condition;
	do{	
		cout<<"input: ";
		cin>>input[n]; 
		cout<<"Y/N: ";
		cin>>condition;	
		n++;
	}while(condition!='n');

    string cari;
    cout<<"Masukkan Cari: ";
    cin>>cari;
    
    for (int i = 0; i < 20; i++){
     if (cari == input[i]){
         substring(i);
        cout<<"Kelas    : "<<kelas[hasil[2]]<<endl;         
        cout<<"Waktu    : "<<waktu[hasil[3]]<<endl;         
        cout<<"Matkul   : "<<mataKuliah[hasil[0]]<<endl;         
        cout<<"Dosen    : "<<dosen[hasil[1]]<<endl;         
        cout<<"Ruangan  : "<<ruangan[hasil[4]]<<endl;         
     }
    } 
}
