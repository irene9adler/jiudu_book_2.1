//»úÊÔÊé sortÅÅĞò2.1
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int a [100];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
