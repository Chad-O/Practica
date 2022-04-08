#include <iostream>

struct Vuelo
{
    std::string horaPartida;
    float precio;
    Vuelo* siguienteVuelo;
};

struct Destino
{
   std::string destino;
    Destino* siguienteDestino;
    Vuelo* primerVuelo;
};

struct DestinosDisponibles
{
    Destino* primerDestino;
};


Destino* buscarDestino(DestinosDisponibles* destinosDisponibles, std::string destino)
{
    Destino* pDestino = destinosDisponibles->primerDestino;
    Destino* pDestAnt = nullptr;
    while(pDestino != nullptr)
    {
        if(pDestino->destino == destino)
        {
            return pDestino;
        }
        else
        {  
            pDestAnt->siguienteDestino = pDestino->siguienteDestino;
        }
    }
    return pDestino;
}

/*
Implementar una funciÃ³n que recibiendo un destino, una hora de partida y un precio
nos permita agregar un nuevo vuelo a ese destino.
*/
void agregarVuelo(DestinosDisponibles* destinosDisponibles, std::string destino,std::string horaPartida, float precio)
{
    Destino* pDestino = buscarDestino(destinosDisponibles,destino);
    Vuelo* vueloAnt = nullptr;
    if(pDestino->primerVuelo == nullptr)
    {
        pDestino->primerVuelo->horaPartida = horaPartida;
        pDestino->primerVuelo->precio = precio;
        pDestino->primerVuelo->siguienteVuelo = nullptr;
        vueloAnt = pDestino->primerVuelo;
    }
    else
    {
        pDestino->primerVuelo->siguienteVuelo->horaPartida = horaPartida;
        pDestino->primerVuelo->siguienteVuelo->precio = precio;
        pDestino->primerVuelo->siguienteVuelo->siguienteVuelo = nullptr;
        vueloAnt = pDestino->primerVuelo->siguienteVuelo;
    }

}


/*
Implementar una funciÃ³n que devuelva el precio del ticket
de Lima a una ciudad de destino que se pase como parametro.
El resultado va a ser un float que serÃ¡ el precio promedio de los vuelos para
ese destino.
En caso que no se encuentre un destino o si un destino no tiene vuelos registrados, 
la funciÃ³n deberÃ¡ de devolver -1.
*/
float verPrecioPromedioTicket(DestinosDisponibles* destinosDisponibles, std::string destino)
{
    int contador = 0;
    float valSum = 0;
    Destino* pDestinoVal = buscarDestino(destinosDisponibles,destino);
    Destino* pDestAnt = nullptr;
    Vuelo* sgtVuelo = nullptr;
    while(pDestinoVal->primerVuelo != nullptr)
    {
        valSum += pDestinoVal->primerVuelo->precio;
        contador++;
        pDestAnt->primerVuelo = pDestinoVal->primerVuelo;
        sgtVuelo = pDestAnt->primerVuelo->siguienteVuelo;
        pDestinoVal->primerVuelo = sgtVuelo;
    }
    return (valSum/contador);
}

/*
Implementar una funciÃ³n que recibiendo un destino devuelva el precio mÃ¡s
bajo entre todos los vuelos que haya.
En caso que no se encuentre un destino o si un destino no tiene vuelos registrado, 
la funciÃ³n deberÃ¡ de devolver -1.
 */ 
float verPrecioMasBajo(DestinosDisponibles* destinosDisponibles, std::string destino)
{
    float valMin = __FLT_MAX__;
    Destino* pDestinoVal = new Destino();
    Destino* pDestAnt = new Destino();
    Vuelo* sgtVuelo = new Vuelo();
    pDestAnt = nullptr;
    pDestinoVal = buscarDestino(destinosDisponibles,destino);
    while(pDestinoVal->primerVuelo != nullptr)
    {
        float valDestino = pDestinoVal->primerVuelo->precio;
        if(valDestino < valMin)
        {
            valMin = valDestino;
        }
        pDestAnt->primerVuelo = pDestinoVal->primerVuelo;
        sgtVuelo = pDestAnt->primerVuelo->siguienteVuelo;
        pDestinoVal->primerVuelo = sgtVuelo;
    }
    return valMin;
}




int main(int argc, char* argv[])
{
    /*
      ATENCIÃ“N:
      El siguiente cÃ³digo NO debe de modificarse o eliminarse. En caso de hacerlo,
      PERDERÃ el puntaje de toda la parte prÃ¡ctica.
    */
    
    DestinosDisponibles* destinosDisponibles = new DestinosDisponibles();

    Destino* destino1 = new Destino();
    Destino* destino2 = new Destino();
    Destino* destino3 = new Destino();

    destino1->destino = "Miami";
    destino1->primerVuelo = nullptr;
    destino1->siguienteDestino = destino2;

    destino2->destino = "Quito";
    destino2->primerVuelo = nullptr;
    destino2->siguienteDestino = destino3;

    destino3->destino = "Caracas";
    destino3->primerVuelo = nullptr;
    destino3->siguienteDestino = nullptr;

    destinosDisponibles->primerDestino = destino1;


    agregarVuelo(destinosDisponibles, "Miami", "11:00", 700.0);
    agregarVuelo(destinosDisponibles, "Miami", "01:00", 710.0);
    agregarVuelo(destinosDisponibles, "Miami", "11:00", 800.0);
    agregarVuelo(destinosDisponibles, "Miami", "01:00", 1200.0);
    agregarVuelo(destinosDisponibles, "Quito", "10:30", 300.0);
    agregarVuelo(destinosDisponibles, "Quito", "10:30", 400.0);

    char opcion = *(argv[1]);

    if (opcion == '0')
    {
        int cont = 0;
        Vuelo* pVuelo = destino1->primerVuelo;
        while (pVuelo != nullptr)
        {
            cont++;
            pVuelo = pVuelo->siguienteVuelo;
        }

        std::cout << cont << " ";
        
        cont = 0;
        pVuelo = destino2->primerVuelo;
        while (pVuelo != nullptr)
        {
            cont++;
            pVuelo = pVuelo->siguienteVuelo;
        }
        
        std::cout << cont << std::endl;
    }

    if (opcion == '1')
    {
        float precioPromedio = verPrecioPromedioTicket(destinosDisponibles, "Miami");
        std::cout << precioPromedio << " ";
        
        precioPromedio = verPrecioPromedioTicket(destinosDisponibles, "Quito");
        std::cout << precioPromedio << " ";
        precioPromedio = verPrecioPromedioTicket(destinosDisponibles, "Caracas");
        std::cout << precioPromedio << " ";
        precioPromedio = verPrecioPromedioTicket(destinosDisponibles, "Montevideo");
        std::cout << precioPromedio << std::endl;;
    }

    if (opcion == '2')
    {
        float precioMasBajo = verPrecioMasBajo(destinosDisponibles, "Miami");
        std::cout << precioMasBajo << " ";
        precioMasBajo = verPrecioMasBajo(destinosDisponibles, "Quito");
        std::cout << precioMasBajo << " ";
        precioMasBajo = verPrecioMasBajo(destinosDisponibles, "Caracas");
        std::cout << precioMasBajo << " ";
        precioMasBajo = verPrecioMasBajo(destinosDisponibles, "Montevideo");
        std::cout << precioMasBajo << std::endl;
    }

    return 0;
}