#include <stdio.h>

int bigmod(long long int a,long long int b,int m);

int main() {

    int a, b, m, rem, ans;

    scanf("%lld %lld %lld", &a, &b, &m);      // Taking input a, b and m

    ans = bigmod(a, b, m);                               // getting answer from a function

    printf("%d\n", ans);                                    // printing the answer

    return 0;
}

/***********************************************************************************
 The idea behind bigmod is simple.
Let's assume, the desired remainder is x.
Then we want to determine a^b = x (mod m)
we can do it by calulating a%m and multiplying it b times and mod it every time to get the answer

(a^b)%m = ( (a%m) * (a%m) * ......... (a%m) )%m         [Time Complexity O(b)]
                          -----------------------------------------
                                                 |
                                          b times

But in this code's function we used a more time efficient approach.
That is instead of taking b times a%m , we can divide the b in little parts which we can
easily determine,
We will divide b to it's binary representation.
Let's assume b=25
Then we can divide b into these parts,

25 =  11001
25 = 16*1 + 8*1 + 4*0 + 2*0 + 1*1

So, now we can determine (a^25)%m easily,
(a^25)%m = (a^16)%m * (a^8)%m * (a^1)%m

Now, we can take a%m in a variable and keep multiplying by itself by itself,

Thus , rem = (a^1)%m
              rem = (rem * rem)%m = (a^2)%m
              rem = (rem * rem)%m = (a^4)%m
              rem = (rem * rem)%m = (a^8)%m
            .
            .
            .

Now we use the idea how we use to determine the binary representation of a number.
We will divide  the number by two, if it was an odd then the last digit would be 1 ,
in other case it will be 0.
So, when we will found b as odd we will multiply the rem with the answer.
When b becomes 0, then the loop will break and we will get the answer.

The time complexity of this process would be O(log b).

                             — Merajul Arefin Pial
                                Computer Science and Engineering Department, University of Dhaka.

*******************************************************************************************/

int bigmod(long long int a, long long int b, int M) { // a function to determine a^b(mod M)

    int remainder, answer = 1;                            // set two variables for remainder and answer

    remainder = a%M;                                          // setting remainder as

    while(b!=0)                                                     //  loop occurs until b is not equal to 0
    {
        if(b%2==1)                                                           // checking if b is odd
        {
            answer = (answer*remainder)%M;    // taking the present remainder in the answer if b is odd
        }

        remainder = (remainder*remainder)%M;    // making remainder double on each turn of the loop

        b/=2;                                                                      // reducing b by dividing it by 2 in every turn,
    }
    return answer;
}
