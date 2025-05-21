#include <cstdio>
#include <string>

struct Poligono {
	char* tipo;
	double nro1;
	double nro2 = 0;
};

double getArea(Poligono poligono) {	
	if (strcmp(poligono.tipo, "cuadrado") == 0) {
		return poligono.nro1 * poligono.nro1;
	}
	
	if (strcmp(poligono.tipo, "triangulo") == 0) {
		return poligono.nro1 * poligono.nro2 / 2;
	}
	
	if (strcmp(poligono.tipo, "rectangulo") == 0) {
		return poligono.nro1 * poligono.nro2;
	}

	return 0;
}

void printArea(Poligono poligono) {
	double area = getArea(poligono);
	
	if (area == (int)area) {		
		printf("%.0f\n", area);
	} else {	
		printf("%.2f\n", area);
	}	
}

int main(){
	Poligono cuadrado = {"cuadrado", 2};
	Poligono triangulo = {"triAngulo", 5, 23};
	Poligono rectangulo = {"rectangulo", 3, 7};
	
	printArea(cuadrado);
	printArea(triangulo);
	printArea(rectangulo);	
}