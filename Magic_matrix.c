#include <stdio.h>
int main() {
    int i,j,n,k;
    printf("Enter order of magic matrix");
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            matrix[i][j]=0;
    }
    
    matrix[n/2][n-1]=1;
    i=n/2;
    j=n-1;
    for(k=2;k<=n*n;k++)
    {
        i=i-1;
        j=j+1;
        if(i==-1 && j!=n)
            i=n-1;
        else if(i!=-1 && j==n)
            j=0;
        else if(i==-1 && j==n)
        {
            i=0;
            j=n-2;
        }
        
        if(matrix[i][j]!=0)
        {
            i=i+1;
            j=j-2;
            matrix[i][j]=k;
        }
        
        else
            matrix[i][j]=k;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    }
