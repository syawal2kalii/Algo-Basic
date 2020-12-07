#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <cstring>
#include <math.h>

using namespace std;

string choromosome[15];
int hasil[5];

int konversiDes(int bin)
{
    int sisa, desimal, pangkat;
    desimal = 0;
    pangkat = 0;
    while (bin >= 1)
    {
        sisa = bin % 2;
        desimal += sisa * pow(2, pangkat);
        bin = bin / 10;
        pangkat++;
    }
    return desimal;
}

int subString(int x)
{

    string subChromosome[5];
    int a = 0;

    for (int i = 0; i < 5; i++)
    {
        subChromosome[i] = choromosome[x].substr(a, 4);
        a += 4;
    }

    int konSubstring[5];
    for (int i = 0; i < 5; i++)
    {
        konSubstring[i] = atoi(subChromosome[i].c_str());
    }

    for (int i = 0; i < 5; i++)
    {
        hasil[i] = konversiDes(konSubstring[i]);
    }
}

int main()
{
    string mataKuliah[] = {
        "Mata Kuliah1", "Mata Kuliah2", "Mata Kuliah3", "Mata Kuliah4", "Mata Kuliah5", "Mata Kuliah6", "Mata Kuliah7", "Mata Kuliah8", "Mata Kuliah9", "Mata Kuliah10", "Mata  Kuliah11", "Mata Kuliah12", "Mata Kuliah13", "Mata Kuliah14", "Mata Kuliah15", "Mata Kuliah16"};
    string dosen[] = {
        "Dosen1", "Dosen2", "Dosen3", "Dosen4", "Dosen5", "Dosen6", "Dosen7", "Dosen8", "Dosen9", "Dosen10", "Dosen11", "Dosen12", "Dosen13", "Dosen14", "Dosen15", "Dosen16"};
    string kelas[] = {
        "Kelas1", "Kelas2", "Kelas3", "Kelas4", "Kelas5", "Kelas6", "Kelas7", "Kelas8", "Kelas9", "Kelas10", "Kelas11", "Kelas12", "Kelas13", "Kelas14", "Kelas15", "Kelas16"};
    string ruangan[] = {
        "Ruangan1", "Ruangan2", "Ruangan3", "Ruangan4", "Ruangan5", "Ruangan6", "Ruangan7", "Ruangan8", "Ruangan9", "Ruangan10", "Ruangan11", "Ruangan12", "Ruangan13", "Ruangan14", "Ruangan15", "Ruangan16"};
    string waktu[] = {
        "Waktu1", "Waktu2", "Waktu3", "Waktu4", "Waktu5", "Waktu6", "Waktu7", "Waktu8", "Waktu9", "Waktu10", "Waktu11", "Waktu12", "Waktu13", "Waktu14", "Waktu15", "Waktu16"};

    bool condi = true;
    int n = 0;
    char condition;
    do
    {
        cout << "Input Data: ";
        cin >> choromosome[n];
        cout << "Input lagi? Y/N: ";
        cin >> condition;
        n++;
    } while (condition != 'n');

    string cari;
    cout << "Masukkan data yang ingin dicari: ";
    cin >> cari;

    for (int i = 0; i <= 15; i++)
    {
        if (cari == choromosome[i])
        {
            subString(i);
            cout << "Kelas    : " << kelas[hasil[2]] << endl;
            cout << "Waktu    : " << waktu[hasil[4]] << endl;
            cout << "Matkul   : " << mataKuliah[hasil[0]] << endl;
            cout << "Dosen    : " << dosen[hasil[1]] << endl;
            cout << "Ruangan  : " << ruangan[hasil[3]] << endl;
        }
    }

    return 0;
}