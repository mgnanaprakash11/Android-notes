#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    int n,a[20][20],k=1,i,j,r;
    scanf("%d",&n);
    r=ceil((double)n/2);
    //printf("%d",r);
    for(i=0;i<r;i++)
    {
       for(j=i;j<=n-i-1;j++)
        {
            a[i][j]=k++;
        }
        //rightmost
        for(j=i+1;j<=n-i-1;j++)
        {
            a[j][n-i-1]=k++;
        }
        //bottommost
        for(j=n-i-2;j>=i;j--)
        {
            a[n-i-1][j]=k++;
        }
        //leftmost
        for(j=n-i-2;j>i;j--)
        {
            a[j][i]=k++;
        }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
    }
    return 0;
}
