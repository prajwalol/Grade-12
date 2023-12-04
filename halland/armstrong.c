// ask a nber and check whether it is “ARMSTRONG” or not.
#include <stdio.h>
#include <math.h>
char *arm(int);
int main()
{
    int n;
    char *ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans = arm(n);
    printf("%s", ans);
    return 0;
}
char *arm(int n)
{
    int m = n, r, a = 0;
    while (m != 0)
    {
        r = m % 10;
        a = a + r * r * r;
        m = m / 10;
    }
    if (a == n)
        return "Armstrong ho";
    else
        return "haina lol";
}