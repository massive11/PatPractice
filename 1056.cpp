#include<cstdio>
//#include<algorithm>
using namespace std;
int main()
{
    int p,g;
    scanf("%d%d",&p,&g);
    int w[p];
    for(int i=0;i<p;++i)
    {
        scanf("%d",&w[i]);
    }
    int initial[p];
    for(int i=0;i<p;++i)
    {
        scanf("%d",&initial[i]);
    }
    int rankByg[p];
    for(int i=0;i<p;++i)
    {
        rankByg[i] = w[initial[i]];
    }

    int group1;
    if(p%g==0)
    {
        group1 =p/g; 
    }else
    {
        group1 = p/g+1;
    }
    
    int result[p];
    for(int i=0;i<p;i=i+g)
    {
        //sort(rankByg+i,rankByg+i+group1);
        for(int j=i;j<i+g-1;++j)
        {
            result[j] = group1;
        }
    }
    return 0;
}