#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>0){

    for(int i=1; i<=n; i=i+1)
    {
    
        printf("%d ", i);
    }
    }
    else{
        for(int i=1; i>=n; i=i-1)
    {
        printf("%d ", i);
    }
    }
    return 0;
}