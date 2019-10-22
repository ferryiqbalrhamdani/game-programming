#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    vector<vector<string>> item { {"M4 Rifle","40"}, {"Pistol","60"}, {"Pisau","5"}, {"Bamboo","10"}, {"Kampak","25"}   };
    vector<vector<string>> inv;
    vector<vector<string>> ::iterator iter1;
    vector<string> :: iterator iter2;

    int batas;
    int mitem = item.size();
    int pilih;
    int terpilih;
    int jml=0;
    int hapus;
    char a ='y';

    cout <<"Jumlah Item Tersedia : "<<mitem<<endl;
    cout <<"Batasan Inventory : ";
    cin >>batas;
    cout <<endl;

    while(a=='y')
    {
        hapus=0;
        cout << "Inventory system : " << endl;
		cout << "1. Tampilkan inventory " << endl;
		cout << "2. Hapus item" << endl;
		cout << "3. Tambah item" << endl;
		cout << "Masukkan pilihan Anda : ";
		cin  >> pilih;

		switch(pilih)
		{
		    case 1:
		    {
		       if(inv.empty())
               {
                   cout <<"INVENTORY MASIH KOSONG!\n"<<endl;
                   system("pause");
                   system("cls");
               }
               else
               {
                   for(iter1=inv.begin();iter1!=inv.end();iter1++)
                   {
                       for(iter2=iter1->begin(); iter2!=iter1->end();iter2++)
                       {
                           cout << *iter2 <<" ";
                       }
                       cout<<endl;
                   }
               }
               break;
		    }
		    case 2:
                {
                    if(jml<=0)
                    {
                        cout << "anda belum punya item !\n\n";
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        cout << "Hapus Item Ke : ";
                        cin >>hapus;
                        if(hapus>jml)
                        {
                            cout << "Item Yang Akan Dihapus Tidak Ada !\n\n";
                        }
                        else
                        {
                            inv.erase(inv.begin()+ (hapus-1));
                            jml--;
                            cout << "Jumlah Inventory Sekarang : "<<jml<<endl;
                        }
                    }
                    break;
                }
            case 3:
                {
                    if(jml>=batas)
                    {
                        cout <<" Jumlah Inventory Penuh";
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        srand(time(NULL));
                        terpilih= (rand()%mitem);
                        cout << "Anda Mendapat : "<<item[terpilih][0]<<" . Stat : "<<item[terpilih][1];
                        inv.push_back(vector<string>({item[terpilih][0]}));
                        inv[jml].push_back({item[terpilih][1]});
                        jml++;
                        cout << "\nJumlah Inventory Sekarang : "<<jml;
                        cout<<"\n"<<endl;
                    }
                    break;
                }
		}

		cout << "Kembali Ke Menu?(y/t) ";
		cin >>a;
		system("cls");
    }

    return 0;
}
