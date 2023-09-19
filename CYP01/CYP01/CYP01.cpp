#include <iostream>

int main()
{
	int anchoDePantalla = 0;
	int altoDePantalla = 0;
	float cordX = 0;
	float cordY = 0;
	float ancho = 0;
	float alto = 0;
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;

	scanf_s("%i", &anchoDePantalla);
	scanf_s("%i", &altoDePantalla);
	scanf_s("%f", &cordX);
	scanf_s("%f", &cordY);
	scanf_s("%f", &ancho);
	scanf_s("%f", &alto);

	x1 = anchoDePantalla * cordX;
	y1 = altoDePantalla * cordY;
	x2 = x1 + (anchoDePantalla * ancho);
	y2 = y1 + (altoDePantalla * alto);

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", anchoDePantalla, altoDePantalla, cordX, cordY, ancho, alto, x1, y1, x2, y2);

	return 0;
}
