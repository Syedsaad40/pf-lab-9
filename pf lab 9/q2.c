#include<stdio.h>
int main(){
	int b,n,w;
	printf("Enter the number of bolts:");
	scanf("%d",&b);
	printf("Enter the number of nuts:");
	scanf("%d",&n);
	printf("Enter the number of washers:");
	scanf("%d",&w);
	int bp,np,wp,tc;
	bp=b*5;
	np=n*3;
	wp=w*1;
	tc=bp+np+wp;
	printf("Number of bolts :%d\n",b);
		printf("Number of nuts :%d\n",n);
			printf("Number of washers :%d\n",w);
				printf("Check order:\n");
	if(n!>=b){
		printf("Too few nuts");
	}
	else if(w!>=2*b){
	printf("Too few washers");	
	}
	else if(n!>=b && b!>=2*w){
			printf("Too few nuts and washers");	
	}
	else{
			printf("Orders are Okay!");	
	}
	printf("Total cost is %d",tc);
	
	
	
	return 0;
}