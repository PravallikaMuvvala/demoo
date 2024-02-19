#include <iostream>
using namespace std;

/*
	0000 1010
	0000 0010
*/
int main() {
	int a = 10; //0000 1010
	int b = 2;  //0000 0010

	while (b != 0) {
		int carry = a & b;
		a = a ^ b;
		b = carry << 1;
	}
	std::cout << a << std::endl;
	return 0;
}