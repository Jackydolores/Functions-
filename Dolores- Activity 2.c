#include<stdio.h>

int main()
{
    
    int num, A, B, C, D, E, N ;
    printf("Enter five numbers :\n");
    
    scanf("%d", &A) ;
    scanf("%d", &B) ;
    scanf("%d", &C) ;
    scanf("%d", &D) ;
    scanf("%d", &E) ;
    
    num=A+B+C+D+E ;
       N=num/5 ;
    printf("average: %d" ,N) ;
    return 0;
    
}