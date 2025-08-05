Proceso sin_titulo
	definir subtotal, total, descuento como real;
	Escribir "Ingrese el subtotal de compra del cliente: ";
	Leer subtotal;
	descuento <- 0.2 * subtotal;
	Si subtotal > 100 Entonces
		total <- subtotal - descuento;
	SiNo
		total  <- subtotal;
	FinSi
	Escribir "El total a pagar es: ", total;
FinProceso
