#include <stdio.h>

int main()
{
    int n,i,ans;
    //printf("Enter positive integer number :");
    scanf("%d", &n);

    for(i=2;i<=10;i++)
    {
        ans=n*i;
        printf("%d x %d = %d\n",n,i,ans);
    }

    return 0;
}
