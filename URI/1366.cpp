#include <cstdio>
int main(){
	int n;
	while(scanf("%d",&n) && n){
		int resposta = 0;
		while(n--){
			int x,y;
			scanf("%d %d",&y,&x);
			resposta += x/2;
		}
		printf("%d\n",resposta/2);
	}
	return 0;
}