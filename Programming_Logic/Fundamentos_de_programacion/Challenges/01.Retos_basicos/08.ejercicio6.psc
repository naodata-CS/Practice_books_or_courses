Proceso sin_titulo
	definir sumatoria, n, i como entero;
	Escribir "Ingrese hasta que numero desea realizar la sumatoria: ";
	leer n;
	i <- 1;
	sumatoria <- 0;
	Mientras i <= n Hacer
		sumatoria <- sumatoria + i ^ 2;
		i <- i + 1;
	FinMientras
	Escribir "La sumatoria es: ", sumatoria;
FinProceso
