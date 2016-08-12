#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[10],end,far,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    end=far=0;
    for(i=0;i<n;i++)
    {
     end=end+a[i];
     if(end<0)
            end=0;
     else if(far<end)
     {
         far=end;
     }
    }
    printf("%d",far);
      return 0;


    }

