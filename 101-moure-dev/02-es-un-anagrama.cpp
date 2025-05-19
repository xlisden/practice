#include <cstdio>
#include <string>

void setMinusculas(char palabra[]) {
	int size = strlen(palabra);		
    for (int i = 0; i < size; i++) {
        palabra[i] = tolower(palabra[i]);
    }
}

void ordenar(char palabra[])
{
	int size = strlen(palabra);	
	
	for(int i=0; i<size; i++)
	{
		for (int j=i+1; j<size; j++)
		{
			if ((int)palabra[i] > (int)palabra[j] && i != j)
			{
				char temp = palabra[i];
				palabra[i] = palabra[j];
				palabra[j] = temp;				
			}				
		}
	}
}

bool esUnAnagrama(char primero[], char segundo[])
{
    setMinusculas(primero);
    setMinusculas(segundo);
		
	if (strcmp(primero, segundo) == 0)
		return false;
	
	if (strlen(primero) != strlen(segundo))
		return false;
		
	ordenar(primero);
	ordenar(segundo);
	
//	printf(primero);
//	printf("\n");
//	printf(segundo);
//	printf("\n");
	
	if (strcmp(primero, segundo) == 0)
		return true;
		
	return false;
}

/*
	a-z 97-122
*/
void obtenerAscii()
{
	for(int i=0; i<255; i++)
	{
		printf("%d => %c\n", i, (char)i);
	}
}

int main()
{
	char primero[] = "AMOR";
	char segundo[] = "roma";
	
	if (esUnAnagrama(primero, segundo)) {
		printf("true\n");
	} else {
		printf("false\n");
	}	
	
//	char palabra[] = "vaca";
//	ordenar(palabra);
}