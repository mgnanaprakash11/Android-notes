#include<stdio.h>
void floodfill(int a[][10],int m,int n,int i,int j,int num)
{
    if(i>=m||j>=n||a[i][j]==0)
    {
        return;
    }
    if(a[i][j]==1)
    {
        a[i][j]=num;
        floodfill(a,i,j+1,m,n,num);
        floodfill(a,i+1,j,m,n,num);
        floodfill(a,i,j-1,m,n,num);
        floodfill(a,i-1,j,m,n,num);
        a[i][j]=num;

    }
}
int main()
{
   int a[10][10],m,n,i,j;
   scanf("%d %d",&m,&n);
   int b=2;
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }

   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i][j]==1)
           {
               floodfill(a,m,n,i,j,b);
           }
       }

}
for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
   }
}
