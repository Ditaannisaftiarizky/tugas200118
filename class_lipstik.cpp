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
	
	cout << "Lipstik Makeover" ;
	cout <<(wardah.teksture);
	makeover.warna("Retro Pink, Sassy Pink, Glorius Gold, Red Rhapsody" );
	makeover.harga("Rp. 115.000");
	
	cout << "Lipstik Purbasari" ;
	cout <<(wardah.teksture);
	purbasari.warna("Diamond, Mirah, Pinus, Jade");
	purbasari.harga("Rp. 53.000");
	
	cout << "Lipstik Nabi" ;
	cout <<(wardah.teksture);
	nabi.warna("Honey, Natural, Mocha, Champagne" );
	nabi.harga("Rp.35.000");
	
	
	
	}
