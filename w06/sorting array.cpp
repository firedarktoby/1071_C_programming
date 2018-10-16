#include<stdio.h>

void sorting(int d[],int n) {
	int temp;
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-i-1; j++) {

			if(d[j]>d[j+1]) {
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}

}

void prArray(int d[],int n){
	for(int i=0;i<n;i++)
		printf("%3d",d[i]);
	printf("\n");
}


int main() {

	int d[10] = {10,15,88,78,11,55,99,1,23,8};
	int n=10;
	
	
	printf("Original: ");
	prArray(d,n);
	sorting(d,n);
	printf("before:   ");
	prArray(d,n);

}



