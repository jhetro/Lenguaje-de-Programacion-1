#include <iostream>
using namespace std;

int Modulus(int iN, int iMod) {
	int iQ = (iN/iMod);
	return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + Modulus(iGenerator, iRange));
}

int main() {
	char Nombre;
	string contrasena;
	
	cout << "Eres un agente? ingresa tu Nombre Secreto"<<endl;
	cin >> Nombre;
	switch(Nombre) {
			case 'S': 
				cout<<"Ingrese Contrase�a"<<endl;
				cin>>contrasena;
					if (contrasena == "smith") {
						system("COLOR 02");

						char caRow[80];
						int j = 7;
						int k = 2;
						int l = 5;
						int m = 1;

							while (true) {
								int i = 0;
			
															// caracteres aleatorios
									while (i < 80) {
											if (caRow[i] != ' ') {
												caRow[i] = GetChar(j + i*i, 33, 30);
																}	
														std::cout << caRow[i];
														++i;
													}
														j = (j + 31);
														k = (k + 17);
														l = (l + 47);
														m = (m + 67);
														caRow[Modulus(j, 80)] = '-';
														caRow[Modulus(k, 80)] = ' ';
														caRow[Modulus(l, 80)] = '-';
														caRow[Modulus(m, 80)] = ' ';
			
								// incremente el vakor de 3000000 para retrasar el proceso
								i = 0;
							while (i < 300000) {
									GetChar(1, 1, 1);
				 					++i;
												}
										}			
							} else {
								cout << "acceso a la matrix denegado";
		
									}
							
				break;
			case 'N': 
				cout<<"Ingrese Contrase�a"<<endl;
				cin>>contrasena;
				
	
					if (contrasena == "Neo") {
						system("COLOR 01");

						char caRow[80];
						int j = 7;
						int k = 2;
						int l = 5;
						int m = 1;

							while (true) {
								int i = 0;
			
									// caracteres aleatorios
									while (i < 1001) {
													if (caRow[i] != ' ') {
													caRow[i] = GetChar(j + i*i, 33, 30);
																		}
													std::cout << caRow[i];
													++i;
													}
													j = (j + 31);
													k = (k + 17);
													l = (l + 47);
													m = (m + 67);
													caRow[Modulus(j, 1001)] = '-';
													caRow[Modulus(k, 1001)] = ' ';
													caRow[Modulus(l, 1001)] = '-';
													caRow[Modulus(m, 1001)] = ' ';
			
								// incremente el vakor de 50000 para retrasar el proceso
								i = 0;
								while (i < 50000) {
											GetChar(1, 1, 1);
											 ++i;
													}
										}		
									} else {
											cout << "acceso a la matrix denegado";
		
											}
			break;
				
				default:;		
		}
		
		return 0;
		
}
