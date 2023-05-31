#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	srting nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};
