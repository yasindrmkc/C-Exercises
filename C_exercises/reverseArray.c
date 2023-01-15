#include <stdio.h>
#include <stdlib.h>
#define SIZE 10	


int main(int argc, char *argv[]) {
	int arr[SIZE],rev[SIZE];
	int i;
	printf("Enter 10 numbers between 1 and 100:\n");
	for(i=0;i<SIZE;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>100){
			printf("Wrong number,enter it again\n");
			i--;
		}
	}
	copyRev(arr,rev);
	evenElements(arr);
	printRev(rev);
	return 0;
}
void copyRev(int arr[],int rev[]){
	int i=0,j=0;
	j=SIZE-1;
	while(j>=0){
		rev[i]=arr[j];
		i++;
		j--;
	}
}
int evenElements(int arr[]){
	int i,even=0;
	for(i=0;i<SIZE;i++){
		if(arr[i]%2==0){
			even++;
		}
	}
	printf("Number of even digits is = %d\n",even);
	return even;
}
void printRev(int rev[]){
	int i;
 	printf("The reverse array: ");
 	for(i=0;i<SIZE ;i++) 
 		printf("%5d",rev[i]);
}
