#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

void tebak(){

	int z;
	int menang = 0;
	
	for(int i=0 ;i<10;i++){
	srand(time(NULL));
	int x=rand()% 20 +1;
	int y=rand()% 20 +1;
	
	cout << x << "+" << y  << "=";
	cin >> z;
	if(z==x+y){
		cout << "anda benar"<<endl;
		menang++;
		Sleep(500);
		system("cls");
	}else {
		cout << "anda salah";
		Sleep(500);
		system("cls");
	}
	}
	
	cout<<"Anda benar sebanyak : "<<menang<<" Kali";
}
	int main(){
		tebak();
	}

