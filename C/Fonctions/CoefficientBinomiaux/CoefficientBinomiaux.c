#include <stdio.h>
#include <stdlib.h>

int CoeffBinome(int n,int p)
{   
    if (n<2)
    {
        return 1;
    }
    if (p==0 || p==n)
    {
        return 1;
    }else
    {
        return CoeffBinome(n-1,p-1)+CoeffBinome(n-1,p);
    }
}


int CoeffBinomeIteratif(int n, int p )
{
    int fact_n=1,fact_p=1,fact_n_p=1;
    if (p==n || p==0)
    {
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
        fact_n*=i;
    }
    for(int i=1;i<=p;i++)
    {
        fact_p*=i;
    }
    for(int i=1;i<=n-p;i++)
    {
        fact_n_p*=i;
    }
    return fact_n/(fact_p*fact_n_p);
}
int puissance(int x ,int y );
int BinomeNewton( int x, int y)
{
    int n,somme=0;
    printf("Entrez n: ");
    scanf("%d",&n);
    for (int p=0;p<=n;p++)
    {
        somme+=CoeffBinome(n,p)*puissance(x,n-p)*puissance(y,p);
    }
    return somme;
}

int puissance(int x ,int y )
{
    int res=1;
    for (int i=0;i<y;i++)
    {
        res*=x;
    }
    return res;
}

int main()
{
    int n,p;
    printf("Entrez n et p : ");
    scanf("%d %d",&n,&p);
    printf("Le coefficient binomial C(%d,%d) est : %d\n",n,p,CoeffBinome(n,p));
    printf("Le coefficient binomial C(%d,%d) est : %d\n",n,p,CoeffBinomeIteratif(n,p));
    printf("Le resultat de (x+y)^n est : %d\n",BinomeNewton(2,3));
    return 0;
}