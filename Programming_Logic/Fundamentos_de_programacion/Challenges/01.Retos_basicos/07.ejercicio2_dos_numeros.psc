Proceso sin_titulo
	Definir a, b, operacion como real;
	Escribir "Ingrese el primer numero: ";
	leer a;
	Escribir "Ingrese el segundo numero: ";
	leer b;
	Si a = b Entonces
		operacion <- a * b;
		Escribir "El resultado es: ", operacion;
	SiNo
		Si a > b Entonces
			operacion <- a - b;
			Escribir "El resultado es: ", operacion;
		SiNo
			operacion <- a + b;
			Escribir "El resultado es: ", operacion;
		FinSi
	FinSi
	
FinProceso
