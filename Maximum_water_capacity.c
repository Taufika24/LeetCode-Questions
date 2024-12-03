#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    printf("Number of elements?");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element");
        scanf("%d",&a[i]);
    }
    int j,h,maxv=0,vol;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
                h=a[i];
            else
                h=a[j];
            vol=(abs(i-j))*h;
            if(vol>maxv)
                maxv=vol;
    }
    printf("%d",maxv);
    }
