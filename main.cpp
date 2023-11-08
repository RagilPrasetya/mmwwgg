#include <iostream>
//#include <cmath>

using namespace std;

struct order{
    char kode;
    string menu;
    int harga, jumlah, subtotal;

};

int i = 0;
char confirm = 'y';
string bonus;
int diskon, total, total_bayar = 0;

order ord[6];


int main()
{


    cout << "\t" << "\t" << "      Daftar menu" << "\t" << "\t" << endl;
    cout << "\t" << "\t" << "Gerobak fried chicken" << "\t" << "\t" << endl;
    cout << "=====================================================" << endl;
    cout << "|" << "\t" <<"kd" << "\t" << "|" << "\t" << "menu" << "\t" << "|" << "\t" << "harga" << "\t" << "    |" << endl;
    cout << "=====================================================" << endl;
    cout << "|" << "\t" <<"d" << "\t" << "|" << "\t" << "dada" << "\t" << "|" << "\t" << "Rp 5.000" << "    |" << endl;
    cout << "|" << "\t" <<"p" << "\t" << "|" << "\t" << "paha" << "\t" << "|" << "\t" << "Rp 4.000" << "    |" << endl;
    cout << "|" << "\t" <<"s" << "\t" << "|" << "\t" << "sayap" << "\t" << "|" << "\t" << "Rp 3.000" << "    |" << endl;
    cout << "|" << "\t" <<"t" << "\t" << "|" << "\t" << "teh" << "\t" << "|" << "\t" << "Rp 3.000" << "    |" << endl;
    cout << "|" << "\t" <<"j" << "\t" << "|" << "\t" << "jeruk" << "\t" << "|" << "\t" << "Rp 4.000" << "    |" << endl;
    cout << "|" << "\t" <<"c" << "\t" << "|" << "\t" << "cirup" << "\t" << "|" << "\t" << "Rp 5.000" << "    |" << endl;
    cout << "=====================================================" << endl;

    while (confirm != 'n'){
        cout << "silahkan pilih menu menggunakan kode : " << endl;
        cin >> ord[i].kode;
            switch(ord[i].kode){
            case 'd':
                ord[i].menu = "dada";
                ord[i].harga = 5000;
                cout << "pesanan ke -" << i+1 << endl;
                cout << "nama menu : " << ord[i].menu << endl;
                cout << "harga : " << ord[i].harga << endl;
                cout << "jumlah order : " << endl;
                cin >> ord[i].jumlah;
                ord[i].subtotal = ord[i].harga*ord[i].jumlah;
                total_bayar += ord[i].subtotal;
            break;
            case 'p':
                ord[i].menu = "paha";
                ord[i].harga = 4000;
                cout << "pesanan ke -" << i+1 << endl;
                cout << "nama menu : " << ord[i].menu << endl;
                cout << "harga : " << ord[i].harga << endl;
                cout << "jumlah order : " << endl;
                cin >> ord[i].jumlah;
                ord[i].subtotal = ord[i].harga*ord[i].jumlah;
                total_bayar += ord[i].subtotal;
            break;
            case 's':
                ord[i].menu = "sayap";
                ord[i].harga = 3000;
                cout << "pesanan ke-" << i+1 << endl;
                cout << "nama menu : " << ord[i].menu << endl;
                cout << "harga : " << ord[i].harga << endl;
                cout << "jumlah order : " << endl;
                cin >> ord[i].jumlah;
                ord[i].subtotal = ord[i].harga*ord[i].jumlah;
                total_bayar += ord[i].subtotal;
            break;
            case 't':
                ord[i].menu = "teh";
                ord[i].harga = 3000;
                cout << "pesanan ke-" << i+1 << endl;
                cout << "nama menu : " << ord[i].menu << endl;
                cout << "harga : " << ord[i].harga << endl;
                cout << "jumlah order : " << endl;
                cin >> ord[i].jumlah;
                ord[i].subtotal = ord[i].harga*ord[i].jumlah;
                total_bayar += ord[i].subtotal;
            break;
            case 'j':
                ord[i].menu = "jeruk";
                ord[i].harga = 4000;
                cout << "pesanan ke-" << i+1 << endl;
                cout << "nama menu : " << ord[i].menu << endl;
                cout << "harga : " << ord[i].harga << endl;
                cout << "jumlah order : " << endl;
                cin >> ord[i].jumlah;
                ord[i].subtotal = ord[i].harga*ord[i].jumlah;
                total_bayar += ord[i].subtotal;
            break;
            case 'c':
                ord[i].menu = "cirup";
                ord[i].harga = 5000;
                cout << "pesanan ke-" << i+1 << endl;
                cout << "nama menu : " << ord[i].menu << endl;
                cout << "harga : " << ord[i].harga << endl;
                cout << "jumlah order : " << endl;
                cin >> ord[i].jumlah;
                ord[i].subtotal = ord[i].harga*ord[i].jumlah;
                total_bayar += ord[i].subtotal;
            break;
            default:
            cout << "menu tidak ditemukan silahkan order lagi" << endl;
            }
        cout << "apakah anda ingin memesan lagi? (y/n) : " << endl;
        cin >> confirm;
        i++;
    };

//    cout << endl;
    cout << "\t" << "\t" << "    Invoice Order" << "\t" << "\t" << endl;
    cout << "\t" << "\t" << "Gerobak fried chicken" << "\t" << "\t" << endl;
    cout << "=====================================================" << endl;
    cout << "No. " << "\t" <<"menu" << "\t" << "harga" << "\t" << "jumlah" << "\t" << "subtotal" << endl;
    cout << "=====================================================" << endl;

    total = 0;

    for (int a = 0; a < i; a++){
        cout << a+1 << "\t" << ord[i].menu << "\t" << ord[i].harga << "\t" << ord[i].jumlah << "\t" << ord[i].subtotal << endl;
    total += ord[a].subtotal;
    if(total < 50000){
        diskon = 0;
        bonus = "-";

    }else if(total <= 100000){
        diskon = total*5/100;
        bonus = "cangkir";
    }else if(total <= 200000){
        diskon = total*10/100;
        bonus = "kaos";
    }else if(total <= 500000){
        diskon = total*15/100;
        bonus = "payung";
    }else{
        diskon = total *20/100;
        bonus = "tas pinggang";
    }

    };

    cout << "===================================================== total \t" << "Rp. " << total_bayar << endl;
    cout << "==================================================== diskon \t" << "Rp. " << diskon << endl;
    cout << "=====================================================   PPN \t" << "Rp. " << total_bayar*10/100 << endl;
    total = total_bayar + total_bayar*10/100;
    cout << "=============================================== Grand total \t" << "Rp. " << total - diskon << endl;
    cout << "===================================================== bonus \t" << bonus << endl;

    return 0;
}

//tipedata
//int - stores integers (whole numbers), without decimals, such as 123 or -123
//double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//string - stores text, such as "Hello World". String values are surrounded by double quotes
//bool - stores values with two states: true or false

//int myNum = 5;               // Integer (whole number without decimals)
//double myFloatNum = 5.99;    // Floating point number (with decimals)
//char myLetter = 'D';         // Character
//string myText = "Hello";     // String (text) (string bisa menggunakan angka)
//bool myBoolean = true;       // Boolean (true or false)

// const = "constant", which means unchangeable and read-only (example const int minutesPerHour = 60;)


// operator
//+	Addition	Adds together two values	x + y
//-	Subtraction	Subtracts one value from another	x - y
//*	Multiplication	Multiplies two values	x * y
// (/)	Division	Divides one value by another	x / y
//%	Modulus	(porogapit) Returns the division remainder	x % y
//++	Increment	Increases the value of a variable by 1	++x
//--	Decrement	Decreases the value of a variable by 1	--x


// operasi logika
// && = true ketika semua statement benar
// || = ture ketika salah satu statement benar
// ! = (kebalikan)
