#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

float ingressos(int nml, int vip, int etd)
{
	float conta;
	
	conta = (nml * 50) + (vip * 100) + (etd * 25);
	
	return conta;
}
