#include <iostream>

struct node
{
    int data;
    node* sgtNodo;
};

struct lista
{
    node* Nodo;
    node* fNodo;
};
//O(n) --> O(1) si se tiene un puntero al final de la lista
void agregarNodo (lista* lis, int data)
{
    node* nNodo = new node();
    node* pNodo = lis->Nodo;
    nNodo->data = data;
    nNodo->sgtNodo = nullptr;
    if(lis->Nodo == nullptr)
    {
        lis->Nodo = nNodo;
        lis->fNodo = lis->Nodo;
        return;
    }
    while(pNodo->sgtNodo !=nullptr)
    {
        pNodo = pNodo->sgtNodo;
    }
    pNodo->sgtNodo = nNodo;
    lis->fNodo = pNodo->sgtNodo;
    return;
}
void push (lista* lis, int data)
{
    node* nNodo = new node();
    nNodo->data = data;
    nNodo->sgtNodo = lis->Nodo;
    lis->Nodo = nNodo;
}
int valTam(lista* lis)
{
    int cont = 0;
    while(lis->Nodo != nullptr)
    {
        lis->Nodo = lis->Nodo->sgtNodo;
        cont++;
    }
    return cont;
}
node* crearNodo(int data)
{
    node* nNodo = new node();

    nNodo->data = data;
    nNodo->sgtNodo = nullptr;
    return nNodo;
}
void insertar(lista* lis, int data,int pos)
{  
    node* temp1  = new node();
    temp1->data = data;
    temp1->sgtNodo = nullptr;
    if(pos==1)
    {
        temp1->sgtNodo = lis->Nodo;
        lis->Nodo = temp1;
        return;
    }
    node* temp2 = lis->Nodo;
    for(int i = 0 ; i < pos-1; i++)
    {
        temp2 = temp2->sgtNodo;
    }
    temp1->sgtNodo = temp2->sgtNodo;
    temp2->sgtNodo = temp1;
}
void borrarNodo(lista* lis, int pos)
{
    if(lis->Nodo == nullptr)
    {
        return;
    }
    node* temp = lis->Nodo;

    if(pos == 0)
    {
        lis->Nodo = temp->sgtNodo;
        free(temp);
        return;
    }

    for(int i = 0; temp!= nullptr && i < pos- 1; ++i)
    {
        temp = temp->sgtNodo;
    }
    if(temp == nullptr || temp->sgtNodo == nullptr)
    {
        return;
    }
    node* sgt = temp->sgtNodo->sgtNodo;

    free(temp->sgtNodo);

    temp->sgtNodo = sgt;
}

void mostarLis(lista* lis)
{
    int cont = 0;
    while(lis->Nodo!=nullptr)
    {   if(lis->Nodo->sgtNodo!=nullptr){
            std::cout <<"Nodo: " << cont << " Valor: "<< lis->Nodo->data <<"-->"<< std::endl;
            lis->Nodo = lis->Nodo->sgtNodo;
            cont++;
        }else
        {
            std::cout <<"Nodo: " << cont << " Valor: "<< lis->Nodo->data << std::endl;
            lis->Nodo = lis->Nodo->sgtNodo;
        }
    }
}

int main(){
    lista* lis = new lista();
    push(lis,7);//7
    agregarNodo(lis,3);//7,3
    agregarNodo(lis,5);//7,3,5
    agregarNodo(lis,4);//7,3,5,4
    insertar(lis,23,3);//7,3,5,23,4
    borrarNodo(lis,2);//7,3,23,4
    mostarLis(lis);

    return 0;
}