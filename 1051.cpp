#include<cstdio>
#include<stack> 
#include<iostream>
#include<cstring>
const int maxn = 1010;
int num[maxn];
using namespace std;
int main()
{
    int m,n,k;
    scanf("%d%d%d",&m,&n,&k);
    stack<int> s;
    for(int i=0;i<k;++i)
    {
        for(int j=0;j<n;++j)
        {
            scanf("%d",&num[j]);
        }
        int pos=0;
        int flag=0;
        while(s.size())
        {
            s.pop();//make stack empty
        }
        for(int j=1;j<=n;++j)//imitate this process
        {
            s.push(j);//push j into stack
            if(s.size()>m)//the number in stack can't over its capacity
            {
                flag=1;
                break;
            }
            while(s.size()&&s.top()==num[pos])
            {
                ++pos;
                s.pop();
            }
        }
        if(flag==0&&s.size()==0)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }  
    }
    return 0;
}