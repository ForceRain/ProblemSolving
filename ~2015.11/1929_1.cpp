#include <stdio.h>
#include <string.h>
#include <math.h>
unsigned char sieve[(1000000+7)/8+1];
inline bool isPrime(int k){
    return sieve[k>>3]&(1<<(k&7));
}
inline void setComposite(int k){
    sieve[k>>3]&=~(1<<(k&7));
}
int main (){
    int M,N;
    scanf("%d %d",&M,&N);
    memset(sieve,255,sizeof(sieve));
    int sqr = (int)sqrt((double)N);
    setComposite(0); setComposite(1);
    for(int i=2;i<=sqr;++i){
        if(isPrime(i))
            for(int j=i*i;j<=N;j+=i)
                setComposite(j);
    }
    for(int i=M;i<=N;++i)
        if(isPrime(i))
            printf("%d\n",i);
    return 0;
}