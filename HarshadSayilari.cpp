#include <iostream.h>
#include <conio.h>


main()
{
for(;;)
{
     clrscr();
    //24, 192, 1729
    long long int sayac=0,toplam=0,sayi,yedek,bas=1,hane,j;
    do{
    cout<<"Bir sayi giriniz: ";
    cin>>sayi;
    }while(sayi<=0);
    yedek=sayi;
    while (sayi!=0)
    {
        sayi=sayi/10;
        sayac++;
    }
    sayi=yedek;
    while (sayac!=0)
    {
        j=sayac;
        for (int i = 0; i < j; i++)
        {
                bas*=10;
        }
        hane=sayi/bas;
        sayi=sayi-bas*hane;
        toplam+=hane;
        bas=1;
        sayac--;
    }
     toplam+=sayi;
     if (yedek%toplam==0)
        cout<<yedek<<" sayisi Harshad sayisidir.";
     else
     	cout<<yedek<<" sayisi Harshad sayisi degildir.";
       getch();
  }
}