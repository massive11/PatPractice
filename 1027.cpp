#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("#");
    char num[13]={'0','1','2','3','4','5','6','7','8','9','A','B','C'};
    printf("%c%c%c%c%c%c",num[a/13],num[a%13],num[b/13],num[b%13],num[c/13],num[c%13]);
    return 0;
}