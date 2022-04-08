#include<iostream>
struct Letra
{
	std::string valor;
	Letra* siguienteLetra;
};
struct Palabra
{
	int longitud;
	std::string cadena;
	Letra* primeraLetra;
};



Palabra* crearPalabra(std::string palabra) 
{
	int longitud = palabra.length();

	Palabra* nuevaPalabra = new Palabra();
	nuevaPalabra->longitud = longitud;

	Letra* pLetraAnterior = nullptr;

	for (int i = 0; i < longitud; i++) 
	{
		if (i == 0) 
		{
			//Primera letra
			Letra* nuevaLetra = new Letra();
			nuevaLetra->valor = palabra.at(i);
			nuevaLetra->siguienteLetra = nullptr;

			nuevaPalabra->primeraLetra = nuevaLetra;
			pLetraAnterior = nuevaLetra;
			
		}
		else 
		{
			Letra* letra = new Letra();
			letra->valor = palabra.at(i);
			letra->siguienteLetra = nullptr;
			pLetraAnterior->siguienteLetra = letra;
			pLetraAnterior = letra;
		}
	}
	return nuevaPalabra;
}
Letra* obtenerLetra(Palabra* palabra, int post) 
{
	Letra* pLetra = palabra->primeraLetra;
	int cont = 0;
	while (pLetra != nullptr)
	{
		if (cont == post) 
		{
			return pLetra;
		}
		cont++;
		pLetra = pLetra->siguienteLetra;
	}
	return nullptr;
}
bool esPalindroma(Palabra* palabra) 
{
	int tam = palabra->longitud;

	for (int i = 0; i < tam / 2; ++i) 
	{
		Letra* pLetraIzquierda = obtenerLetra(palabra,i);
		Letra* pLetraDerecha = obtenerLetra(palabra,tam-i-1);

		if (pLetraIzquierda->valor != pLetraDerecha->valor)
		{
			return false;
		}
	}
	return true;
}

Palabra* quitarLetra(Palabra* palabra, int pos) 
{
	Palabra* nuevaPalabra = crearPalabra(palabra->cadena);
    int cont = 0;
	Letra* pLetra = nuevaPalabra->primeraLetra;
	Letra* pLetraAnterior = nullptr;

	while (pLetra != nullptr) 
	{
		if (cont == pos)
		{
			if (pLetraAnterior == nullptr) {
				//Es primera letra
				nuevaPalabra->primeraLetra = pLetra->siguienteLetra;
			}
			else
			{
				pLetraAnterior->siguienteLetra = pLetra->siguienteLetra;
			}
			delete pLetra;
			break;
		}
		cont++;
		pLetraAnterior = pLetra;
		pLetra = pLetra->siguienteLetra;
	}
    return palabra;
}

bool esdPalindroma(Palabra* palabra) 
{
	Palabra* nuevaPalabra = quitarLetra(palabra, palabra->longitud - 1);
	return esPalindroma(nuevaPalabra);
}

bool esiPalindroma(Palabra* palabra)
{
	Palabra* nuevaPalabra = quitarLetra(palabra, 0);
	return esPalindroma(nuevaPalabra);
}

int main()
{
	std::string palabra;
	std::cin >> palabra;

	Palabra* palabraCreada = crearPalabra(palabra);
	bool palindroma = esPalindroma(palabraCreada);
	bool iPalindroma = esiPalindroma(palabraCreada);
	bool dPalindroma = esdPalindroma(palabraCreada);

	if (!palindroma && !dPalindroma && !iPalindroma) 
	{
		//Caso no sea distinguido
		std::cout << "La palabra no es distinguida" << std::endl;
	}
	else
	{
        std::cout << "La palabra ES porque es:"<< std::endl;
        if(palindroma) std::cout << "palindroma "<< std::endl;
        if(dPalindroma) std::cout << "d-palindroma"<<std::endl;
        if(iPalindroma)std::cout<< "i-palindroma" << std::endl;

	}
	return 0;

}
