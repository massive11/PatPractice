#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    do
    {
        sum+=n%10;
        n/=10;
    }while(n>0);
    int a[100];
    int i=0;
    do
    {
        a[i] = sum%10;
        i++;
        sum/=10;
    } while (sum>0);
    for(int j=i-1;j>=0;j--)
    {
        switch(a[j])
        {
            case 0:printf("zero");break;
            case 1:printf("one");break;
            case 2:printf("two");break;
            case 3:printf("three");break;
            case 4:printf("four");break;
            case 5:printf("five");break;
            case 6:printf("six");break;
            case 7:printf("seven");break;
            case 8:printf("eight");break;
            default:printf("nine");
        }
        if(j>0)
        {
            printf(" ");
        }
    }
    return 0;
}
