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
	cout <<"_______________________________\n\n";
	
	cout << "Lipstik Makeover" ;
	cout <<(makeover.teksture);
	makeover.warna("Retro Pink, Sassy Pink, Glorius Gold, Red Rhapsody" );
	makeover.harga("Rp. 115.000");
	cout <<"_______________________________\n\n";
	
	cout << "Lipstik Purbasari" ;
	cout <<(purbasari.teksture);
	purbasari.warna("Diamond, Mirah, Pinus, Jade");
	purbasari.harga("Rp. 53.000");
	cout <<"_______________________________\n\n";
	
	cout << "Lipstik Nabi" ;
	cout <<(nabi.teksture);
	nabi.warna("Honey, Natural, Mocha, Champagne" );
	nabi.harga("Rp.35.000");
	cout <<"_______________________________\n\n";
	}
	
void lipstik::warna(string warna){
	cout <<"\nWarna yang Tersedia "<<warna<<endl;
}
void lipstik::harga(string harga){
	cout <<"Harga: "<<harga<<endl;
}

