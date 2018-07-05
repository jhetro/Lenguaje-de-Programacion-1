#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[])

	{
		 if (argc < 2){
		
					cout<<"Seleccione su Producto\n[1]Accesorios,\n[2]Par de Calzado,\n[3]Carteras\n";// Seleccion del Producto
					cin>>resp;
					cout<<"Ingrese la Cantidad\n";// Cantidad a Comprar
					cin>>N;
					
					return 1;
			}
			int resp,PT,N,P;//Variables
			int NF=0,MT=0;//Contadores
	
		
			cout<<" ¿Desea [1]Continuar Compra, [0]Terminar Transaccion?\n";
			cin>>resp;// llamado a la Condicion
		
			while (resp!=0)
				{
	
					
					if (resp==1)
							{
								P=500;
								PT=P*N;
								
								
							}
					if (resp==2)
							{
								P=200;
								PT=P*N;
								
							}
					if (resp==3)
							{
								P=700;
								PT=P*N;
							}
					if (PT>=1000){
						
								int exento= (PT*0);
						
								}
								
					else {
						       int incluido =(PT*0.15);
					}
							cout<<" ¿Desea [1]Continuar Compra, [0]Terminar Transaccion?\n";
							cin>>resp;// llamado a la Condicion			
				
						++NF;
						MT=MT+PT;
						
										
				}//Fin de la funcion While			
								
				cout<<"************************Factura******************************"<<endl;
				
				cout<<"N° Factura:%d"<<NF<<endl;
		
				cout<<"Precio Unitario__________________________________Lps:  %d"<<P<<endl;
			
				cout<<"Cantidad_____________________________________________  %d"<<N<<endl;
				
				cout<<"Exento___________________________________________________"<<exento<<endl;
				
				cout<<"Incluido_________________________________________________"<<incluido<<endl;
				
				cout<<"Total____________________________________________Lps;  %d"<<PT<<endl;
				
				cout<<"*************************************************************\n"<<endl;
				cout<<"*********************Cierre de Caja**************************\n";
			
				cout<<"Facturas extendidas en el Dia:  %d"<<NF;
			
				cout<<"Monto Total Facturado al Dia:   %d"<<MT);
				
				return 0;
				
}
			    
				
										
								
								
								
								
								
						
					
			
			
			
			
			
		
		
		
	
