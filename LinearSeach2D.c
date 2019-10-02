#include<stdio.h>
#include<stdlib.h>
void search(int n,int m, int a[][m],int *ele)
{
    int posi,posj=-1;
    printf("enter the element to search");
    scanf("%d",ele);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==*ele)
            {
                posi=i+1;posj=j+1;
            }
        }
    }
    if(posj==-1)
        printf("element not found");
    else
        printf("Element %d has Row index %d and Column index %d\n",*ele,posi,posj);
}
void display(int n,int m, int a[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
            
        }printf("\n");
    }
}
void main()
{
    int n,m,ele;
    printf("enter size of matrix\n");
    scanf("%d%d",&n,&m);
    if(n==0 | m==0)
    {
        printf("Size is 0");
    }
    else
    {
        int a[n][m];
        printf("enter the elements of the matrix:\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        int choice;
        printf("enter 1 for search. 2 for display\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:search(n,m,a,&ele);
            break;
            case 2:display(n,m,a);
            break;
            default:printf("Wrong choice");
            exit(0);
        }
    }
}
