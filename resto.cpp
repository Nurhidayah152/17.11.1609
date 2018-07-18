#include <iostream>
//#include <window.h>

using namespace std;

class Resto{
protected:
	int jumlah;
public:
	void setJumlah(int _jumlah){
		jumlah = _jumlah;
	}
};

class Makanan: public Resto{
private:
	int cabe;
public:
	int a(int jumlah, int harga, int tambah){
		return (jumlah * harga) + (cabe * 200) + tambah;
	}
	void setCabe(int _cabe){
		cabe = _cabe;
	}
};

class Minuman: public Resto{
private:
	int gelas;
public:
	int a(int jumlah, int harga){
		return (jumlah * harga) + ( gelas * 500);
	}
	void setGelas(int _gelas){
		gelas = _gelas;
	}
};

class Jus: public Resto{
private:
	int cup;
public:
	int a(int jumlah, int harga){
		return (jumlah * harga) + ( cup * 500);
	}
	void setCup(int _cup){
		cup = _cup;
	}
};

namespace G{
	void garis(){
		cout<<"=================================================================\n";
	}
}
namespace J{
	void judul(){
	G::garis();
	cout<<"\t\t\t TUMAH MAKAN  \t\t\n";
	cout<<"\t\t      PONDOK KOPI KEDEWAN  \t\t\n";
	cout<<"\t\t\t JAWA TENGAH \t\t\n";
	G::garis();
	}
}
	

void pelanggan(){
	string nama;
	cout<<"\nMasukkan nama anda : ";
	cin>>nama;
}

void makan(){
	Makanan m;
	int tambah;
	int harga;

	J::judul();
	cout<<"\nMenu : \n\n";
	cout<<"1. Indomie Rebus \t\t4K\n";
	cout<<"2. Indomie Telur \t\t7K\n";
	cout<<"3. Ayam Geprek + Nasi \t\t12K\n";
	cout<<"4. Pepes Ikan \t\t\t15K\n";
	cout<<"5. Nila Bakar + Nasi \t\t15K\n";

	G::garis();
	int _cabe, _jumlah, _harga, _tambah;
	int pilihan;
	cout<<"\nPilihan menu : ";
	cin>>pilihan;

	if (pilihan == 1){
		_harga = 4000;
	}else if (pilihan == 2){
		_harga = 7000;
	}else if (pilihan == 3){
		_harga = 12000;
	}else if (pilihan == 4){
		_harga = 15000;
	}else if (pilihan == 5){
		_harga = 15000;
	}else{
		cout<<"Tidak ada pilihan";
	}

	cout<<"Jumlah \t: "; cin>>_jumlah;
	cout<<"Banyak cabe : "; cin>>_cabe;
	m.setCabe(_cabe);
	cout<<"[0] Tidak \n[1] Perkedel \n[2] Telur Asin \n";
	if (_tambah == 1){
		tambah = 1000;
	}else if (_tambah == 2){
		tambah = 2000;
	}else if(_tambah == 0){
		tambah = 0;
	}
	cout<<"Tambahan \t: "; cin>>_tambah;
	cout<<"Total harga : "<<m.a(_jumlah, _harga, _tambah)<<endl;
	G::garis();
}


void minum(){
	Minuman n;
	int harga;
	J::judul();
	cout<<"\nMenu : \n\n";
	cout<<"1. Kopi Susu \t\t4K\n";
	cout<<"2. Sop Buah \t\t7K\n";
	cout<<"3. Teh \t\t\t3K\n";
	cout<<"4. Thai Tea\t\t6K\n";
	cout<<"5. Jeruk \t\t4K\n";

	G::garis();
	int _gelas, _jumlah, _harga;
	int pilihan;
	cout<<"\nPilihan menu : ";
	cin>>pilihan;

	if (pilihan == 1){
		_harga = 4000;
	}else if (pilihan == 2){
		_harga = 7000;
	}else if (pilihan == 3){
		_harga = 3000;
	}else if (pilihan == 4){
		_harga = 6000;
	}else if (pilihan == 5){
		_harga = 4000;
	}else{
		cout<<"Tidak ada pilihan";
	}

	cout<<"Jumlah \t: "; cin>>_jumlah;
	cout<<"[1] Kecil \n[2] Sedang \n[3] Besar\n";
	cout<<"Ukuran gelas : "; cin>>_gelas;
	n.setGelas(_gelas);
	
	cout<<"Total harga : "<<n.a(_jumlah, _harga)<<endl;
	G::garis();
}

void jus(){
	Jus j;
	int harga;
	J::judul();
	cout<<"\nMenu : \n\n";
	cout<<"1. Alpukat \t\t9K\n";
	cout<<"2. Jambu \t\t6K\n";
	cout<<"3. Melon \t\t7K\n";
	cout<<"4. Mangga\t\t6K\n";
	cout<<"5. Apel \t\t8K\n";
	int _cup, _jumlah, _harga;
	int pilihan;
	cout<<"\nPilihan menu : ";
	cin>>pilihan;

	if (pilihan == 1){
		_harga = 9000;
	}else if (pilihan == 2){
		_harga = 6000;
	}else if (pilihan == 3){
		_harga = 7000;
	}else if (pilihan == 4){
		_harga = 6000;
	}else if (pilihan == 5){
		_harga = 8000;
	}else{
		cout<<"Tidak ada pilihan";
	}

	cout<<"Jumlah : "; cin>>_jumlah;
	cout<<"[1] Kecil \n[2] Sedang \n[3] Besar\n";
	cout<<"Ukuran Cup : "; cin>>_cup;
	j.setCup(_cup);
	
	cout<<"Total harga : "<<j.a(_jumlah, _harga)<<endl;
	G::garis();
}

int main(){
	int pilih;
	pelanggan();

	do{
		
		J::judul();
		cout<<"1. MAKANAN"<<endl;
		cout<<"2. MINUMAN"<<endl;
		cout<<"3. ANEKA JUS"<<endl;
		cout<<"4. KELUAR"<<endl;
		G::garis();

		cout<<"\nMasukan pilihan anda : ";
		cin>>pilih;

		switch(pilih){
			case 1:
				makan();
			break;
			case 2:
				minum();
			break;
			case 3:
				jus();
			break;
			case 4:
				cout<<"\nTerima Kasih......";
			break;
		}
	}
	while(pilih!=4);

	
}
