#include<cstdio>
#include<algorithm>
using namespace std;

bool Compare(int a, int b)
{
    return a>b;//按照降序排列
}

int main()
{
    int n;
    scanf ("%d",&n);
    while(n!=6174)
    {
        int a[4];
        a[0] = n/1000;
        a[1] = (n-1000*a[0])/100;
        a[2] = (n-1000*a[0]-100*a[1])/10;
        a[3] = n-1000*a[0]-100*a[1]-10*a[2];
        int b[4];
        sort(a,a+4);
        b[0] = a[0];
        b[1] = a[1];
        b[2] = a[2];
        b[3] = a[3];
        sort(a,a+4,Compare);
        n=a[0]*1000+a[1]*100+a[2]*10+a[3]-(b[0]*1000+b[1]*100+b[2]*10+b[3]);
        printf("%d-%d=%d",a[0]*1000+a[1]*100+a[2]*10+a[3],b[0]*1000+b[1]*100+b[2]*10+b[3],n);
        if(n!=6174)
        printf("\n");
    }
    return 0;
}