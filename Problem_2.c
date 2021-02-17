//You will be given a positive integer 'n'. Your task is to print the first 'n' terms of the fibonacci series.
//Example
//Input: 4
//Output: 0 1 1 2


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n\n");
    scanf("%d", &n);

    //Write your code here
    int a=0 , b=1 , i , c ;
    for(i=1 ; i<=n ; i++) 
    {
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
    }                                                                                                            

    return 0;
}
