// YOGA ADITYA MAHARDIKA
//2100018196
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x1,x2,y1,y2,bx,by;
	float hasil;
	
	cout<<"-----------------------------------------"<<endl;
	cout<<"| masukkan titik ke 1 : ";cin>>x1;
	cout<<"| masukkan titik ke 2 : ";cin>>y1;
	cout<<"| masukkan titik ke 3 : ";cin>>x2;
	cout<<"| masukkan titik ke 4 : ";cin>>y2;
	cout<<"-----------------------------------------"<<endl;
	
	bx = (x2-x1)*2;
	by = (y2-y1)*2;
	hasil = sqrt(bx+by);
	
	cout<<"|jarak antara ke dua titik adalah : "<<hasil<<endl;
	cout<<"----------------------------------------"<<endl;
	return 0;	
}
