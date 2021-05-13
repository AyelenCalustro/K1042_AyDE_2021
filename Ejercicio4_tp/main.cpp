#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main()

{
	float a, b, c, disc, x1, x2;
	cout << "Ingrese el coeficiente a: " << endl;
	cin >> a;
	cout << "Ingrese el coeficiente b: " << endl;
	cin >> b;
	cout << "Ingrese el coeficiente c: " << endl;
    cin >> c;
    disc= pow(b,2) - 4 * a * c;

    if(disc>0)
    {
    x1= (- b + sqrt(disc)) / (2 * a);
	x2= (- b - sqrt(disc)) / (2 * a);
	cout<<"X1 es: " << x1 << endl;
    cout<<"X2 es: " << x2 << endl;
	}
	else
    {
    cout << "No hay soluciones reales." << endl ;
	}

	return 0;
}
