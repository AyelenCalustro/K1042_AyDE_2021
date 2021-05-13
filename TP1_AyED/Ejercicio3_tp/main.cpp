#include <iostream>

using namespace std;
int main()

{
    float kilometros, metros;
    cout << "Ingrese la velocidad en km/hr: ";
    cin >> kilometros;

    if (kilometros>0)
    {
    metros= (kilometros * 1000) / 3600;
    cout << "La velocidad en metros por segundo es: " <<  metros << " mts/seg " <<endl;;
	}

    else
    cout<< "Finalizo el programa. " << endl;

	return 0;

}
