
#include <cstdio>
typedef long long ll;
int main(){
	ll n;
	while(scanf("%lld",&n) && n){
		printf("1");
		for(ll i=2;i*i<=n;i++){
			printf(" %lld",i*i);
		}
		printf("\n");
	}
	return 0;
}





