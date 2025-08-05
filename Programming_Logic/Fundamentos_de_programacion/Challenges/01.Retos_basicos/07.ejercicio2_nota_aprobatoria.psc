Proceso sin_titulo
	definir a, b, c, prom como real;
	Escribir "Ingrese sus tres notas";
	Leer a;
	Leer b;
	Leer c;
	prom <- (a+b+c)/3;
	Si prom >= 70 Entonces
		Escribir "El alumno ha aprobado con nota ", prom;
	SiNo
		Escribir "El alumno desaprueba con nota ", prom;
	FinSi
FinProceso
