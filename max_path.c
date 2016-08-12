#include<stdio.h>
int sum1=0;
void maxpath(int a[][10],int i,int j,int m,int n,int sum);
int main()
{
    int m,n,i,j,sum=0;
    int a[10][10];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    maxpath(a,0,0,m,n,sum);
    printf("%d",sum1);
    return 0;
}
void maxpath(int a[][10],int i,int j,int m,int n,int sum)
{

    if(i>=m||j>=n)
    {
        return;
    }
    if(i==m-1&&j==n-1)
    {
        printf("%d",a[i][j]);
         sum=sum+a[i][j];
         if(sum>sum1)
        {
            sum1=sum;
        }
        printf("\n");
        sum=0;
    }
    printf("%d-->",a[i][j]);
     sum=sum+a[i][j];
     maxpath(a,i,j+1,m,n,sum);
     maxpath(a,i+1,j,m,n,sum);
}
