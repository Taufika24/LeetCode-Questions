#include <stdio.h>
int main() {
    char s[20]="aaaaaaaabbbbbcccccc";
    char s2[20];
    int i,count,j=0;
    char k,c;
    k=s[0];
    count=1;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==k)
        {
            count++;
            c=count+'0';
        }
        
        s2[j]=k;
        s2[j+1]=c;
        
        if (s[i]!=k)
        {    k=s[i];
            count=1;
            j=j+2;
        }
    }
    
    for(i=0;s2[i]!='\0';i++)
        printf("%c ",s2[i]);
    }
