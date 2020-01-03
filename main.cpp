#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int bets[n];
    int num[10001];
    for(int i=0;i<10001;++i)
    {
        num[i]=-1;
    }
    for(int i=0;i<n;++i)
    {
        scanf("%d",&bets[i]);
        if(num[bets[i]]==0)
        {
            num[bets[i]]=1;
        }
        if(num[bets[i]]==-1)
        {
            num[bets[i]]=0;
        }
    }
    int ans=0;
    for(int i=0;i<n;++i)
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
