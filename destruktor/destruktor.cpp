#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //Constructor
	~angka(); //Destructor
	void cetakData();
	void isiData();
};
//Definisi member functon
angka::angka(int i) { //Constructor 
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() { //Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "alamat Array Sudah Dilepaskan" << endl;
}

void angka