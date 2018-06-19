#include <iostream>
#include <cstdlib>
using namespace std;
 
 int main (int argc , char*  argv[])
 
 {
 	
 	
					if (argc<3)
							{
								cout<<"Ingrese tres valores enteros";							
												return 1;
							}
						cout<<"*******************************************************************************\n";	
						cout<<"DETERMINE EN BASE A TRES NUMEROS SI DOS DE ELLOS SON IGUALES Y CUAL ES MAYOR\n";
						cout<<"*******************************************************************************\n";
							
							int a; int b; int c;
							a=atoi(argv[1]);
							b=atoi(argv[2]);
							c=atoi(argv[3]);
		
		 
 	
 							
 							if (a==b && c<a && c<b )
 										{
 											cout<<"A y B son Iguales \n";
											 cout<<"A y B son Mayores que c";
							 			}
							 			if (c>a&&c>b) 	{	
							 							cout<<"A y B son Iguales \n";
							 							cout<<"C es Mayor que a y b";
										 		}
 							if (b==c && a<b && a<c)
 										{
 											cout<<"B y C son Iguales \n";
											 cout<<"B y C son Mayores que a";
							 			}
							 			if (a>c&&a>b) 	{	
							 							cout<<"B y C son Iguales \n";
							 							cout<<"A es Mayor que b y c";
										 		}
							if (a==c && b<a && b<c)
 										{
 											cout<<"A y C son Iguales \n";
											 cout<<"A y C son Mayores que b";
							 			}
							 		if (b>a&&b>c) 	{	
							 							cout<<"A y C son Iguales \n";
							 							cout<<"B es Mayor que a y c";
							 					}
					
 			return 0;
 	
 }
