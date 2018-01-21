#include <iostream>
#include <string>
using namespace std;

class lipstik {
	public:
		string teksture;
		void warna(string warna);
		void harga(string harga);
};

int main (){
	
	lipstik wardah,makeover,purbasari,nabi;
	
	wardah.teksture ="Matte";
	makeover.teksture ="cair";
	purbasari.teksture ="lembut";
	nabi.teksture ="cair";
	
	cout << "Lipstik Wardah" ;
	cout <<(wardah.teksture);
	wardah.warna("Red-Dicted, Oh So Nude, Pink Me, See You Latte" );
	wardah.harga("Rp. 62.000");
	
	}
