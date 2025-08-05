Proceso sin_titulo
	Definir i, num, nota_promedio, promedio, nota_baja como real;
	Escribir "Ingrese las diez calificaciones: ";
	nota_promedio <- 0;
	nota_baja <- 0;
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir i, " Ingrese la nota: ";
		leer num;
		Si i=1 Entonces
			nota_baja <- num;
		SiNo
		FinSi
		nota_promedio <- nota_promedio + num;
		Si num > nota_baja Entonces
			nota_baja <- nota_baja;
		SiNo
			nota_baja <- num;
		FinSi
	FinPara
	promedio <- nota_promedio / 10;
	Escribir "El promedio es: ", promedio;
	Escribir "La nota mas baja es: ", nota_baja;
FinProceso
