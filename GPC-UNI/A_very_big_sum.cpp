#include <cstdio>
int main()
{
	int n; scanf("%d", &n);
	long long sum = 0;
	for(int i=0; i<n; i++){
		long long a; scanf("%lld", &a);
		sum += a;
	}
	printf("%lld", sum);
	return 0;
}
