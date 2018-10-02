#include <stdio.h>

void drawrec(int height,int width)
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

void drawvertTan(int height,int type)
{
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
    }
    printf("\n");
}

int main()
{

    int choice,height,width,type;

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
            drawrec(height,width);
            break;

        case 2:
            printf("Enter height ,type : ");
            scanf("%d %d",&height,&type);
            drawvertTan(height,type);

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
