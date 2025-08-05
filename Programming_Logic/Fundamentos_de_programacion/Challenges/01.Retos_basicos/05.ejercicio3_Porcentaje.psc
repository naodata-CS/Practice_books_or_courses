Proceso sin_titulo
	definir hombres, mujeres, total, porcentajeh, porcentajem como real;
	Escribir "Ingrese cuantos hombres hay:";
	Leer hombres;
	Escribir "Ingrese cuantas mujeres hay";
	Leer mujeres;
	total <- hombres + mujeres;
	porcentajeh <- (hombres/total) * 100;
	porcentajem <- (mujeres/total) * 100;
	Escribir "El porcentaje de hombres es ", porcentajeh, "%.";
	Escribir "El porcentaje de mujeres es ", porcentajem, "%.";
FinProceso
