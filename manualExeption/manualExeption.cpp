#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0, 5; //melemparkan sebuah integer maka
		cout << "Pernyataan Tidak Akan di Eksekusi" << endl;
	}
	catch (int a) {
		//Blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka block ini akan dieksekusi*/
		cout << "default Pengecualian diexsekusi" << endl;
	}

	return 0;
}