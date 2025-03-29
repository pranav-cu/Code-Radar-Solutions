#include<stdio.h>
void trackPlayerRanks(int ranked[200000],int n,int player[200000],int m,int result[200000]){
    int i,j;
    for(i=m-1;i>=0;i++){
        for(j=0;j<n;j++){
            if(player[i]>=ranked[j]) result[i]=j;
            else result[i]=n;
        }
    }
}
