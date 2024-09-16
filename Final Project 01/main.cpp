#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <windows.h>

using namespace std;
//variable void makan
int porsi_makan, jumlah_makan , harga_makan;
string makan;
//variable void minum
int porsi_minum, jumlah_minum, harga_minum;
string minum;
//variable void rokok 
int porsi_rokok, jumlah_rokok, harga_rokok;
string rokok;
//variable login
string username, password;
int pi;

struct menu
{
    //login
    string username, password;
    //
    string input[7], makan;
   
};
menu m;

void output()
{
    m.input[1] = "NAMA PELANGGAN   : ";
    m.input[2] = "NO MEJA          : ";
    m.input[3] = "NAMA MENU        : ";
    m.input[4] = "JUMLAH PORSI     : ";
    m.input[5] = "HARGA/PORSI      : Rp.";
    m.input[6] = "TOTAL HARGA      : Rp.";
    m.input[7] = "TOTAL PESANAN    : Rp.";
   
}

void loading()
{
    cout << '\n';
    cout << "\t\t\t  ";
    cout << "\t\ Please wait...\n";
    cout << "\t\t\t  ";
    for (int i = 0; i < 26; ++i)
    {
        cout << char(219);
        Sleep(200);
    }

}

void inputfile()
{
  
    fstream data;
    data.open("A7.txt", ios::app);

    data << m.input[1] << username << endl;
    data << m.input[2] << password << endl;
    //input database makan
    if (porsi_makan >= 1)
    {
        cout << endl;
        data << m.input[3] << makan << endl;
        data << m.input[4] << porsi_makan << endl;
        data << m.input[5] << harga_makan << endl;
        data << m.input[6] << jumlah_makan << endl;
        cout << endl;
    }
    // input databse minum
    if (porsi_minum >= 1)
    {
        cout << endl;
        data << m.input[3] << minum << endl;
        data << m.input[4] << porsi_minum << endl;
        data << m.input[5] << harga_minum << endl;
        data << m.input[6] << jumlah_minum << endl;
        cout << endl;
    }
    //input database rokok
    if (porsi_rokok >= 1)
    {
        cout << endl;
        data << m.input[3] << rokok << endl;
        data << m.input[4] << porsi_rokok << endl;
        data << m.input[5] << harga_rokok << endl;
        data << m.input[6] << jumlah_rokok << endl;
        cout << endl;
    }

    cout << endl;
    data.close();

}

void login()
{
    


    cout << "==============================================================================" << endl;
    cout << "|                                ANGKRINGAN                                  |" << endl;
    cout << "|                                SEDERHANA                                   |" << endl;
    cout << "==============================================================================" << endl;
   
    cout << "Nama Pelanggan \t: ";cin >> username;
    cout << "=================" << endl;
    cout << "No. Meja \t: ";cin >> password ;
    cout << "=================" << endl;
  
}

void menue_makan()
{
    
    cout << "|____________________________________________________________________________|" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                            ANGKRINGAN SEDERHANA                            |" << endl;
    cout << "|             Jl. Ring Roud Utara Condongcatur, Depok, Sleman.               |" << endl;
    cout << "|                                081xxxxxxxxx                                |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|____________________________________________________________________________|" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                              Daftar Menu                                   |" << endl;
    cout << "|____________________________________________________________________________|" << endl;
    cout << "|                                MAKANAN                                     |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                 1. Sate-Satean             Rp.3.000 /Tusuk                 |" << endl;
    cout << "|                 2. Nasi Kucing             Rp.5.000 /Porsi                 | " << endl;
    cout << "|                 3. Roti                    Rp.2.000 /Pcs                   |" << endl;
    cout << "|                 4. Gorengan                Rp.1.000 /Biji                  |" << endl;
    cout << "==============================================================================" << endl;

}

