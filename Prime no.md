https://www.spoj.com/problems/PRIME1/
```C
// inefficient menthod:
#include<stdio.h>
#include<math.h>
//solution for prime no. generators.
// given two no. generate all the prime no.s in between
// t test cases, the first input line
int isprime(unsigned long int x);

int main()
{
     int t;
    scanf("%lu",&t);
    for(int i=0;i<t;i++)
    {
        unsigned long int m,n;
        scanf("%lu%lu",&m,&n);

        if(m%2==1){
 for(unsigned long int i=m;i<=n;i+=2)
        {
            if(isprime(i))
            printf("%lu\n",i);
        }
        }
        else{
             for(unsigned long int i=m+1;i<=n;i+=2)
        {
            if(isprime(i))
            printf("%lu\n",i);
        }
        }
       
    }
}
int isprime(unsigned long int x)
{
    if(x==1)
    return 0;
    for(int i=2; i<sqrt(x); i++) // sqrt a and not a/2 becuz, then it will have more than 1 factors, and won't be prime anymore
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
```
Time limit exceeds for this soln
time complexity: let (m-n)=N
N(N^1/2)t (approx= N(N^1/2))

Found: **Sieve of Eratosthenes** method: most efficient algo for this.

- What's this method?  
Start from the beginning, when a prime no. is found, mark  all its multiple in the range as they can't be prime. Don't check the marked ones as we proceed.
Implementation:
For first n no.s, we can have an array of that size and do the operation.  
Run the loop only till sqrt(n) because, if not sruck till then, can't be struck later.
![image](https://user-images.githubusercontent.com/64036955/127141820-290d9d8c-1ff7-4e35-b5fe-9ee4cf576519.png)

```C
#include<stdio.h>
#include<math.h>

struct node{
   unsigned long int val; //noted
    int isprime;

};

int prime(unsigned long int x)
{
if(x==1)
return 0;
for(int i=2; i<sqrt(x); i++)
{
    if(x%1==0)
    return 0;
}
return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        unsigned long int m,n;
        scanf("%lu%lu",&m,&n);
        struct node num[n-m+1];
        for(unsigned long int j=0; j<(n-m+1);j++)
        {
            num[j].val= m+j;
            num[j].isprime=1;
            
        }
        // filled the array of struct
        for(int j=0; j<sqrt(n-m+1); j++) // checking loop runs till sqrt(n-m+1)
        {
            if(prime(num[j].val))// returns 1 for prime
            {
                for(unsigned long int k=(num[j].val); (j+k) < n-m+1; k+=num[j].val) // working on index
                {
                   num[j+k].isprime=0;   
                }
            }
            else num[j].isprime =0;
        }
        for(unsigned long int p=0; p<n-m+1; p++)
        {
            if(num[p].isprime)
            printf("%lu\n",num[p].val);
        }


    }
}
```
Now this one is optimised but it still doesn't cross the site's time limit for 5000+ value's.





