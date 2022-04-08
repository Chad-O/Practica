#include <iostream>
//Es lo mismo que un Nodo
struct Posicion
{
    int fila;
    int columna;
    int valor;
    Posicion* Sgtfila = nullptr;
    Posicion* Sgtpos = nullptr;
};

void imprimirFila(Posicion* pos)
{
    Posicion* temp = pos;
    while(temp !=nullptr)
    {
        std::cout << temp->valor <<" ";
        temp = temp->Sgtpos;
    }
    std::cout << std::endl;
}

void imprimirMatriz(Posicion* pos)
{
    Posicion* temp = pos;
    while(temp != nullptr)
    {
        imprimirFila(temp);
        temp = temp->Sgtfila;
    }

}
Posicion* construirMatrizId(int n)
{
    Posicion* res = new Posicion();

    Posicion* temp = res;

    for(int i = 0; i < n ;++i)
    {
        Posicion* tempf = temp;
        for(int j = 0 ; j < n;++j)
        {
            tempf->columna = j;
            tempf->fila = i;
            if(i==j) tempf->valor = 1;
            //Penultima posición y asignar posicion final.
            if(j < n-1) tempf->Sgtpos = new Posicion();
            tempf = tempf->Sgtpos;
        }

        if(i<n-1) temp->Sgtfila = new Posicion();
        temp = temp->Sgtfila;
    }
    return res;
}


int main()
{
    imprimirMatriz(construirMatrizId(7));
    return 0;
}