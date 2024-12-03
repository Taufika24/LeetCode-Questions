#include <stdio.h>

int main() {
    int n,i;
    printf("Enter number of elements");
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++){
    printf("Enter element");
    scanf("%d",&nums[i]);}
    
    int j,prod=1;
    int answer[n];
    for(i=0;i<n;i++)
    {
        prod=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                prod=prod*nums[j];
            }
        }
        answer[i]=prod;
    }  

    for(i=0;i<n;i++)
        printf("%d ",answer[i]);
    }
