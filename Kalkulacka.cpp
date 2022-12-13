#include <iostream>
#include <cmath>
#include <windows.h>
#include <process.h>
using namespace std;
void sleep() {
    Sleep(4000);
    system ("cls");
    }

int main () {
    int funkce;

    g1:
    cout << "Dobry den \n" << "vyberte prosim funkci \n \n";
    cout << "1 prohozeni cisel    2 prohozeni cisel PRO     3 vyber nejvetsiho cisla    4 mocniny    5 delitelnost \n \n";
    cin >> funkce;
    system ("cls");

    switch (funkce) {
        {case 1:
            int a,b,c;

            cout << "Zadejte prvni cislo:";
            cin >> a;
            cout << "Zadejte druhe cislo:";
            cin >> b;

                c = a;
                a = b;
                b = c;

            system ("cls");

            cout << "hodnota prvniho cisla je: " << a << endl;
            cout << "hodnota druheho cisla je: " << b << "\n" << endl;

                sleep();
                goto g1;
        break;}


        {case 2:
            int a,b;

            cout << "Zadejte prvni cislo:";
            cin >> a;
            cout << "Zadejte druhe cislo:";
            cin >> b;

                a=a+b;
                b=a-b;
                a=a-b;

            system ("cls");

            cout << "hodnota prvniho cisla je: " << a << endl;
            cout << "hodnota druheho cisla je: " << b << "\n" << endl;

                sleep();
                goto g1;
        break;}


        {case 3:
            int a,b,c;

            cout << "zadejte prvni cislo:";
            cin >>  a;
            cout << "zadejte druhou cislo:";
            cin >> b;
            cout << "zadejte treti cislo:";
            cin >> c;

                if (a>=b && a>=c){
                    system ("cls");
                    cout << "nejvetsi cislo je: " << a;}

                if (b>=a && b>=c) {
                    system ("cls");
                    cout << "nejvetsi cislo je: " << b;}

                if (c>=a && c>=b) {
                    system ("cls");
                    cout << "nejvetsi cislo je: " << c;}

                sleep();
                goto g1;
        break;}


        {case 4:
            int cislo,exponent;

            cout << "zadejte cislo:";
            cin >> cislo;
            cout << "zadejte exponent:";
            cin >> exponent;

                double vysledek = pow(cislo,exponent);

            system ("cls");
            cout << "Vysledne cislo je: " << vysledek;

                sleep();
                goto g1;
        break;}


        case 5:
            int cislo;

            cout << "Zadejte cislo ktere chcete delit: ";
            cin >> cislo;
                if (cislo%2==0 && cislo%5==0)
                {
                    system ("(cls)");
                    cout << "cislo je delitelne dvojkou i petkou";
                }

                else
                {
                    system ("cls");
                    cout << "cislo neni delitelne dvojkou a petkou";
                }

                sleep();
                goto g1;
        break;

    break;}
    }
