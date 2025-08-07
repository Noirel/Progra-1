#include "Contenedora.h"

Contenedora::Contenedora()
{
	for(int i=0;i<TAM;i++)
	{
		v1[i] = 0;
		v2[i] = Estudiante();
	}
}

Contenedora::Contenedora(int tm)
{
	for (int i = 0; i < tm; i++)
	{
		v3[i] = new int(0);
		v4[i] = new Estudiante();
	}
}

Contenedora::~Contenedora()
{
	delete v1;
	delete v2;
	delete v3;
	delete v4;
}