void menue_minum()
{
    cout << " ____________________________________________________________________________|" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                            ANGKRINGAN SEDERHANA                            |" << endl;
    cout << "|             Jl. Ring Roud Utara Condongcatur, Depok, Sleman.               |" << endl;
    cout << "|                                081xxxxxxxxx                                |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|____________________________________________________________________________|" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                              Daftar Menu                                   |" << endl;
    cout << "|____________________________________________________________________________|" << endl;
    cout << "|                                MINUMAN                                     |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                 1. Kopi                    Rp.4.000                        |" << endl;
    cout << "|                 2. Kopi susu               Rp.4.000                        | " << endl;
    cout << "|                 3. Susu                    Rp.4.000                        |" << endl;
    cout << "|                 4. Es Teh                  Rp.3.000                        |" << endl;
    cout << "|                 5. Teh Anget               Rp.3.000                        |" << endl;
    cout << "|                 6. ES Jeruk                Rp.4.000                        |" << endl;
    cout << "|                 7. Jeruk Anget             Rp.4.000                        |" << endl;

    cout << "==============================================================================" << endl;

}

void menue_rokok()
{
    cout << " ____________________________________________________________________________|" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                            ANGKRINGAN SEDERHANA                            |" << endl;
    cout << "|             Jl. Ring Roud Utara Condongcatur, Depok, Sleman.               |" << endl;
    cout << "|                                081xxxxxxxxx                                |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|____________________________________________________________________________|" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                              Daftar Menu                                   |" << endl;
    cout << "|____________________________________________________________________________|" << endl;
    cout << "|                                 ROKOK                                      |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|                 1. Camel                   Rp.4.000                        |" << endl;
    cout << "|                 2. Surya                   Rp.4.000                        | " << endl;
    cout << "|                 3. LA                      Rp.4.000                        |" << endl;
    cout << "|                 4. Marlboro                Rp.3.000                        |" << endl;
    cout << "|                 5. Djarum Super            Rp.3.000                        |" << endl;
    cout << "|                 6. Gudang Garam Filter     Rp.4.000                        |" << endl;

    cout << "==============================================================================" << endl;

}

void tampilan()
{
    cout << "==============================================================================" << endl;
    cout << "[�]    MENU        |      PORSI    |     HARGA/PORSI     |   TOTAL  HARGA    |" << endl;

}

void makanan()
{
    int pilih_makan;


    cout << "|                              ANGKRINGAN                                    |" << endl;
    cout << "|                              SEDERHANA                                     |" << endl;
    cout << "==============================================================================" << endl;
    cout << "MASUKAN PILIHAN MENU ANDA        : ";
    cin >> pilih_makan;
    cout << "==============================================================================" << endl;

    switch (pilih_makan)
    {
        case 1:
        {
            cout << "[�] BERAPA TUSUK                 : ";
            cin >> porsi_makan;
            harga_makan = 3000;
            makan = "Sate-Satean";
            jumlah_makan = porsi_makan * harga_makan;
            system("cls");
            menue_makan();
            tampilan();
            cout << "\n";
            cout << "[�]  " << makan << "             " << porsi_makan << "            Rp. " << harga_makan << "            Rp. " << jumlah_makan;
            cout << "\n\n";

            break;
        }

        case 2:
        {
            cout << "[�] BERAPA PORSI                 : ";
            cin >> porsi_makan;
            harga_makan = 5000;
            makan = " Nasi Kucing  ";
            jumlah_makan = porsi_makan * harga_makan;
            system("cls");
            menue_makan();
            tampilan();
            cout << "\n";
            cout << "[�]  " << makan << "         " << porsi_makan << "            Rp. " << harga_makan << "            Rp. " << jumlah_makan;
            cout << "\n\n";

            break;
        }

        case 3:
        {
            cout << "[�] BERAPA PCS                   : ";
            cin >> porsi_makan;
            harga_makan = 2000;
            makan = "Roti";
            jumlah_makan = porsi_makan * harga_makan;
            system("cls");
            menue_makan();
            tampilan();
            cout << "\n";
            cout << "[�]  " << makan << "                    " << porsi_makan << "             Rp. " << harga_makan << "            Rp. " << jumlah_makan;
            cout << "\n\n";

            break;
        }

        case 4:
        {
            cout << "[�] BERAPA BIJI                  : ";
            cin >> porsi_makan;
            harga_makan = 1000;
            makan = "Gorengan";
            jumlah_makan = porsi_makan * harga_makan;
            system("cls");
            menue_makan();
            tampilan();
            cout << "\n";
            cout << "[�]  " << makan << "                " << porsi_makan << "             Rp. " << harga_makan << "             Rp. " << jumlah_makan;
            cout << "\n\n";

            break;

            default:
        
            system("cls");
            cout << "INPUT SALAH !!" << endl;
            system("pause");
            system("cls");
            menue_makan();
            makanan();
            break;
        
        }
  
    }

}

