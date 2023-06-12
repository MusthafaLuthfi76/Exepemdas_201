#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;											//variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {									//constructor
		x = 0;
	}
	virtual void input() {}							//fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; }			//fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; }		//fungsi untuk menghitung keliling
	void setX(int a) {								//fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/ 
	void input() { 
		cout << "Masukkan jari jari : ";
		int r;
		cin >> r;
		setX(r);
	}

	float Luas(int r) { 
		return 3.14 * r * r;
	}

	float Keliling(int r) { 
		return 2 * 3.14 * r;
	}
};

class Bujursangkar :public bidangDatar { /*lengkapi disini*/ 
	void input() { 
		cout << "Masukkan sisi: ";
		int s;
		cin >> s;
		setX(s);
	}

	float Luas(int s) { 
		return s * s;
	}

	float Keliling(int s) { 
		return 4 * s;
	}
};

int main() { /*lengkapi disini*/

	bidangDatar* obyek;
	Lingkaran a;
	Bujursangkar b;

	cout << "Lingkaran dibuat\n";
	obyek = &a;
	obyek->input();
	int r = obyek->getX();
	cout << "Luas Lingkaran = " << obyek->Luas(r) << endl;
	cout << "Keliling Lingkaran = " << obyek->Keliling(r) << endl;

	cout << "\nBujursangkar dibuat\n";
	obyek = &b;
	obyek->input();
	int s = obyek->getX();
	cout << "Luas Bujursangkar = " << obyek->Luas(s) << endl;
	cout << "Keliling Lingkaran = " << obyek->Keliling(s) << endl;

}