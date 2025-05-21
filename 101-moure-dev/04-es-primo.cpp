#include <cstdio>
#include <math.h>

bool esPrimo(int nro){
	if (nro < 2)
		return false;
		
	for(int i=2; i <= (int)pow(nro, 0.5); i++) {	
		if (nro % i == 0)
			return false;
	}
	
	return true;
}

int main(){
	for (int i=1; i<=100; i++) {
		if (esPrimo(i)) {
			printf("%d ", i);
		}
	}
}