#include<stdio.h>


long fid(int n){
    if(n==0 ||n==1)
        return n;
    else
        return fid(n-1)+fid(n-2);
}




int main(){
    printf("fib(3) = %d\n",fid(3));
    printf("fib(10) = %d\n",fid(10));
    printf("fib(30) = %d\n",fid(30));
}
