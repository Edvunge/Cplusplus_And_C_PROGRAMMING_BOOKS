/*
6. Faça um programa em C que leia um número inteiro e imprima o seu antecessor
e o seu sucessor.
*/

int main() {
	int num = 3, antecessor, sucessor;
	
	antecessor = num - 1;
	sucessor = num + 1;
	
	cout << "o numero e: "     << num        << "\n";
	cout << "o antecessor e: " << antecessor << "\n"; 
	cout << "o sucessor e: "   << sucessor   << "\n";
	return 0;
}

