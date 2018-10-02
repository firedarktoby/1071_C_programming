#include<stdio.h>
#include<math.h>

int main(){
	
	float BMI,weight,height;
	 
	printf("Enter weight(kg) and height(cm): ");
	scanf("%f%f",&weight,&height);

	while(weight>=0 && height>=0){
		BMI=weight/(height*height)*10000;
		printf("Your BMI is %.2f\n",BMI);
		if(BMI<18.5){		
			printf("體重過輕\n");
			}
		else if(BMI<24)
			printf("體重適中\n");			
		else if(BMI<=27)
			printf("過重\n");
			
		else if(BMI<30)
			printf("輕度肥胖\n");
			
		else if(BMI<35)
			printf("中度肥胖\n");
			
		else printf("重度肥胖\n");
			
			printf("Enter weight and height: ");
			scanf("%f%f",&weight,&height);
	}		
}
