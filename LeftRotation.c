#include<stdio.h>
main()
{
    int a[1000000],i,j,n,d,temp;

    scanf("%d",&n);
    scanf("%d",&d);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<d;i++)
    {
        temp=a[0];
        for(j=0;j<n;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
