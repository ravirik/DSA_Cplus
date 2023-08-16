When we divide in a program the time complexity will be logirithmic base divisor

lets suppose if in our program we are dividing the no. n / 10

then O(log10(n)) is the time complexity 

same like this we the no. is being divided by n/2 or n/5 or n/20 then it will be O(log2(n)), O(log5(n)), O(log20(n)).


Euclidean Algorithm

It states that gcd(n1,n2) = gcd(n1-n2,n2) where n1>n2

gcd(a,b) = gcd (a-b,b) where a>b

so after optimazation we can say that,

gcd(a,b) = gcd(a%b,b) where a>b

it will run until one of the variable will be 0 and other will be the GCD.


