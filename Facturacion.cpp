#include <stdio.h>
int main()

	{
			
			int resp,PT,N,P;//Variables
			int NF=0,MT=0;//Contadores
	
		
			printf(" ¿Desea [1]Continuar Compra, [0]Terminar Transaccion?\n");
			scanf("%d", &resp);// llamado a la Condicion
		
			while (resp!=0)
				{
					printf("Seleccione su Producto\n[1]Accesorios,\n[2]Par de Calzado,\n[3]Carteras\n");// Seleccion del Producto
					scanf("%d", &resp);
					printf("Ingrese la Cantidad\n");// Cantidad a Comprar
					scanf("%d", &N);
					
					
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
						
					printf("¿Desea [1]Continuar Compra, [0]Terminar Transaccion?\n");
					scanf("%d", &resp);// llamado a la Condicion			
				
						++NF;
						MT=MT+PT;
										
				}//Fin de la funcion While			
								
				printf("************************Factura******************************");
				printf("\n");
				printf("N° Factura:%d",NF);
				printf("\n\n");
				printf("Precio Unitario__________________________________Lps:  %d",P);
				printf("\n");
				printf("Cantidad_____________________________________________  %d",N);
				printf("\n");
				printf("Total____________________________________________Lps;  %d",PT);
				printf("\n\n");
				printf("*************************************************************\n");
				printf("*********************Cierre de Caja**************************\n");
				printf("\n");
				printf("Facturas extendidas en el Dia:  %d",NF);
				printf("\n");
				printf("Monto Total Facturado al Dia:   %d",MT);
				
				return 0;
				
				
	}		    
				
										
								
								
								
								
								
						
					
			
			
			
			
			
		
		
		
	
