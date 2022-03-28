#include "_Hitung.h"
#include <iostream>
using namespace std;

Hitung::Hitung(){
	cout<<"program menghitung 3 integer\n";
	cout<<"selamat berkarya\n";
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
	out<<" jumlah 3 integer diatas : "<<keluaran.jumlah<<endl;
	return out;
}
