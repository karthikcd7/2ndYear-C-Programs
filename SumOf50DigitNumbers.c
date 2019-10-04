#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char input[50];
    int output[51]={0};
    int temp[50];
    int count =0;
    scanf("%d",&n);

    while(n>0)
    {
        n--;
        scanf("%s",input);
        for (int i=strlen(input);i>=0;i--)
        {
            temp[i]=(input[i]-'0');
        }
        int rem=0,q=0,k=50;
        for(int i=50;i>=0;i--)
        {
            output[k]+=temp[i-1];
            if(output[k]>=10)
            {
                rem=output[k]%10;
                q=output[k]/10;
                output[k]=rem;
                output[k-1]+=q;
            }k--;
        }
    }

    for(int i=0;i<10;i++)
    {
        printf("%d",output[i]);
    }
}
