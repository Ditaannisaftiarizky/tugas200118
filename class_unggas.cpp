#include <iostream>
#include <string>
using namespace std;

class unggas {
	public:
		void suara(string bunyi);
		int terbang(string sayap);
		string renang;
		void ukuranTelur(string ukuran);
		void jumlahTelur(int jumlah);
};

int main (){
	unggas ayamlaki,ayambini,itiklaki,itikbini,angsalaki,angsabini,puyuhlaki,puyuhbini,belibislaki,belibisbini;
	ayamlaki.renang	="kada bisa bakunyung ";
	ayambini.renang ="kada bisa bakunyung ";
	itiklaki.renang	="harat bakunyung ";
	itikbini.renang	="harat bakunyung ";
	angsalaki.renang="jago bakunyung ";
	angsabini.renang="jago bakunyung ";
	puyuhlaki.renang="kada bisa bakunyung ";
	puyuhbini.renang="kada bisa bakunyung ";
	belibislaki.renang="harat banar bakunyung ";
	belibisbini.renang="harat banar bakunyung ";
	
	cout <<"Ciri-ciri ayam laki: \n\n";
	cout <<(ayamlaki.renang);
	ayamlaki.suara("kukuruyuk");
	ayamlaki.terbang("kada kawa tinggi ");
	ayamlaki.ukuranTelur("laki kada bahintalu");
	ayamlaki.jumlahTelur(0);
	cout <<"_______________________________\n\n";
	
	
	cout <<"Ciri-ciri ayam bini: \n\n";
	cout <<(ayambini.renang);
	ayambini.suara("kutakkutak");
	ayambini.terbang("kada kawa tinggi ");
	ayambini.ukuranTelur("sadang");
	ayambini.jumlahTelur(15);
	cout <<"_______________________________\n\n";
	
	
	
}
