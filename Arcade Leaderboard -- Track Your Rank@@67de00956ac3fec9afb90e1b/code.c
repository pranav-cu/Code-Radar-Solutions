#include<stdio.h>
int trackPlayerRanks(ranked,n,player,m,result){
    int i,j;
    for(i=m-1,i>=0;i++){
        for(j=0;j<n;j++){
            if(player[i]>=ranked[j]) result[i]=j;
            else result[i]=n
        }
    }
}

int main{}{
    int i,n,m;
    scanf("%d",&n);
    int ranked[200000];
    for(i=0;i<n;i++){
        scanf("%d",&ranked[i])
    }
    scanf("%d",&m);
    int player[200000];
    for(i=0;i<m;i++){
        scanf("%d",&player[i]);
    }
    int result[200000];
    trackPlayerRanks(ranked,n,player,m,result);
    for(i=0;i<m;i++) printf("%d\n",result[i]);
    return 0;
}