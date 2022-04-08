#include <iostream>
using namespace std;
int main()
{   
    int valorTot = 0;
    int edad;

    cout << "Ingresar edad: " << endl;
    cin >> edad;
    if(edad > 17 && edad <= 100 )
    {
        int prodNum;
        int precioProds;
        cout << "Ingresar numero de productos: " << endl;
        cin >> prodNum;
        while(prodNum--)
        {
            cout << "Ingresar precio de productos: " << endl;
            cin >> precioProds;
            valorTot = valorTot + precioProds;
        }
    }else
    {
        cout << "Edad no valida" << endl;
        return 0;
    }
    cout << "Valor total sin descuento: " << valorTot << endl;
    
    cout << "Descuento por invierno: " << valorTot*0.1 <<endl;
    valorTot = valorTot*0.9;
    if(edad>= 65)
    {
        cout << "Descuento de adulto mayor: " << valorTot*0.15 << endl;
        valorTot = valorTot*0.85;
    }
    cout << "Monto a pagar: " << valorTot;
    return 0;
}