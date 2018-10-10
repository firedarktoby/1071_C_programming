#include<stdio.h>

int deposit(int money) {
	scanf("%d",&money);
	return money;

}

int withdraw(int cost,int money) {
	scanf("%d",&cost);
	if(cost<=money) {
		return money-cost;
	} else
		printf("Insufficient balance.\n");
}

void inquiry(int money) {
	printf("Your balance is %d.\n",money);
}


int main() {

	int choice;
	int money=0;
	int cost;
	int s;

	while(1) {

		scanf("%d",&choice);
		if(choice==0)break;
		switch(choice) {

			case 1:
				money=deposit(money)+money;
				break;
			case 2:
				money=withdraw(cost,money);
				break;
			case 3:
				inquiry(money);
				break;
			case 4:
				scanf("%d",&s);
				if(s==0)break;
				switch(s) {
					case 1:
						s=1000;
						if(s<=money)
							money=money-s;
						else
							printf("Insufficient balance.\n");
						break;
					case 2:
						s=2000;
						if(s<=money)
							money=money-s;
						else
							printf("Insufficient balance.\n");
						break;
					case 3:
						s=3000;
						if(s<=money)
							money=money-s;
						else
							printf("Insufficient balance.\n");
						break;
					case 4:
						s=5000;
						if(s<=money)
							money=money-s;
						else
							printf("Insufficient balance.\n");
						break;
					case 5:
						s=10000;
						if(s<=money)
							money=money-s;
						else
							printf("Insufficient balance.\n");
						break;
					case 6:
						s=20000;
						if(s<=money)
							money=money-s;
						else
							printf("Insufficient balance.\n");
						break;


				}



		}

	}
}



