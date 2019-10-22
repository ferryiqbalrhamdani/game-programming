#include <iostream>

using namespace std;

int main()
{
    string item, simpan,ihebat,ilemah;
    int stat;
    int terhebat=0;
    int terlemah=0;
    bool pertama= true;
    char ulang='y';

    while(ulang=='y')
    {
            cout << "Masukan Item : ";
            cin >> item;
            cout << "Masukan Stat : ";
            cin >> stat;

            cout <<"\n\n==============================\n\n";
            cout << "Item anda adalah : " <<item;
            cout << "\nStat anda adalah : " <<stat;

            if(pertama)
            {
                simpan = "nothing";
                ihebat=item;
                ilemah=item;
            }
            pertama =false;
            cout << "\nItem anda sebelumya : " <<simpan;
            simpan=item;

            if(stat>terhebat)
            {
                ihebat=item;
                terhebat=stat;
            }
            else
            {
                ilemah=item;
                terlemah=stat;
            }

            cout << "\nItem anda terhebat : " <<ihebat;
            cout << "\nItem anda terlemah : " <<ilemah;

            cout <<"\n\n==============================\n\n";
            cout << "Input lagi? (y/n) : ";
            cin >>ulang;
            cout <<"\n==============================\n\n";

    }

    return 0;
}
