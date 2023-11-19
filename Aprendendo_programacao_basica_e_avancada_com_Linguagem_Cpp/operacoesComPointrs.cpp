#include <iostream>

using namespace std;

int main(void) {
	
	int *ptr, *ptr2, numero = 4890;
	ptr = &numero;
	ptr2 = ptr;
	
	cout << "afinal qual e o valor de ptr2: " << ptr2 << "\n";
	cout << "afinal qual e o valor de ptr: " << ptr << "\n";
	cout << "afinal qual e o valor de numero: " << numero << "\n";
	cout << "afinal qual e o valor de &numero: " << &numero << "\n";
	*ptr2 = (*ptr + 10);
	cout << "afinal qual e o valor de ptr2: " << *ptr2 << "\n";
	return (0);
}
