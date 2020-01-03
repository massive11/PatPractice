#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct Student{
    char name[14];//准考证号
    int loc;//组别
    int locrange;//组内排名
    int score;
}stu[30001];

bool cmp(Student a,Student b)
{
    if(a.score!=b.score)
    {
        return a.score>b.score;
    }else
    {
        return strcmp(a.name,b.name)<0;
    }
}

int main()
{
    int person=0;//总人数
    int totalN;//组数
    scanf("%d",&totalN);
    for(int i=0;i<totalN;i++)
    {
        int num;//组内人数
        scanf("%d",&num);
        for(int j=0;j<num;++j)
        {
            scanf("%s %d",stu[person].name,&stu[person].score);
            stu[person].loc = i+1;
            person++;
        }
        sort(stu+person-num,stu+person,cmp);//排序
        stu[person-num].locrange = 1;//将最大值的排名记为1
        for(int j=person-num+1;j<person;++j)
        {
            if(stu[j].score==stu[j-1].score)
            {
                stu[j].locrange = stu[j-1].locrange;
            }else
            {
                stu[j].locrange = j+1-(person-num);
            }
        }
    }
    printf("%d\n",person);
    sort(stu,stu+person,cmp);
    int r=1;
    for(int i=0;i<person;++i)
    {
        if(i>0&&stu[i].score!=stu[i-1].score)
        {
            r=i+1;
        }
        printf("%s ",stu[i].name);
        printf("%d %d %d\n",r,stu[i].loc,stu[i].locrange);
    }
    return 0;
}