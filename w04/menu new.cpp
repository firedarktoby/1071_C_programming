#include <stdio.h>


void prchar(char c,int n){
	for(int i=1;i<=n;i++)
		printf("%d",c);
}

void drawRect(int height,int width,int filled)
{
    int i,j;
    if(filled)
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
                printf("*");
            printf("\n");
        }

    }
    else
    {
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
    }
}






void drawvertTan(int height,int type,int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
                printf("*");
            printf("\n");
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                printf("*");
                printf("",i-2);
                printf("*");
            }
            printf("\n");
        }

        break;
    }



}







int main()
{

    int choice,height,width,type,filled;

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
            printf("Enter height, width, filled: ");
            scanf("%d %d %d", &height,&width,&filled);

            drawRect(height,width,filled);

            break;

        case 2:
            printf("Enter height ,type, filled: ");
            scanf("%d %d %d",&height,&type,&filled);

            drawvertTan(height,type,filled);

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
            }
            printf("\n");
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
            }
            printf("\n");
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
            }
            break;
        }
    }
}
