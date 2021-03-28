#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int Pin;
    int Parola = 2021;
    int count = 0;
    int Intrare;
    double Depozit = 0.0;
    double Sold = 0.0;
    double Retragere = 0.0;
    bool isTrue = true;

    system ("Color 4E");
    do
    {
        cout << "~ Bine ati venit! ~\n";
        cout << "Introduceti pinul:\n";
        cin >> Pin;

        if (Pin == Parola)
        {
                cout << "~ Bine ati venit! ~\n"
                 << "1. Depozit\n"
                 << "2. Retragere\n"
                 << "3. Sold\n"
                 << "4. Iesire\n";
            cout << "Alege o optiune:\n";
            cin >> Intrare;
            switch (Intrare)
            {
            case 1:
                cout << "Suma depusa:\n";
                cin >> Depozit;
                Sold = Sold + Depozit;
                break;
            case 2:
                if (Sold <= 0)
                {
                    cout << "Fonduri insuficiente\n";
                }
                else
                {
                    cout << "Suma retrasa:\n";
                    cin >> Retragere;
                    Sold = Sold - Retragere;
                }
                break;
            case 3:
                cout << "Sold curent $" << Sold << endl;
                break;
            case 4:
                cout << "Sa aveti o zi buna!\n";
                isTrue = false;
                break;
            }
            }while(isTrue != false);
            cout << "~ Bine ati venit! ~\n"
                 << "1. Depozit\n"
                 << "2. Retragere\n"
                 << "3. Sold\n"
                 << "4. Iesire\n";
            cout << "Alege o optiune:\n";
            cin >> Intrare;
            switch (Intrare)
            {
            case 1:
                cout << "Suma depusa:\n";
                cin >> Depozit;
                Sold = Sold + Depozit;
                break;
            case 2:
                cout << "Suma retrasa:\n";
                cin >> Retragere;
                Sold = Sold - Retragere;
                break;
            case 3:
                cout << "Sold curent $" << Sold << endl;
                break;
            case 4:
                cout << "Sa aveti o zi buna!\n";
                isTrue = false ;
                break;

        }
        else
        {
            count ++;
            if (count == 5)
                isTrue = false;
            else
                cout << ("Pin gresit! \n");
        }
    } while (isTrue != false);
    return 0;
}
