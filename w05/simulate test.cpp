#include<stdio.h>


int encode(int N) {
	int a,b,c,d,tem;
	a=N/1000;
	b=N/100-10*a;
	c=N/10-10*b-100*a;
	d=N-10*c-100*b-1000*a;
	tem=c;
	c=(a+5)%10;
	a=tem;
	tem=d;
	d=b;
	b=tem;
	return a*1000+b*100+c*10+d;
}
int decode(int ans){
	int a,b,c,d,tem;
	a=ans/1000;
	b=ans/100-10*a;
	c=ans/10-10*b-100*a;
	d=ans-10*c-100*b-1000*a;
	tem=c;
	
	
}






int main() {

	int choice;
	int num1, num2;
	float h1,h2,BMI,w1,w2;
	int height;
	int N,ans;

	while(1) {

		printf("Main menu\n");
		printf("(1) Arithmetic Computation\n");
		printf("(2) List BMI ranges\n");
		printf("(3) Draw Four Vertical Triangles\n");
		printf("(4) encode(n)\n");
		printf("(5) decode(n)\n");
		printf("(6) Exit\n");
		scanf("%d",&choice);
		if(choice==6) {
			printf("Bye! Coding by 407411049\n");
			break;
		}
		switch(choice) {


			case 1:
				printf("Enter two integers: ");
				scanf("%d %d",&num1,&num2);

				printf("%d + %d= %d\n",num1,num2,num1+num2);
				printf("%d - %d= %d\n",num1,num2,num1-num2);
				printf("%d * %d= %d\n",num1,num2,num1*num2);
				printf("%d / %d= %d\n",num1,num2,num1/num2);
				printf("%d %% %d= %d\n",num1,num2,num1%num2);
				printf("\n");
				break;
			case 2:
				printf("Enter height(-1 to exit):");
				scanf("%f %f",&h1,&h2);
				while(h1>0 || h2>0) {
					for(int i=h1; i<=h2; i++) {
						w1=(18.5*i*i)/10000.;
						w2=(24*i*i)/10000.;
						printf("%4d cm: %.1f ~ %.1f (kg)\n",i,w1,w2);
					}
					printf("\n");
					break;
				}
			case 3:
				printf("Enter height (-1 to exit): ");
				scanf("%d",&height);
				while(height>0) {
					for(int i=1; i<=height; i++) {
						for(int j=1; j<=height-i; j++)
							printf(" ");
						for(int t=1; t<=i; t++)
							printf("*");
						for(int y=2; y>=1; y--)
							printf(" ");

						for(int g=1; g<=i; g++)
							printf("*");
						printf("\n");
					}
					printf("\n");
					break;
				}
			case 4:
				while(N>0) {
					printf("Enter N(-1 to exit): ");
					scanf("%d",&N);
					ans=encode(N);
					printf("encode(%d) = %d\n",N,ans);
						
				}
				break;
			case 5:
				while(ans>0)
		}
	}

}