void minuman()
{
    int pilih_minum;


    cout << "|                              ANGKRINGAN                                    |" << endl;
    cout << "|                              SEDERHANA                                     |" << endl;
    cout << "==============================================================================" << endl;
    cout << "MASUKAN PILIHAN MENU ANDA        : ";
    cin >> pilih_minum;
    cout << "==============================================================================" << endl;

    switch (pilih_minum)
    {
        case 1:
        {
            cout << "[�] BERAPA GELAS                 : ";
            cin >> porsi_minum;
            harga_minum = 3000;
            minum = " Kopi";
            jumlah_minum = porsi_minum * harga_minum;
            system("cls");
            menue_minum();
            tampilan();
            cout << "\n";
            cout << "[�] " << minum << "                   " << porsi_minum << "              Rp. " << harga_minum << "            Rp. " << jumlah_minum;
            cout << "\n\n";

            break;
        }
        case 2:
        {
            cout << "[�] BERAPA GELAS                 : ";
            cin >> porsi_minum;
            harga_minum = 3000;
            minum = "Kopi Susu";
            jumlah_minum = porsi_minum * harga_minum;
            system("cls");
            menue_minum();
            tampilan();
            cout << "\n";
            cout << "[�] " << minum << "              " << porsi_minum << "              Rp. " << harga_minum << "            Rp. " << jumlah_minum;
            cout << "\n\n";

            break;
        }
        case 3:
        {
            cout << "[�] BERAPA GELAS                 : ";
            cin >> porsi_minum;
            harga_minum = 3000;
            minum = "Susu";
            jumlah_minum = porsi_minum * harga_minum;
            system("cls");
            menue_minum();
            tampilan();
            cout << "\n";
            cout << "[�] " << minum << "                  " << porsi_minum << "              Rp. " << harga_minum << "            Rp. " << jumlah_minum;
            cout << "\n\n";

            break;
        }

        case 4:
        {
            cout << "[�] BERAPA GELAS                 : ";
            cin >> porsi_minum;
            harga_minum = 3000;
            minum = "Teh Anget";
            jumlah_minum = porsi_minum * harga_minum;
            system("cls");
            menue_minum();
            tampilan();
            cout << "\n";
            cout << "[�] " << minum << "              " << porsi_minum << "              Rp. " << harga_minum << "            Rp. " << jumlah_minum;
            cout << "\n\n";

            break;
        }

        case 5:
        {
            cout << "[�] BERAPA GELAS                 : ";
            cin >> porsi_minum;
            harga_minum = 3000;
            minum = "ES Teh";
            jumlah_minum = porsi_minum * harga_minum;
            system("cls");
            menue_minum();
            tampilan();
            cout << "\n";
            cout << "[�] " << minum << "                  " << porsi_minum << "              Rp. " << harga_minum << "            Rp. " << jumlah_minum;
            cout << "\n\n";

            break;
        }

        case 6:
        {
            cout << "[�] BERAPA GELAS                 : ";
            cin >> porsi_minum;
            harga_minum = 3000;
            minum = "Es Jeruk";
            jumlah_minum = porsi_minum * harga_minum;
            system("cls");
            menue_minum();
            tampilan();
            cout << "\n";
            cout << "[�] " << minum << "                " << porsi_minum << "              Rp. " << harga_minum << "            Rp. " << jumlah_minum;
            cout << "\n\n";

            break;
        }

        case 7:
        {
            cout << "[�] BERAPA GELAS                 : ";
            cin >> porsi_minum;
            harga_minum = 3000;
            minum = "Jeruk Anget";
            jumlah_minum = porsi_minum * harga_minum;
            system("cls");
            menue_minum();
            tampilan();
            cout << "\n";
            cout << "[�] " << minum << "             " << porsi_minum << "              Rp. " << harga_minum << "            Rp. " << jumlah_minum;
            cout << "\n\n";

            break;
        }

    }

}

