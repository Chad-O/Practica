#include<iostream>


enum  Simbolo
{
	Nada, Aspa, Circulo
};
struct Casilla
{
	Simbolo simbolo;
	Casilla* casillaDerecha;
	Casilla* casillaInferior;
};

Casilla* crearFila(int tam)
{
	Casilla* pCasilla = nullptr;
	Casilla* pCasillaAnt = nullptr;
	for (int i = 0; i < tam; i++)
	{
		Casilla* casilla = new Casilla();
		casilla->casillaDerecha = nullptr;
		if (pCasilla == nullptr)
		{
			pCasilla = casilla;
		}
		if (pCasillaAnt != nullptr)
		{
			pCasillaAnt->casillaDerecha = casilla;
		}
		pCasillaAnt = casilla;
	}
	return pCasilla;
}
Casilla* armarTablero(int tam)
{
	Casilla* pFilaInicio = nullptr;
	Casilla* pFilaAnterior = nullptr;
	for (int i = 0; i < tam; ++i)
	{
		Casilla* filaNueva = crearFila(tam);
		filaNueva->casillaInferior = nullptr;
		if (pFilaInicio == nullptr) {
			pFilaInicio = filaNueva;
		}
		if (pFilaAnterior != nullptr)
		{
			pFilaAnterior->casillaInferior = filaNueva;
		}
		pFilaAnterior = filaNueva;
	}
	return pFilaInicio;

}


void pintar(Casilla* tablero)
{
	Casilla* pCasillaFila = tablero;
	while (true)
	{
		if (pCasillaFila == nullptr)
		{
			break;
		}
		else
		{
			Casilla* pCasilla = pCasillaFila;
			while (true)
			{
				if (pCasilla == NULL)
				{
					std::cout << std::endl;
					break;
				}
				else
				{
					switch (pCasilla->simbolo)
					{
					case Nada:
						std::cout << "- ";
						break;
					case Aspa:
						std::cout << "X ";
						break;
					case Circulo:
						std::cout << "O ";
						break;
					}
				}
				pCasilla = pCasilla->casillaDerecha;
			}
		}
		pCasillaFila = pCasillaFila->casillaInferior;
	}
	std::cout << std::endl;
}


void colocarSimbolo(Casilla* tablero, int posFila, int posCol, Simbolo simbolo)
{
	Casilla* pCasillaFila = tablero;
	int contFila = 0;

	while (true)
	{
		if (posFila == contFila)
		{
			int contColumna = 0;
			Casilla* pCasillaColumna = pCasillaFila;
			while (true)
			{
				if (posCol == contColumna) 
				{
                    pCasillaColumna->simbolo = simbolo;
					break;
				}
				pCasillaColumna = pCasillaColumna->casillaDerecha;
				contColumna++;
			}
			break;
		}
		pCasillaFila = pCasillaFila->casillaInferior;
		contFila++;

	}
}
int main()
{
	Casilla* tablero = armarTablero(3);
	pintar(tablero);
	colocarSimbolo(tablero, 1, 2, Aspa);
	pintar(tablero);
	return 0;
}