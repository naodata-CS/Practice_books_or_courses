Proceso sin_titulo
	Definir a,b,c,tiempoA, tiempoB, tiempoC, resultado, horas, minutos como real;
	Escribir "Ingresa cuantos examenes A tuvo que revisar";
	Leer a;
	Escribir "Ingresa cuantos examenes B tuvo que revisar";
	Leer b;
	Escribir "Ingresa cuantos examenes C tuvo que revisar";
	Leer c;
	tiempoA <- 5 * a;
	tiempoB <- 8 * b;
	tiempoC <- 6 * c;
	resultado <- tiempoA + tiempoB + tiempoC;
	horas <- trunc(resultado/60);
	minutos <- resultado MOD 60;
	Escribir "La cantidad de horas y minutos que tomo son ", horas,  " horas con ", minutos, " minutos.";
FinProceso
