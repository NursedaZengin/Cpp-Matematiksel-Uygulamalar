#include <iostream.h>
#include <conio.h>

main()
{
    for(;;)
    {
        clrscr();
        //153, 8208
        long long int sayi,yedek1,bas=0,toplam=0,hane,taban=1;
        cout<<"Bir sayi giriniz: ";
        cin>>sayi;
        yedek1=sayi;
        while (sayi!=0)
        {
            sayi=sayi/10;
            bas++;
        }
        sayi=yedek1;
        while (sayi>0)
        {
            hane=sayi%10;
            sayi=sayi/10;
            for (int i = 0; i < bas; i++)
            {
                    taban*=hane;
            }
            toplam+=taban;
            taban=1;
        }
        if (yedek1==toplam)
        {
            cout<<yedek1<<" sayisi Armstrong sayisidir.";
        }
        else
            cout<<yedek1<<" sayisi Armstrong sayisi degildir.";    
    getch();
    }
}