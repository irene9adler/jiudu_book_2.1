//�Ŷ��� �ڶ��� �������� ��2.1 ð������
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
                if(buf[j] > buf[j + 1])//attention ð��������
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
