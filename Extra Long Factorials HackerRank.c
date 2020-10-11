#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a[10000];
    int i,n,l=1,c,j,d;
    scanf("%d",&n);
    for(i=0;i<10000;i++)
    a[i]=-1;
    a[0]=1;
    for(i=n;i>1;i--){
        c=0;
        for(j=0;j<l;j++) {
            d=a[j]*i+c;
            a[j]=d%10;
            c=d/10;
            if((c!=0)) {
                while(c>0){
                    if(a[j+1]==-1){
                        while(c>0){
                            l++;
                            a[++j]=c%10;
                            c=c/10;
                        }
                        break;
                    }
                    d=a[++j]*i+c;
                    a[j]=d%10;
                    c=d/10;
                }
            }
        }
    }
    for(i=l-1;i>=0;i--)
    printf("%d",a[i]);
    return 0;
}
