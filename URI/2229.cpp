#include <cstdio>
int main(){
	int n,teste=1;
	while(scanf("%d",&n) && (n+1)){
		int inteiro = ((1<<n)+1);
		inteiro *= inteiro;
		printf("Teste %d\n%d\n\n",teste++,inteiro);
	}
	return 0;
} 
