#include<stdio.h>
#include<stdlib.h>
void multiply(int n,int m,int **a,int p,int q,int **b,int **c)
{
    if(m==p)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<q;j++)
            {
                for(int k=0;k<n;k++)
                {
                    *(*(c+i)+j) += *(*(a+i)+k) * *(*(b+k)+j);
                }
            }
        }
    }
    else
    {
        printf("Matrix multiplication is not possible");
    }
}
void input(int n,int m,int **a)
{
    for(int i=0;i<n;i++)
	 {
	     for(int j=0;j<m;j++)
	     {
	         scanf("%d", (*(a+i)+j));
	     }
	 }
}
void output(int n,int m,int **a)
{
    for(int i=0;i<n;i++)
	 {
	     for(int j=0;j<m;j++)
	     {
	         printf("%d ",*(*(a+i)+j));
	     }
	     printf("\n");
	 }
}
void main()
{
	int n,m,p,q;
	scanf("%d%d%d%d",&n,&m,&p,&q);
	int **a,**b,**c;
	a=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<m;i++)
	{
	    *(a+i)= (int *)malloc(m*sizeof(int));
	}
    b=(int**)malloc(p*sizeof(int*));
	for(int i=0;i<q;i++)
	{
	    *(b+i)= (int *)malloc(q*sizeof(int));
	}
	if(m==p)
	{
	    c=(int**)malloc(n*sizeof(int*));
	    for(int i=0;i<q;i++)
    	{
    	    *(c+i)= (int *)malloc(q*sizeof(int));
    	}
	}
	input(n,m,a);
	input(p,q,b);
	multiply(n,m,a,p,q,b,c);
	output(n,q,c);
}
