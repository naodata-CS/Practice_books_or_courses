Proceso sin_titulo
	definir par, impar, np, ni, sumaimpar, sumapar como entero;
	sumapar <- 0;
	sumaimpar <- 1;
	Para np<-0 Hasta 50 Con Paso 2 Hacer
		sumapar <- sumapar + np;
	FinPara
	Para ni<-1 Hasta 50 Con Paso 2 Hacer
		sumaimpar <- sumaimpar + ni;
	FinPara
	Escribir "La suma de los pares del 1 al 50 es: ", sumapar;
	Escribir "La suma de los impares del 1 al 50 es: ", sumaimpar;
FinProceso
