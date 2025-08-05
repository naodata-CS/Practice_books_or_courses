Proceso sin_titulo
	definir parc1, parc2, parc3, promparciales, exfinal, trfinal, promedio como real;
	Escribir "Ingrese sus tres calificaciones parciales";
	Leer parc1;
	Leer parc2;
	Leer parc3;
	promparciales <- (parc1 + parc2 + parc3)/3;
	Escribir "Examen final";
	Leer exfinal;
	Escribir "Trabajo final";
	Leer trfinal;
	promedio <- (0.55 * promparciales) + (0.30 * exfinal) + (0.15 * trfinal);
	Escribir "Su calificacion final es: ", promedio;
	Si promedio >= 10.5 Entonces
		Escribir "Usted esta aprobado.";
	SiNo
		Escribir "Usted desaprobo, debe volver a llevar el curso.";
	FinSi
FinProceso
