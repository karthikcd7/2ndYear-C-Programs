#include<stdio.h>
#include<stdlib.h>
void input(int n,int m,int **a);
void sparse(int n,int m,int **a,int **b,int *num);
void output(int n,int **b);
void main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int **a;
    a=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<m;i++)
    {
        *(a+i)=(int *)malloc(m*sizeof(int));
    }
    input(n,m,a);
    int num;	
    int **b;
    b=(int **)malloc(((n*n)/2)*sizeof(int *));
    for(int i=0;i<=(n*n)/2;i++)
    {
        *(b+i)=(int *)malloc(3*sizeof(int));
    }
    sparse(n,m,a,b,&num);
    output(num,b);
}
void input(int n,int m,int **a)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
}
void output(int num,int **b)
{
    printf("\n");
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(*(b+i)+j));
        }printf("\n");
    }
}
void sparse(int n,int m,int **a,int **b,int *num)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if( *(*(a+i)+j) != 0)
            {
                *(*(b+k))=i;
                *(*(b+k)+1)=j;
                *(*(b+k)+2)=*(*(a+i)+j);
                k++;*num=k;
            }
        }
    }
}

