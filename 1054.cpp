#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m*n];
    for(int i=0;i<m*n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+m*n);
    for(int i=0;i<m*n;++i)
    {
        if(a[i]==a[i+m*n/2])
        {
            printf("%d",a[i]);
            break;
        }
    }
    return 0;
}
