bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0,j,len;
        len= sizeof(flowerbed)/sizeof(int);
        for(i=0;i<len;i++)
        {
            if(flowerbed[i]==1)
            {
                i=i+2;
                if (flowerbed[i+1]==0 && flowerbed[i-1]==0)
                {
                    flowerbed[i]=1;
                    n=n-1;
                }
            }

            else if(flowerbed[i]==0)
            {
                if(flowerbed[i+2]==0)
                {    
                    flowerbed[i+1]=1;
                    n=n-1;
                }
                
            }

            if(n==0)
            {
                for(j=0;j<len;j++)
                    printf("%d ",flowerbed[j]);

                return true;
            }
        
            
        
    }
    return false;
    }
