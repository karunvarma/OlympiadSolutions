
#include <cstdio>
int main(){
	int n,davez;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&davez);
		printf("%d\n",(1<<davez)-1);
	}
	return 0;
}





