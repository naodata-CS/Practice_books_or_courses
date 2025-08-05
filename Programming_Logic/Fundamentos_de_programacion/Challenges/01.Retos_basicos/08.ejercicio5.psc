Proceso sin_titulo
	definir num, factorial, i, n como entero;
	factorial <- 1;
	Escribir "Ingrese el numero del que desea saber su factorial: ";
	leer i;
	Si i >= 0 Entonces
		Para n <- 1 Hasta i Con Paso 1 Hacer
			factorial <- factorial * n;
		FinPara
	SiNo
		Escribir "Ingrese un numero que sea mayor o igual que 0: ";
	FinSi
	Escribir "El factorial es: ", factorial;
FinProceso
