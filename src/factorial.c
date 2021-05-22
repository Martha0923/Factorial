# include <stdio.h>

int factorial (int n) { // Funcion para calcular el factorial de un numero
	int i = 1; 

	while  (n > 1) return n * factorial (n-1); // mientras n sea mayor que uno, que me devuelva el n * el factorial de n menos uno
       					           // En este caso llamo a la funcion dentro de si misma	
	        
	return i;
}

int main (int argc, char * argv []) {

        // primera parte del ejercicio dos.

	//int fac4 = factorial (4);
	//int fac5 = factorial (5);
	//printf ("4! = %d, 5! = %d\n", fac4, fac5); // Aqui se le pide que imprima el factorial de cuatro y cinco
	//return 0;


	// segunda parte del ejercicio dos.
	int numero;
	int resultado;
	printf ("Introduce un numero:");
	scanf ("%d", &numero);
	resultado = factorial (numero);

	printf("El factorial de %d es %d\n", numero, resultado);

	return 0;

	
}
