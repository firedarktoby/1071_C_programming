#include <stdio.h>

void tower1(int n, char from, char aux, char to)
{
    if(n==1)
        printf("%c -> %c\n", from,to);
    else
    {
        tower1(n-1,from,to,aux);
        printf("%c -> %c\n", from,to);
        tower1(n-1,aux,from,to);
    }
}

void tower2(int n, char to, char aux, char from)
{
    if(n==1)
        printf("%c -> %c\n", from,to);
    else
    {
        tower1(n-1,from,to,aux);
        printf("%c -> %c\n", from,to);
        tower1(n-1,aux,from,to);
    }
}

void tower3(int n, char from, char to, char aux)
{

}

int main()
{
    printf("tower1(n,from,aux,to)\n");
    tower1(3,'A','B','C');
    printf("\n\n");

    printf("tower2(n,to,aux,from)\n");
    tower2(3,'A','B','C');
    printf("\n\n");

    printf("tower3(n,from,to,aux)\n");
    tower3(3,'A','B','C');
    printf("\n\n");

    /*printf("tower4(n,to,from,aux)");
    tower4(3,'A','B','C');
    printf("\n\n");

    printf("tower5(n,aux,from,to)");
    tower5(3,'A','B','C');
    printf("\n\n");

    printf("tower6(n,aux,to,from)");
    tower6(3,'A','B','C');
    printf("\n\n");*/
}
