#include <iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() {
		cout << "hallo saya function dari base class";
	}
};
class derivedClass :public baseClass {
public:
	void perkenalan() {
		cout << "hallo saya fungction dari derived class";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
 }