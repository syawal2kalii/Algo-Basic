#include <iostream>
#include <cstdlib>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

string crhomosome [15];
int hasil_convDes[5];

int convDes(int bin){
    int sisa, pangkat = 0, hasil = 0;
    while (bin >= 1)
    {
        sisa = bin % 2;
        hasil += sisa * pow(2, pangkat);
        pangkat++;
        bin = bin/10;
    }
    return hasil;
}

void substring(int x)
{
    string sub1[5];
    int a = 0;
    for (int i = 0; i < 5; i++)
    {
        sub1[i] = crhomosome[x].substr(a,4);
        a = a+4;
    }
    
    int hasil_konversi[5];
    for (int i = 0; i < 5; i++)
    {
        hasil_konversi[i] = atoi(sub1[i].c_str());
    }
    
    for (int i = 0; i < 5; i++)
    {
        hasil_convDes[i] = convDes(hasil_konversi[i]);
    }
    
}

int main()
{
    string mataKuliah [16] = {"web","jarkom","struktur data","basis data I",
                              "basis data II","microcontroler","microprocessor","Pengantar Pemrograman",
                              "Pemrograman Terstruktur","APL","SPK","matematika dasar",
                              "statistika", "robotika", "algoritma", "fisika"
                              };
    string dosen[16] = {"dosen1","dosen2","dosen3","dosen4",
                        "dosen5","dosen6","dosen7","dosen8",
                        "dosen9","dosen10","dosen11", "dosen12",
                        "dosen13","dosen14","dosen15","dosen16"
                        };
    string kelas[16] = {"A1","A2","A3","A4","A5","A6","A7","A8","A9","B1","B2","B3","B4","B5","B6","B7"};
    string waktu[16] = {
                            "senin, 07:40-09:20","senin, 09:20-11:00","senin, 13:00-14:40","senin, 14:40-16:20",
                            "selasa, 07:40-09:20","selasa, 09:20-11:00","selasa, 13:00-14:40","selasa, 14:40-16:20",
                            "rabu, 07:40-09:20","rabu, 09:20-11:00","rabu, 13:00-14:40","rabu, 14:40-16:20",
                            "kamis, 07:40-09:20","kamis, 09:20-11:00","kamis, 13:00-14:40","kamis, 13:00-14:40"
                        };
    string ruangan[16] = {
                            "lab dasar1","lab dasar2","lab dasar3","lab dasar4",
                            "lab jaringan1","lab jaringan2","lab jaringan3","lab jaringan4",
                            "lab multimedia1","lab multimedia2","lab multimedia3","lab multimedia4",
                            "lab micro1","lab micro2","lab micro3","lab micro4"
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

    // search
    string cari;
    cout<<"Masukkan yang Dicari : ";
    cin>>cari;
    
    for (int i = 0; i < 15; i++)
    {
        if(cari == crhomosome[i]){
            substring(i);
            cout<<"Kelas       = "<<kelas[hasil_convDes[2]]<<endl;
            cout<<"Waktu       = "<<waktu[hasil_convDes[4]]<<endl;
            cout<<"Mata Kuliah = "<<mataKuliah[hasil_convDes[0]]<<endl;
            cout<<"Dosen       = "<<dosen[hasil_convDes[1]]<<endl;
            cout<<"Ruangan     = "<<ruangan[hasil_convDes[3]]<<endl;
        }
    }
}
