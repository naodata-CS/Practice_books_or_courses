Proceso sin_titulo
	definir a, b, c como real;
	Escribir "Ingrese tres numeros diferentes para determinar cual es mayor: ";
	Leer a, b, c;
	Si a>b Entonces
		Si a > c Entonces
			Escribir "El numero mayor es: ", a;
		SiNo
			Si c > a Entonces
				Escribir "El numero mayor es ", c;
			FinSi
		FinSi
	SiNo
		Si a > c Entonces
			Escribir "El numero mayor es ", b;
		SiNo
			Si c>b Entonces
				Escribir "El numero mayor es: ", c;
			FinSi
		FinSi
	FinSi
FinProceso
