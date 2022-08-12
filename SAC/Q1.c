#include <stdio.h>
#include<math.h>
int main()
{
    int a,dum,n,dum2,rem;
    int sum=0;
    printf("Enter the number: \n");
    scanf("%d",&a);
    dum=a;
    for(int i=1;i<=a;i++){
        dum=i;
        dum2=i;
        while(dum>0){
            dum=dum/10;
            n++;
        }
        while(dum2>0){
            rem=dum2%10;
            dum2=dum2/10;
            sum= sum + pow(rem,n);
        }
        if(sum==i){
            printf("the number %d is an Armstrong number \n",i);
        }
        sum=0;
        n=0;
    }
    return 0;
}
