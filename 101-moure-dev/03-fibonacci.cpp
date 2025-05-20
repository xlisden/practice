#include <cstdio>

int main(){
	long long n = 0;
	long long n2 = 1;
	
	for(int i=0; i<51; i++) {
		printf("%lld ", n);
		
		long long fibonacci = n + n2;
		n = n2;
		n2 = fibonacci;
	}
}
