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


//                                                                                                                          BuscarDestino
Destino* buscarDestino(DestinosDisponibles* destinosDisponibles, std::string destino)
{
    Destino* ptr = destinosDisponibles->primerDestino;
    while (ptr != nullptr) {
        if (ptr->destino == destino)
            return ptr;
        ptr = ptr->siguienteDestino;
    }
    return nullptr;
}

/*
Implementar una función que recibiendo un destino, una hora de partida y un precio
nos permita agregar un nuevo vuelo a ese destino.
*/
//                                                                                                                          AgregarVuelo
void agregarVuelo(DestinosDisponibles* destinosDisponibles, std::string destino, std::string horaPartida, float precio)
{

    Destino* temp = buscarDestino(destinosDisponibles, destino);
    if (temp == nullptr)
        return;
    if (temp->primerVuelo == nullptr) {
        temp->primerVuelo = new Vuelo();
        temp->primerVuelo->horaPartida = horaPartida;
        temp->primerVuelo->precio = precio;
        return;
    }
    Vuelo* ptr = temp->primerVuelo;
    Vuelo* respuesta = new Vuelo();
    respuesta->horaPartida = horaPartida;
    respuesta->precio = precio;
    respuesta->siguienteVuelo = nullptr;
    while (ptr->siguienteVuelo != nullptr)
        ptr = ptr->siguienteVuelo;
    ptr->siguienteVuelo = respuesta;

}
//                                                                                                                          LeerVuelo
void LeerVuelos(Destino* ptr) {
    Vuelo* temp = ptr->primerVuelo;
    if (temp == nullptr) {
        return;
    }
    while (temp != nullptr) {
        std::cout << temp->precio << " - " << temp->horaPartida << "\t";
        temp = temp->siguienteVuelo;
    }
}
//                                                                                                                          LeerDestino
void LeerDestinos(DestinosDisponibles* destinosDisponibles) {
    Destino* ptr = destinosDisponibles->primerDestino;
    while (ptr != nullptr) {
        std::cout << "\nDestino: " << ptr->destino << "\tVuelos:" << std::endl;
        LeerVuelos(ptr);
        ptr = ptr->siguienteDestino;
    }
}

/*
Implementar una función que devuelva el precio del ticket
de Lima a una ciudad de destino que se pase como parametro.
El resultado va a ser un float que será el precio promedio de los vuelos para
ese destino.
En caso que no se encuentre un destino o si un destino no tiene vuelos registrados,
la función deberá de devolver -1.
*/
//                                                                                                                          verPrecioPromedioTicket
float verPrecioPromedioTicket(DestinosDisponibles* destinosDisponibles, std::string destino)
{
    Destino* ptr = buscarDestino(destinosDisponibles, destino);
    if (ptr == nullptr)
        return -1;
    float cont = 0.0f;
    float sum = 0.0f;
    Vuelo* viaje = ptr->primerVuelo;
    if (viaje == nullptr)
        return -1;
    while (viaje != nullptr) {
        cont++;
        sum += viaje->precio;
        viaje = viaje->siguienteVuelo;
    }
    return sum / cont;
}

/*
Implementar una función que recibiendo un destino devuelva el precio más
bajo entre todos los vuelos que haya.
En caso que no se encuentre un destino o si un destino no tiene vuelos registrado,
la función deberá de devolver -1.
 */
 //                                                                                                                          verPrecioMasBajo
float verPrecioMasBajo(DestinosDisponibles* destinosDisponibles, std::string destino)
{
    Destino* ptr = buscarDestino(destinosDisponibles, destino);
    if (ptr == nullptr)
        return -1;


    Vuelo* viaje = ptr->primerVuelo;
    if (viaje == nullptr)
        return -1;
    float menor = viaje->precio;
    while (viaje != nullptr) {
        if (viaje->precio < menor)
            menor = viaje->precio;
        viaje = viaje->siguienteVuelo;
    }
    return menor;
}




int main(int argc, char* argv[])
{
    /*
      ATENCIÓN:
      El siguiente código NO debe de modificarse o eliminarse. En caso de hacerlo,
      PERDERÁ el puntaje de toda la parte práctica.
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
    LeerDestinos(destinosDisponibles);

    std::cout << verPrecioPromedioTicket(destinosDisponibles, "Caracas");
    std::cout << verPrecioMasBajo(destinosDisponibles, "Quito");
    
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