#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char str[100000];
    scanf("%s",str);
    int len = (int)strlen(str);
    if(len==0||len==1||len==2)
    {
        printf("0");
    }else
    {
        int total = 0;
        int numP=0,numT=0;
        int flag=0;
        for(int i=0;i<len;++i)
        {
            if(str[i]=='P')
            {
                numP++;
            }
            if(str[i]=='T'&&numT>0)
            {
                numT--;
            }
            if(str[i]=='A')
            {
                if(flag==0)
                {
                   for(int j=i+1;j<len;++j)
                   {
                        if(str[j]=='T')
                        {
                            numT++;
                        }
                   }
                    flag=1;
                }
                total = (total+numP*numT)%1000000007;
            }
        }
        printf("%d",total);
    }
    return 0;
}
