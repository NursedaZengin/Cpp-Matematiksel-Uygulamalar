#include <iostream.h>
#include <conio.h>

main()
{
        //1,7,10,13,19,23,28,31,32,44,49,68,70,79,82,86,91,94,97
        for(;;)
        {
        //clrscr();
        int sayi,a,hane,yedek,d=1,c,sonuc=0,n=0;
        bool kontrol=false;
        int dizi[100];
        cout<<"Sayi giriniz: ";
        cin>>sayi;
        cout<<endl;
        yedek=a=sayi;
        if(sayi==1)
        {
           cout<<"------------------------------------------------------\n\n\t\t"<<a<<" Mutlu Sayidir   :)  :)  :) \n\n------------------------------------------------------\n\n";
        }
        else
        {
           while(sonuc!=1 && kontrol!=true)
           {    hane=1;
           	d=1;
            	while(sayi>9)//kaç basamaklı olduğunu bulur
                {
                    sayi=sayi/10;
                    hane++;
                    d*=10;
                }
                sayi=yedek;
                for(int j=0;j<hane;j++)//basamak değerlerini bulur
                {
                    c=sayi/d;
                    sonuc+=(c*c);
                    cout<<c<<" karesi ";
                    sayi=sayi-(c*d);
                    d=d/10;
                }
                cout<<" = "<<sonuc<<endl;
                sayi=sonuc;
                yedek=sonuc;
                sonuc=0;
                 if (sayi==1)
                 {
                     cout<<"\n------------------------------------------------------\n\n\t\t"<<a<<" Mutlu Sayidir   :)  :)  :) \n\n------------------------------------------------------\n\n";
                     break;
                }
                else if(sayi==a)
                {
                    cout<<"\n------------------------------------------------------\n\n\t\t"<<a<<" Mutlu Sayi Degildir   :(  :(  :( \n\n------------------------------------------------------\n\n";
                     break;
                }
                for (int i = 0; i <= n; i++)
                {
                    if(sayi==dizi[i])
                        {
                            kontrol=true;
                            cout<<"\n------------------------------------------------------\n\n\t\t"<<a<<" Mutlu Sayi Degildir   :(  :(  :( \n\n------------------------------------------------------\n\n";
                            break;
                        }
                }
                if(kontrol==false)
                {
                    dizi[n]=yedek;
                    n++;
                }
           }
        }

        }
        getch();
}