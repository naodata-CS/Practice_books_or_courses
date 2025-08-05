Proceso sin_titulo
	definir descuento, porcdescuento, subtotal, totalPagar como real;
	Escribir "Ingrese el descuento por el producto";
	Leer descuento;
	porcdescuento <- (descuento/100);
	Escribir "Ingrese el subtotal";
	Leer subtotal;
	totalPagar <- subtotal - (porcdescuento*subtotal);
	Escribir "El total a pagar es ", totalPagar, " soles.";
FinProceso
