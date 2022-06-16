#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T,n,i;
    double r,Ac,At,Ar,pi=3.141593,Ot,Oc,Or,f[1000];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lf",&r);
        Ac=(pi*r*r);
        At=(0.5*r*r);
        Ar=(r*r);
        Oc=(Ac/4);
        Or=Ar-Oc;
        Ot=Oc-At;
        f[i]=Or+Ot;

    }
    for(i=0;i<T;i++)
    printf("Case #%d: %.2lf\n",i+1,f[i]);
    return 0;
}
