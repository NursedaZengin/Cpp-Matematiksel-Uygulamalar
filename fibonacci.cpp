#include <iostream.h>
#include <conio.h>

main()
{
       //girilen sayı kadar fibonacci dizisi elemanlarını yazdırma
       //f[0]=0
       //f[1]=1
       //f[2]=1
       int n;
       int fib[50]={0,1};
       cout<<"Fibonacci dizisi kac tane yazilsin: ";
       cin>>n;
       for (int i = 2; i < n; i++)
       {
           fib[i]=fib[i-1]+fib[i-2];
       }
       for (int i = 0; i < n; i++)
       {
             cout<<fib[i];
             if(i<(n-1))
             cout<<", ";
       }
      getch();
}