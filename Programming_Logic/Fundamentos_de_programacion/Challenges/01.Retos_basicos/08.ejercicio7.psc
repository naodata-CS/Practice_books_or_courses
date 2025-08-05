Proceso sin_titulo
	definir num, i, suma, numeros_pares, numeros_impares, suma_impares, promedio como real;
	suma <- 0;
	i <- 0;
	numeros_pares <- 0;
	suma_impares <- 0;
	numeros_impares <- 0;
	Escribir "Ingrese hasta que numero desea conocer la suma de numeros pares: ";
	Leer num;
	Mientras i <= num Hacer
		Si i mod 2 = 0 Entonces
			suma <- suma + i;
			i <- i+1;
			numeros_pares <- numeros_pares +1;
		SiNo
			suma_impares <- suma_impares + i;
			numeros_impares <- numeros_impares +1;
			i <- i +1;
		FinSi
	FinMientras
	promedio <- suma_impares / numeros_impares;
	Escribir "La suma de los numeros pares es: ", suma;
	Escribir "El promedio de numeros impares es: ", promedio;
	Escribir "La cantidad de numeros pares es: ", numeros_impares;
FinProceso
