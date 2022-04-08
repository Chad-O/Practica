#include<iostream>
enum TipoDato
{
    Entero,Decimal,Booleano
};

struct Recurso
{
    std::string nom;
    TipoDato tipoData;
    Recurso* sgtRec = nullptr;
    int mem = 0;
};

struct Proceso
{
    std::string nom;
    int pid;
    int mem;
    Recurso* primerRec = nullptr;
    Proceso* sgtProceso = nullptr;
};

Proceso* createProcess(Proceso* procesos,std::string nombre)
{
    Proceso* temp = new Proceso();
    temp = procesos;
    int pid = 0;
    //Caso 1: Primer proceso es nulo -> Agregar los valores a este.
    if(temp == nullptr)
    {
        temp->nom = nombre;
        temp->pid = pid;
        return temp;
    }
    //Caso 2: Buscar "procesos" hasta encontrar uno nulo -> Agregar los valores a este
    else
    {
        while(temp != nullptr)
        {
            temp = temp->sgtProceso;
            pid = temp->pid;
        }
        pid++;
        temp->nom = nombre;
        temp->pid = pid;
        return temp;
    }
}
//Asignar Memoria a los recursos
int asignarMemRec(Recurso* recurso)
{
    Recurso* tempRec = new Recurso();
    tempRec = recurso;
    if(tempRec->tipoData == TipoDato::Entero)
    {
        tempRec->mem = 8;
    }
    else if(tempRec->tipoData == TipoDato::Decimal)
    {
        tempRec->mem = 16;
    }
    else if(tempRec->tipoData == TipoDato::Booleano)
    {
        tempRec->mem = 1;
    }
    return tempRec->mem;
}
//Acumular la memoria asignada en los recursos para asignarselo al proceso.
int  asignarMemProc(Proceso* procesos)
{
    Proceso* tempProc = new Proceso();
    Recurso* tempRec = new Recurso();
    tempProc = procesos;
    tempRec = tempProc->primerRec;
    int acum = 0;
    while(tempRec != nullptr)
    {
        (asignarMemRec(tempRec));
        acum += tempRec->mem;
    }
    return acum;
}

Proceso* addResourceToProcess (Proceso* procesos, int pid, TipoDato tipo, std::string nombre)
{
    Proceso* tempProc = new Proceso();
    Recurso* tempRec = new Recurso();
    tempProc = procesos;
    //Hallar el Proceso requerido
    while(tempProc->pid != pid)
    {
        //Asignarle el proceso requerido a "temp"
        tempProc = tempProc->sgtProceso;
        //Error hallado
        if(tempProc == nullptr)
        {
            std::cout << "No existe ese Proceso"<<std::endl;
            return tempProc;
        }
    }
    //Caso contrario se continúa
    tempRec = tempProc->primerRec;

    if(tempRec == nullptr)
    {
        tempRec->tipoData = tipo;
        tempRec->nom = nombre;
        tempRec->sgtRec = nullptr;
    }
    else
    {
        while(tempRec != nullptr)
        {
            tempRec = tempRec->sgtRec;
        }
        tempRec->tipoData = tipo;
        tempRec->nom = nombre;
        tempRec->sgtRec = nullptr;
        tempProc->mem = asignarMemProc(tempProc);
    }
    return tempProc;
}



void imprimir(Proceso* procesos)
{
    Proceso* temp = new Proceso();
    Recurso* tempRec = new Recurso();
    temp = procesos;
    tempRec = temp->primerRec;

    if(temp == nullptr)
    {
        std::cout << "No existen procesos aún" << std::endl;
    }else
    {
        while(temp != nullptr)
        {
            std::cout << "Nombre: " << temp->nom<< std::endl;
            std::cout << "Pid: " << temp->pid<< std::endl;
            std::cout << "Memoria: " << temp->nom<< std::endl;
            while(tempRec != nullptr)
            {
                std::cout << "Nombre" << tempRec->nom << std::endl;
                std::cout << "Memoria" << tempRec->mem << std::endl;
                tempRec = tempRec->sgtRec;
            }
            temp = temp->sgtProceso;
        }

    }
}
int main()
{
    Proceso* procesos = new Proceso();
    createProcess(procesos, "prueba");
    createProcess(procesos, "raph");
    createProcess(procesos, "guido");

    imprimir(procesos);
}