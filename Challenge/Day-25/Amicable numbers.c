#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define N 100001

int main(void){
    bool *sieve=(bool *)malloc(N*sizeof(bool));
    sieve[0]=false;
    sieve[1]=false;
    for(int i=2;i<N;i++){
        sieve[i]=true;
    }

    int rcn=sqrt(N);
    for(int i=2;i<=rcn;i++){
        for(int j=2*i;j<N;j+=i){
            sieve[j]=false;
        }
    }

    int *primeFactors=(int *)malloc((N/2)*sizeof(int));
    int count=0;
    for( int i=0;i<N;i++){
        if(sieve[i]){
            primeFactors[count++]=i;
        }
    }

    primeFactors=realloc(primeFactors,count*sizeof(int));
    int *amicable=(int *)malloc(N*sizeof(int));
    amicable[0]=0;
    for(int i=1;i<N;i++){
        if ( sieve[i] == true ) {   //*****Check if prime
            amicable[i]=1;            
            continue;
        }
        int number=i;
        int sum=1;
        int index=0;
        while(number>1){
            if (sieve[number] == true) {   //*****Check if prime
                sum*= (pow(number, (1 + 1)) - 1)/(number - 1);
                break;
            }
            int power=0;
            while(number%primeFactors[index]==0){
                number/=primeFactors[index];
                power++;
            }
            sum*=(pow(primeFactors[index],power+1)-1)/(primeFactors[index]-1);
            index++;
        }
        amicable[i]=sum-i;
    }

    int repetition,n,amicaTest,k=0;
    scanf("%d",&repetition);
    while(k<repetition){
        int amicaSum=0;
        scanf("%d",&n);
        int i=1;
        while(i<n){
            amicaTest=amicable[i];
            if(amicaTest <N){
            if(i==amicable[amicaTest] && i!=amicaTest ){  
                amicaSum+=i;
            }
            }
            i++;
            
        }
    printf("%d\n",amicaSum);
    k++;
    }
return 0;
}