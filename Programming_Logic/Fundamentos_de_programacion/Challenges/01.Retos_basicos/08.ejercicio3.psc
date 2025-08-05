Proceso sin_titulo
	definir num, i, conteo_neutro, conteo_positivo, conteo_negativo como entero;
	conteo_neutro <- 0;
	conteo_negativo <- 0;
	conteo_positivo <- 0;
	Escribir "Escriba diez numeros: ";
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num;
		Si num = 0 Entonces
			conteo_neutro <- conteo_neutro +1;
		SiNo
			Si num > 0 Entonces
				conteo_positivo <- conteo_positivo + 1;
			SiNo
				conteo_negativo <- conteo_negativo + 1;
			FinSi
		FinSi
	FinPara
	Escribir "La cantidad de neutros son: ", conteo_neutro, " la cantidad de positivos son: ", conteo_positivo, " la cantidad de negativos son: ", conteo_negativo;
FinProceso
