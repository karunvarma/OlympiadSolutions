
#include <cstdio>
int main(){
       	double otavio,bruno,flavio;
       	scanf("%lf %lf %lf",&otavio,&bruno,&flavio);
       	if (otavio < bruno && otavio < flavio) printf("Otavio\n");
       	else if (bruno < otavio && bruno < flavio) printf("Bruno\n");
       	else if (flavio < otavio && flavio < bruno) printf("Ian\n");
       	else printf("Empate\n");
       	return 0;
}





