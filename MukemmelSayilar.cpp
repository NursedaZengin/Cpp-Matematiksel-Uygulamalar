#include <iostream.h>
#include <conio.h>

main()
{     //6, 28, 496, 8128
        for(;;)
        {
        int sayi,top=0;
        do
        {
        cout<<"Bir sayi giriniz: ";
        cin>>sayi;
        }while(sayi<=0);
        cout<<sayi<<" sayisinin pozitif tam bolenleri= ";
        for (int i = 1; i < sayi; i++)
        {
            if(sayi%i==0)
            {
                cout<<i<<" ";
                top+=i;
            }
        }
        if(top==sayi)
        {
            cout<<endl<<sayi<<" sayisi bir MUKEMMEL SAYIDIR :)\n\n";
        }
        else
        {
              cout<<endl<<sayi<<" sayisi bir MUKEMMEL SAYI DEGILDIR :(\n\n";
        }
        }
        getch();
}