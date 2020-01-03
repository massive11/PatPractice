#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int n;//行数
    scanf("%d",&n);
    int ea[n];//到达的时间
    int mea = 9900000;
    char me[16];//名称

    int la[n];//离开的时间
    int mla = 0;
    char ml[16];
    
    for(int j=0;j<n;j++)
    {
        char ans[3][16];//字符串
        scanf("%s %s %s",ans[0],ans[1],ans[2]);
        ea[j] = (ans[1][0]-'0')*100000+(ans[1][1]-'0')*10000+(ans[1][3]-'0')*1000+(ans[1][4]-'0')*100+(ans[1][6]-'0')*10+(ans[1][7]-'0');
        if(mea>ea[j])
        {
            mea = ea[j];
            for(int m=0;m<strlen(ans[0]);m++)
            {
                me[m] = ans[0][m];
            }
        }
        
        la[j] = (ans[2][0]-'0')*100000+(ans[2][1]-'0')*10000+(ans[2][3]-'0')*1000+(ans[2][4]-'0')*100+(ans[2][6]-'0')*10+(ans[2][7]-'0');
        if(mla<la[j])
        {
            mla = la[j];
            for(int m=0;m<strlen(ans[0]);m++)
            {
                ml[m] = ans[0][m];
            }
        }
    }

    printf("%s %s",me,ml);
    return 0;
}
