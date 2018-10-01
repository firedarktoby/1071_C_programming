#include <stdio.h>

int main()
{

    int choice,height,width,type,typechoice;

    while(1)
    {
        printf("main menu\n");
        printf("1. rectangle\n");
        printf("2. vertical tangle\n");
        printf("3. exit\n");
        printf("==> ");
        scanf("%d", &choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter height and width: ");
            scanf("%d %d", &height,&width);
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=width; j++)
                {
                    if(i==1 || j==1 || i==height || j==width)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 2:
        	printf(" meun\n");
        	printf("一.type-1 ");
        	printf("二.type-2 ");
        	printf("三.type-3 ");
        	printf("四.type-4 ");
        	printf("五. exit\n");
        	printf("==>");
        	scanf("%d", &typechoice);
        	if(typechoice==5)break;
        	switch(typechoice)
			{
        	case 1:
	            printf("Enter height and type: ");
	            scanf("%d %d",&height,&type);
	            
	            for(int i=1; i<=height; i++)
	            {
	                for(int j=1; j<=type; j++)
	                {
	                    if(i==height || j==1 || i==j )
	                        printf("*");
	                    else
	                        printf(" ");
	                }
	                printf("\n");
	            }break;
	        case 4:
	            printf("Enter height and type: ");
	            scanf("%d %d",&height,&type);
	            
	            for(int i=1; i<=height; i++)
	            {
	                for(int j=1; j<=type; j++)
	                {
	                    if(i==1 || j==type || i==j )
	                        printf("*");
	                    else
	                        printf(" ");
	                }
	                printf("\n");
	            }break;
	        case 2:
	            printf("Enter height and type: ");
	            scanf("%d %d",&height,&type);
	            
	            for(int i=1; i<=height; i++)
	            {
	                for(int j=1; j<=type; j++)
	                {
	                    if(i==height || j==type || (i+j)==(type+1) )
	                        printf("*");
	                    else
	                        printf(" ");
	                }
	                printf("\n");
	            }break;
	        case 3:
	            printf("Enter height and type: ");
	            scanf("%d %d",&height,&type);
	            
	            for(int i=height; i>=1; i--)
	            {
	                for(int j=1; j<=type; j++)
	                {
	                    if(i==height || j==1 || i==j )
	                        printf("*");
	                    else
	                        printf(" ");
	                }
	                printf("\n");
	            }break;
	        }break;
        }
    }
}
