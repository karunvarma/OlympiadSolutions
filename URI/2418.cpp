
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int i;
	double notas[5];
	for(i=0;i<5;i++){
		scanf("%lf",&notas[i]);
	}
	sort(notas,notas+5);
	printf("%.1lf\n",notas[1]+notas[2]+notas[3]);
	return 0;
} 





