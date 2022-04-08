#include <iostream>
struct Celda
{
    int col;
    int valor = 0;
    Celda* sgtCelda = nullptr;
};

struct Fila
{
    int numero;
    int canCeldas = 0;
    Fila* sgtFila = nullptr;
    Celda* primeraCelda = nullptr;
    Celda* ultimaCelda = nullptr;
};

struct Hoja
{
    Fila* primeraFila = nullptr;
    std::string nombre;
    int numFilas = 0;
    int numColumnas = 0;
};

void imprimirFila(Fila* fila)
{
    Celda* temp = new Celda();
    temp = fila->primeraCelda;
    while(temp != nullptr)
    {
        std::cout << temp->valor << " ";
        temp = temp->sgtCelda;
    }
    std::cout << std::endl;
}

Fila* crearFila(int longitud)
{
    Fila* fila = new Fila();

    Celda* temp = new Celda();
    Celda* ult = new Celda();

    for(int i = 0; i < longitud; i++)
    {
        if(i == 0)
        {
            fila->primeraCelda = temp;
            ult = temp;
        }
        temp->sgtCelda = new Celda();
        temp = temp->sgtCelda;
        ult = temp;
    }
    fila->ultimaCelda = ult;
    return fila;
}

void agregarFila(Hoja* hoja)
{
    hoja->numFilas++;

    if(hoja->primeraFila == nullptr)
    {
        Fila* fila = crearFila(hoja->numColumnas);
        hoja->primeraFila = fila;
        return;
    }
    Fila* temp = hoja->primeraFila;
    while(temp->sgtFila != nullptr)
    {
        temp = temp->sgtFila;
    }
    temp->sgtFila = crearFila(hoja->numColumnas);
}

void imprimirHoja(Hoja* hoja)
{
    Fila* temp = hoja->primeraFila;

    while(temp != nullptr)
    {
        imprimirFila(temp);
        temp = temp->sgtFila;
    }
}

int main()
{
    Hoja* hoja = new Hoja();
    hoja->numColumnas = 5;

    agregarFila(hoja);
    agregarFila(hoja);
    agregarFila(hoja);

    hoja->primeraFila->sgtFila->ultimaCelda->valor = 2;
    hoja->primeraFila->ultimaCelda->valor = 1;

    imprimirHoja(hoja); 
    return 0;
}