#include <iostream.h>
#include <conio.h>
#include <string>

main()
{
	int sayi,bolum,kalan,i=0,say=0;
        string ikili;
        do
        {
            cout<<"Sayi giriniz: ";
            cin>>sayi;
        }while(sayi<0);
        if(sayi==0)
        {
            cout<<"0";
        }
        else
        {
            while(sayi>=1)
            {
                bolum=sayi/2;
                kalan=sayi%2;
                if(kalan==0)
                    {ikili+="0"; say++;}
                else
                   {ikili+="1";  say++;}
                sayi=bolum;
            }
            for (int i = (say-1); i >=0; i--) {
                 cout<<ikili[i];
            }
        }
        getch();
}