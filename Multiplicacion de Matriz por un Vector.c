//Programador: Deivi Rojas 25.831.760

// Multiplicacion de Matris por un Vector.
// (i) La Variable (i) representa la coordenada las Filas
// (j) La Variable (j) representa la coordenada las Columnas
// (a) La Variable (a) almacena la Cantidad de Fila o las Filas que van a ser usadas
// (b) La Variable (b) almacena la Cantidad de Columna o las Columnas que van a ser usadas
// (pro) La Variable (pro) es la operacion de Multiplicar o como se llama en Matematica Producto
// (mtrz[50][50]) Es un arreglo multidimensional que almacena la Matriz que puede ir desde 1 fila x 1 columna (1x1), hasta 50 filas x 50 columnas (50x50)
// (vctr[50]) es un arreglo mutidimensional que almacena el Vector que puede almacenar desde 1 fila hasta 50 filas. 

#include <stdio.h>

int main()
{
	int long i,j,pro,a,b;
	int long mtrz[50][50]; //Arreglo que puede llegar hasta 50 Filas x 50 Columnas
	int long vctr[50];    // Vector que puede llegar hasta 50 Filas
		
		printf("Cantidad de Filas: ");
        scanf("%d", &a);
        printf("Cantidado de Columnas: ");
        scanf("%d", &b);		
        
        printf (" \n");
		
	for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){	
			mtrz[i][j]=0;
            printf("Matriz [%d][%d]= ", i,j); //Pide el valor de cada Coordenada
            scanf("%d", &mtrz[i][j]);  
		}	printf("\n");
	}		printf("\n");
			
			// Imprime la Matriz Ordenada	(matriz n x matriz n)	   
			for(i=1; i<=a; i++){		
        		for(j=1; j<=b; j++)        																	
					printf("  %d  ", mtrz[i][j]);
					printf("\n");
			}		printf("\n");  
						 	        
					for(i=1; i<=a; i++){
						printf("Vector [%d]= ", i); //Pide la Dimension del Vector (vector n)
			        	scanf("%d", &vctr[i]);
			        }	printf("\n");
								 
						// Imprime la Matriz que se va a Multiplicar Con el Vector	(matriz n x vector n )	   				
			   			for(i=1; i<=a; i++){
						    pro=0;		
			        		for(j=1; j<=b; j++){
								pro = mtrz[i][j]*vctr[j];
								printf("  %d  *  %d ""= %d  ", mtrz[i][j],vctr[j],pro);
			        		}	printf("\n\n");
			        	}		
								// Imprime el Resultado de la Multiplicacion de Matriz por un Vector ((matriz n x vector n) + (matriz n x vector n))
								for(i=1; i<=a; i++){
						        	pro=0;
						        	for(j=1; j<=b; j++){
						           		pro += (mtrz[i][j]*vctr[j]);
						        	}	printf("Resultado[%d]=%d\n", i, pro);
						        }		printf("\n");
									
    system ("pause");
return 0;
}
