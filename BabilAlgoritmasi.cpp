#include <iostream.h>
#include <conio.h>

main()
{
        float kok=1,sayi;
        cout<<"Bir sayi gir: ";
        cin>>sayi;
        for (int i=0; i < (sayi+1); i++)
        {
             kok=(sayi/kok+kok)/2;
        }
        cout<<kok;
        getch();
}