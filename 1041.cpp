#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int bets[n];
    int num[10001];
    for(int i=0;i<10002;++i)
    {
        num[i]=0;
    }
    for(int i=0;i<n;++i)
    {
        scanf("%d",&bets[i]);
        num[bets[i]]=1;
    }
    int ans=0;
    for(int i=0;i<10002;++i)
    {
        if(num[bets[i]]==0)
        {
            ans=1;
            printf("%d",bets[i]);
            break;
        }
    }
    if(ans==0)
    {
        printf("None");
    }
    
    return 0;
}
