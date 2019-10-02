#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,m,p,q;
    input1(&n,&m);
    input1(&p,&q);
    int a[n][m],b[p][q];
    int c[10][10]={0};
    input2(n,m,a);
    input2(p,q,b);
    int choice;
    printf("1.Add 2,Subtract 3.Multiply\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        if(n==p&&m==q)
            addition(n,m,a,p,q,b,c);
        else
            printf("Cant add");
        break;
        case 2:
        if(n==p&&m==q)
            subtract(n,m,a,p,q,b,c);
        else
            printf("Cant subtract");
        break;
        case 3:
        if(m==p)
            multiply(n,m,a,p,q,b,c);
        else
            printf("Cant multiply");
        break;
        default: printf("Wrong choice");
        exit(0);
    }
}
void input1(int *n,int *m)
{
    printf("enter the size:\n");
    scanf("%d%d",n,m);
}
void input2(int n,int m,int a[][m])
{
    printf("enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void addition(int n,int m,int a[][m],int p,int q,int b[][q],int c[][q])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }printf("\n");
    }
}
void subtract(int n,int m,int a[][m],int p,int q,int b[][q],int c[][q])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }printf("\n");
    }
}
void multiply(int n,int m,int a[][m],int p,int q,int b[][q],int c[][q])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<m;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",c[i][j]);
        }printf("\n");
    }
}
