<<<<<<< HEAD
#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	int array[n];
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	for(int i=n-1; i>=0; i--){
		printf("%d ", array[i]);
	}
	return 0;
=======
#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	int array[n];
	
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	for(int i=n-1; i>=0; i--){
		printf("%d ", array[i]);
	}
	return 0;
>>>>>>> 325cff0e1fc5acc28b9bea7b6741cf84d2a47ecc
}