void rokokk()
{

    int pilih_rokok;

    cout << "|                              ANGKRINGAN                                    |" << endl;
    cout << "|                              SEDERHANA                                     |" << endl;
    cout << "==============================================================================" << endl;
    cout << "MASUKAN PILIHAN MENU ANDA        : ";
    cin >> pilih_rokok;
    cout << "==============================================================================" << endl;

    switch (pilih_rokok)
    {
        case 1:
        {
            cout << "[�] BERAPA BUNGKUS               : ";
            cin >> porsi_rokok;
            harga_rokok = 3000;
            rokok = " Camel";
            jumlah_rokok = porsi_rokok * harga_rokok;
            system("cls");
            menue_rokok();
            tampilan();
            cout << "\n";
            cout << "[�] " << rokok << "                  " << porsi_rokok << "            Rp. " << harga_rokok << "              Rp. " << jumlah_rokok;
            cout << "\n\n";
            break;
        }

        case 2:
        {
            cout << "[�] BERAPA BUNGKUS               : ";
            cin >> porsi_rokok;
            harga_rokok = 3000;
            rokok = "Surya";
            jumlah_rokok = porsi_rokok * harga_rokok;
            system("cls");
            menue_rokok();
            tampilan();
            cout << "\n";
            cout << "[�] " << rokok << "                  " << porsi_rokok << "            Rp. " << harga_rokok << "              Rp. " << jumlah_rokok;
            cout << "\n\n";
            break;
        }

        case 3:
        {
            cout << "[�] BERAPA BUNGKUS               : ";
            cin >> porsi_rokok;
            harga_rokok = 3000;
            rokok = " L.A";
            jumlah_rokok = porsi_rokok * harga_rokok;
            system("cls");
            menue_rokok();
            tampilan();
            cout << "\n";
            cout << "[�] " << rokok << "                    " << porsi_rokok << "            Rp. " << harga_rokok << "              Rp. " << jumlah_rokok;
            cout << "\n\n";
            break;
        }

        case 4:
        {
            cout << "[�] BERAPA BUNGKUS               : ";
            cin >> porsi_rokok;
            harga_rokok = 3000;
            rokok = " Marlboro";
            jumlah_rokok = porsi_rokok * harga_rokok;
            system("cls");
            menue_rokok();
            tampilan();
            cout << "\n";
            cout << "[�] " << rokok << "               " << porsi_rokok << "             Rp. " << harga_rokok << "            Rp. " << jumlah_rokok;
            cout << "\n\n";
            break;
        }

        case 5:
        {
            cout << "[�] BERAPA BUNGKUS               : ";
            cin >> porsi_rokok;
            harga_rokok = 3000;
            rokok = " Djarum Super";
            jumlah_rokok = porsi_rokok * harga_rokok;
            system("cls");
            menue_rokok();
            tampilan();
            cout << "\n";
            cout << "[�] " << rokok << "           " << porsi_rokok << "            Rp. " << harga_rokok << "              Rp. " << jumlah_rokok;
            cout << "\n\n";
            break;
        }

        case 6:
        {
            cout << "[�] BERAPA BUNGKUS               : ";
            cin >> porsi_rokok;
            harga_rokok = 3000;
            rokok = "GarFit";
            jumlah_rokok = porsi_rokok * harga_rokok;
            system("cls");
            menue_rokok();
            tampilan();
            cout << "\n";
            cout << "[�] " << rokok << "                  " << porsi_rokok << "            Rp. " << harga_rokok << "              Rp. " << jumlah_rokok;
            cout << "\n\n";
            break;

        }
      
    }

}
void pembayaran()
{
    int total_harga, kembalian, saldo, kekurangan;
    cout << "==============================================================================" << endl;
    cout << '\n';
    cout << "\t\t\t\tATAS NAMA : "<< username << endl;
    cout << "\t\t\t\tNO MEJA   : "<< password << endl;
    cout << endl;
    tampilan();
    cout << "==============================================================================" << endl;
    cout << endl;
    
    if (porsi_rokok >=1)
    {
        cout << "[�] " << rokok << "                 " << porsi_rokok << "             Rp. " << harga_rokok << "            Rp. " << jumlah_rokok << endl;
    }
    if (porsi_minum >=1)
    {
        cout << "[�] " << minum << "                  " << porsi_minum << "             Rp. " << harga_minum << "            Rp. " << jumlah_minum << endl;
    }
    if (porsi_makan >= 1)
    {
        cout << "[�] " << makan << "            " << porsi_makan << "             Rp. " << harga_makan << "            Rp. " << jumlah_makan << endl;
    }
    cout << endl;
    total_harga = jumlah_rokok + jumlah_minum + jumlah_makan;
    cout << "==============================================================================" << endl;
    cout << "                                              TOTAL PEMBAYARAN : RP. " << total_harga << endl;
    cout << "                                              MASUKAN SALDO    : RP. "; cin >> saldo;
    if (total_harga < saldo)
    {
        kembalian = saldo - total_harga;
        cout << "                                              KEMBALIAN        : RP. " << kembalian << endl;
    }
    else if (total_harga > saldo)
    {
        kekurangan = total_harga - saldo;
        cout << "                                              KURANGAN          : RP. " << kekurangan << endl;
    }
}
int main()
{
    int pilihan;
    login();
    loading();
    system("cls");

    loop:
   
    

    cout << "                        [SILAHKAN PILIH PILIHAN BERIKUT]" << endl;

    cout << "==============================================================================" << endl;
    cout << "|____________________________________________________________________________|" << endl;
    cout << "|                                                                            |" << endl;
    cout << "| [1] MENU MAKANAN                                                           |" << endl;
    cout << "| [2] MENU MINUMAN                                                           |" << endl;
    cout << "| [3] MENU ROKOK                                                             |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "==============================================================================" << endl;
    cout << '\n';
    cout << " PILIH   : ";                                                              
    cin >> pilihan;
   
    switch (pilihan)
    {
        case 1:
        {
            system("cls");
            menue_makan();
            makanan();
            cout << "[0] MENU BERANDA" << endl;
            cout << "[9] BAYAR" << endl;
            cout << endl;
            cout << "PILIHAN     : ";

            cin >> pi;

            if (pi == 0)
            {
               system("cls");

               goto loop;
            }
            system("cls");
            pembayaran();
            break;
        }

        case 2:
        {
           system("cls");
           menue_minum();
           minuman();
           cout << "[0] MENU BERANDA" << endl;
           cout << "[9] BAYAR" << endl;
           cout << endl;
           cout << "PILIHAN     : ";
           cin >> pi;

           if (pi == 0)
           {
               system("cls");

               goto loop;
           }
           system("cls");
           pembayaran();
           break;
        }

        case 3:
        {
            system("cls");
            menue_rokok();
            rokokk();
            cout << "[0] MENU BERANDA" << endl;
            cout << "[9] BAYAR" << endl;
            cout << endl;
            cout << "PILIHAN     : ";
            cin >> pi;

            if (pi == 0)
            {
                system("cls");

                goto loop;
            }
            system("cls");
            pembayaran();
        }
        
    }
    output();
    inputfile();
}