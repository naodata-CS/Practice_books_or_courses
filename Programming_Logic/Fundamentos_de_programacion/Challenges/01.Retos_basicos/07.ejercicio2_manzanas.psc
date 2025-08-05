Proceso sin_titulo
	definir precioManzanas, manzanas, descuento, subtotal, total como real;
	Escribir "Ingrese la cantidad de manzanas que el cliente desea comprar: ";
	Leer manzanas;
	Escribir "Ingrese el precio de las manzanas";
	Leer precioManzanas;
	subtotal <- manzanas * precioManzanas;
	Si manzanas > 2 Entonces
		Si manzanas > 5 Entonces
			Si manzanas > 10 Entonces
				descuento <- 0.2 * subtotal;
			SiNo
				descuento <- 0.15 * subtotal;
			FinSi
		SiNo
			descuento <- 0.10 * subtotal;
		FinSi
	SiNo
		descuento <- 0;
	FinSi
	total <- subtotal - descuento;
	Escribir "El total a pagar es: ", total;
FinProceso
