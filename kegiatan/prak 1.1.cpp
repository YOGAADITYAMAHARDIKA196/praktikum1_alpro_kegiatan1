#include <iostream>
#include <conio.h>
using namespace std;

class Hitung{
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
public:
	Hitung();
	void Hitung_jumlahnya(){jumlah= (a+b+c);}
private:
	int a,b,c;
	int jumlah;
};

Hitung::Hitung(){
	cout<<" program menghitung jumlah integer \n";
	cout<<" selamat berakaya\n";
}
istream& operator>>(istream& in, Hitung& masukkan){
	cout<<" masukkan nilai A : ";
	in>>masukkan.a;
	cout<<" masukkan nilai B : ";
	in>>masukkan.b;
	cout<<" masukkan nilai C : ";
	in>>masukkan.c;
	
	return in;
}
ostream& operator<<(ostream& out, const Hitung& keluaran){
	out<<"-----------------------------------------------------"<<endl;
	out<<" nilai A : "<<keluaran.a<<endl;
	out<<" nilai B : "<<keluaran.b<<endl;
	out<<" nilai C : "<<keluaran.c<<endl;
	out<<"-----------------------------------------------------"<<endl;
	out<<" jumlah 3 integer dia atas : "<<keluaran.jumlah<<endl;
	return out;
}
main(){
	Hitung x;
	cin>>x;
	x.Hitung_jumlahnya();
	cout<<x;
	getch;
	return 0;
}
