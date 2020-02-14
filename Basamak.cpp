#include <iostream.h>
#include <conio.h>

usal(int us)
{
     int a=1;
     while(us>1)
     {
     	a*=10;
        us--;
     }
     return a;
}

main()
{
	//girilen bir tam sayının hanelerine ayrılması
        int sayi,sayac=0,yedek,d=1,c;
        cout<<"Sayi giriniz: ";
        cin>>sayi;
        yedek=sayi;
        while(sayi>0)
        {
            sayi=sayi/10;
            sayac++;
        }
        cout<<"Sayi "<<sayac<<" basamakli\n";
        sayi=yedek;
        while(sayac!=0)
        {
            for (int i = (sayac-1); i > 0; i--)
            {
                 d*=10;
            }
            c=sayi/d;
            cout<<usal(sayac)<<"\tler basamagi "<<c<<endl;
            sayi=sayi-(c*d);
            sayac--;
            d=1;
        }
      getch();
}