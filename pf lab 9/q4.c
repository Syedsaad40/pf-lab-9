#include<stdio.h>
#include<string.h>

int main(){
char arr[5][20]={"Alice","Harry","Charlie","Dianna","Eve"};
char arr1[20];
printf("Enter a name to search:");
scanf(" %s",arr1);
int found=0;
for(int i=0;i<5;i++){
		if(strcmp(arr[i], arr1) == 0){
			found=1;
	
		}
}
if(found){
	printf("Found..\n");
}
else{
	printf("Not Found..\n");
}
return 0;
}