#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int A[3][3],B[3][3];
	int i,j;	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	changeMatrix(A,B);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d-",B[i][j]);
		}
	}
	return 0;
}

void changeMatrix(int array1[3][3],int temp[3][3]){
	int i=0,j=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			temp[j][i]=array1[i][j];
		}
	}
}
