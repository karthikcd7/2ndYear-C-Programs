#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int t,sum=0;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        compute(n,&sum);
        output(sum);
    }
    return 0;
}
void compute(int n, int *sum){
    *sum=0;
    for(int i=1; i<n; i++){
        if(i%3 == 0| i%5 == 0){
            *sum += i;
        }
    }
}
void output(sum)
{
    printf("%d\n",sum);
}
