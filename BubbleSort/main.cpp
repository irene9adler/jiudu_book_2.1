//九度书 第二章 经典入门 例2.1 冒泡排序
#include <stdio.h>

int main()
{
    int buf[100];
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,j;
        for(i = 0;i < n;i++)
        {
            scanf("%d",&buf[i]);
        }
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n - i - 1;j++)//attention
            {
                if(buf[j] > buf[j + 1])//attention 冒泡排序含义
                {
                    int tmp = buf[j];
                    buf[j] = buf[j + 1];
                    buf[j + 1] = tmp;
                }
            }
        }

        for(i = 0;i < n;i++)
            printf("%d ",buf[i]);
        printf("\n");
    }
    return 0;
}
