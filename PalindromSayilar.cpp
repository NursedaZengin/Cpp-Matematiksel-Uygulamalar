#include <iostream.h>
#include <conio.h>

main()
{	
    int sayi,b1,b2,b3,b4,b5,yedek;
        for(;;)
        {
            do
            {
            cout<<"5 basamakli sayi giriniz: ";
            cin>>sayi;
            }while(sayi<10000);
            if((sayi>9999) && (sayi<100000))
            {
                b1=sayi/10000;
                b2=sayi%10000;
                    b2=b2/1000;
                b3=sayi%1000;
                    b3=b3/100;
                b4=sayi%100;
                    b4=b4/10;
                b5=sayi%10;
            }
            if(b1==b5 && b2==b4)
            {
                cout<<sayi<<" sayisi Palindrom sayidir.\n\n";
            }
            else
            {
                cout<<sayi<<" sayisi Palindrom sayi degildir.\n\n";
            }
        }
        getch()
}
