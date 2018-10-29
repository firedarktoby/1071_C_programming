#include<stdio.h>


int rgcd(int a,int b)
{
    if(b%a==0)
        return a;
    else
        return rgcd(b%a,a);
}

int gcd(int a,int b)
{
    int ans;
    for(int i=1; i<=a; i++)
    {
        if(b%i==0 && a%i==0)
            ans=i;
    }
    return ans;
}


int main()
{

    int a, b;

    printf("rgcd(48,126) = %d\n",rgcd(48,126),a);
    printf("gcd(48,126) = %d\n\n",gcd(48,126),a);

    printf("rgcd(48,128) = %d\n",rgcd(48,128),a);
    printf("gcd(48,128) = %d\n\n",gcd(48,128),a);

    printf("rgcd(48,144) = %d\n",rgcd(48,144),a);
    printf("gcd(48,144) = %d\n\n",gcd(48,144),a);

    printf("rgcd(48,48) = %d\n",rgcd(48,48),a);
    printf("gcd(48,48) = %d\n\n",gcd(48,48),a);



}
