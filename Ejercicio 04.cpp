#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	vector<string> aves = { "Loro gris, ","Paloma de diamante, ","Coctel, " };

	cout<<"Los valores antes de insertar: \n";

	for (int i = 0; i < aves.size(); i++) {
		cout << aves[i] << " ";
	}
	cout << "\n";

	aves.push_back("Mayna, ");
	aves.push_back("Periquitos, ");
	aves.push_back("Cacatua. ");

	cout << "\n";

	cout << "Los valores despues de insertar: \n";

	for (int i = 0; i < aves.size(); i++) {
		cout << aves[i] << " ";
	}
	cout << "\n";

	return 0;
}