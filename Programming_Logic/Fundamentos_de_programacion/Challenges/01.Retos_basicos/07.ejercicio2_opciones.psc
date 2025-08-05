Proceso sin_titulo
	definir opciones, num, exponente, res como real;

	Escribir "Ingrese una de las opciones 1-3: ";
	Leer opciones;
	Segun opciones Hacer
		1:
			Escribir "Ingrese un numero: ";
			Leer num;
			Escribir "Ingrese la potencia";
			Leer exponente;
			res <- num ^ exponente;
			Escribir "El resultado es: ", res;
		2:
			Escribir "Ingrese un numero: ";
			Leer num;
			res <- raiz(num);
			Escribir "El resultado es: ", res;
		3:
			;
		De Otro Modo:
			Escribir "Ingresar una opcion correcta";
	FinSegun	
FinProceso
