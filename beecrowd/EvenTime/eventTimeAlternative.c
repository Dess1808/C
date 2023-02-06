/*
    versao tirada
    https://devsenv.com/example/-1061-beecrowd-online-judge-solution-1061-event-time-solution-in-c,-c++,-java,-python-and-c-
*/

#include<stdio.h>

int main(void)
{
    char a[4], b[2],c[2],d[2],e[2],f[4];
    int i,j,k,l,m,n,p,q,r,s,t,u,v,w,x,y,z,h[5];
    scanf("%s%d", a,&i);
    scanf("%d%s%d%s%d", &j,b,&k,c,&l);
    scanf("%s%d", f,&p);
    scanf("%d%s%d%s%d", &q, d,&r,e,&s);

    m=60-l+s;
    n=(60-k-1+r)*60;
    t=(24-1-j+q)*3600;
    u=(p-i-1)*86400;
    v=m+n+t+u;

    h[0]=v/86400;
    printf("%d dia(s)n\n", h[0]);

    h[0]=v%86400;
    h[1]=h[0]/3600;
    printf("%d hora(s)n\n", h[1]);

    h[1]=h[0]%3600;
    h[2]=h[1]/60;
    printf("%d minuto(s)n\n", h[2]);

    h[2]=h[1]%60;
    printf("%d segundo(s)n\n", h[2]);

    return 0;
}