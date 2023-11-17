#include <iostream>

using namespace std;

int main()
{
	//Dekorasi variable
	int CP_Book, C_Hand, Dict, Market, Calc;
	float Book, Stat, Disc, fixBook, FixStat;
	
	// Menampilkan daftar harga
	cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
	cout<<"\n\t\t| C Programming Book : Rp 105.000,00 |"<<endl;
	cout<<"\n\t\t| C Handbook         : Rp 188.000,00 |"<<endl;
	cout<<"\n\t\t|  Dictionary        : Rp55.000,00   |"<<endl;
	cout<<"\n\t\t| WhiteBoard Market  : Rp 10.000,00  |"<<endl;
	cout<<"\n\t\t| Calculator         : Rp 35.000,00  |"<<endl;
    cout<<"\n\t\t======================================="<<endl;
    
    //Masukan jumlah barang yang di beli
    cout<<"Masukan jumlah C Programming Book yang dibeli	:"; cin>>CP_Book;
    cout<<"Masukan jumlah C  Handbook yang dibeli			:"; cin>>C_Hand;
    cout<<"Masukan jumlah C Dictionary yang dibeli			:"; cin>>Dict;
    cout<<"Masukan jumlah C WhiteBoard Market yang dibeli	:"; cin>>Market;
    cout<<"Masukan jumlah C  Calculator yang dibeli			:"; cin>>Calc;
    cout<<"\n"<<endl;
    
    //Menampilkan customer's bill
    cout<<"\t============================== Costomer's Bill ================================="<<endl;
    cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga	|"<<endl;
    cout<<"\t| ------  \t-------- \t\t------------ \t-----------	|"<<endl;
    cout<<"\t| 	"<<CP_Book<<"\t\tC Programming Boox \t105000 \t\t"<<CP_Book*105000<<"\t	|"<<endl;
    cout<<"\t| 	"<<C_Hand<<"\t\tC Handbook \t\t188000 \t\t"<<C_Hand*188000<<"\t	|"<<endl;
    cout<<"\t| 	"<<Dict<<"\t\tDictionary \t\t55000 \t\t"<<Dict*55000<<"\t	|"<<endl;
    cout<<"\t| 	"<<Market<<"\tWhiteboard Market \t10000 \t\t"<<Market*10000<<"\t	|"<<endl;
    cout<<"\t| 	"<<Calc<<"\t\tCalculator \t\t35000 \t\t"<<Calc*35000<<"\t	|"<<endl;
    cout<<"\t|------------------------------------------------------------------------------<<"<<endl;
    Book = CP_Book*105000+C_Hand*188000;
    Disc = 6.25/100*Stat;
    Stat = Dict*55000+Market*10000+Calc*35000;
    cout<<"\t|\t\t\tHarga Total Buku \t		:"<<Book<<"\t  |"<<endl;
    cout<<"\t|\t\t\tPotongan /harga \t\t	:"<<Disc<<"\t  |"<<endl;
    cout<<"\t|\t\t\tHarga Setelah Diskot \t	:"<<Stat-Disc<<"\t  |"<<endl;
    fixBook = Book-Disc;
    Disc = 3.00/100*Stat;
    cout<<"\t|\t\tHarga Total Stationary \t	:"<<Stat<<" \t     |"<<endl;
    cout<<"\t|\t\tPotongan Harga \t\t		:"<<Disc<<" \t     |"<<endl;
    cout<<"\t|\t\tHarga Setelah Diskon \t	:"<<Stat-Disc<<" \t     |"<<endl;
    FixStat = Stat-Disc;
    cout<<"\t|\t\t\t----------------------------------------------- |"<<endl;
    cout<<"\t|\t\t\tTotal Pembayaran \t		:"<<fixBook+FixStat<<"\t      |"<<endl;
    cout<<"\t================================================================================="<<endl;
}
