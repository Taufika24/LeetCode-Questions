#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter number of elements");
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++){
    printf("Enter element");
    scanf("%d",&nums[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            for(j=i;j<n-1;j++)
            {
                nums[j]=nums[j+1];
            }
            nums[j]=0;
        }
    }
    
    for(i=0;i<n;i++)
    printf("%d ",nums[i]);

    }
