#include <iostream>

using namespace std;

int main()
{

int zadanie;
cout<<"podaj numer zadania: ";
cin>>zadanie;

switch(zadanie)
{
case 1:

int a,b;

cout<<"podaj a: "<<endl;
cin>>a;
cout<<"podaj b: "<<endl;
cin>>b;

    cout<<"Wynik dodawaia: "<<(a+b)<<endl;
    cout<<"Wynik odejmowania: "<<(a-b)<<endl;
    cout<<"Wynik dzielenia: "<<(a/b)<<endl;
    cout<<"Wynik mnozenia: "<<(a*b)<<endl;

    break;

case 2:

    int liczba1,liczba2,liczba3;
    cout<<"podaj liczbe: "<<endl;
    cin>>liczba1;
    cout<<"podaj liczbe druga: "<<endl;
    cin>>liczba2;
    cout<<"podaj liczbe trzecia: "<<endl;
    cin>>liczba3;

    if(liczba1<liczba3 && liczba2<liczba3)
    {
        cout<<"liczba "<<liczba3<<" jest najwieksza."<<endl;
    }
    else if(liczba2<liczba1 && liczba3<liczba1)
    {
        cout<<"liczba "<<liczba1<<" jest najwieksza."<<endl;
    }
    else if(liczba3<liczba2 && liczba1<liczba2)
    {
        cout<<"liczba "<<liczba2<<" jest najwieksza."<<endl;
    }
    break;

case 3:

int liczba;
    cout<<"wprowadz liczbe: ";
    cin>>liczba;

    if(liczba<0)
    {
        cout<<"Liczba mniejsza niz 0"<<endl;
    }
    else if(liczba==0)
    {
        cout<<"Liczba rowna 0"<<endl;
    }
    else
    {
        cout<<"Liczba wieksza niz 0"<<endl;
    }

    break;

case 4:
{
 string imie;
string nazwisko;
string m_zamieszkania;

    cout<<"wprowadz imie: "<<endl;
    cin>>imie;
    cout<<"wprowadz nazwisko: "<<endl;
    cin>>nazwisko;
    cout<<"wprowadz miejsce zamieszkania: "<<endl;
    cin>>m_zamieszkania;

    cout<<"Imie: "<<imie<<endl<<"Nazwisko: "<<nazwisko<<endl<<"Miejsce zamieszkania: "<<m_zamieszkania<<endl;

}
    break;



case 5:
    int dlugosc1,dlugosc2;
    cout<<"podaj dlugosc pierwsza: "<<endl;
    cin>>dlugosc1;
    cout<<"podaj dlugosc druga: "<<endl;
    cin>>dlugosc2;

    cout<<"pole: "<<(dlugosc1*dlugosc2)<<endl;
    break;

case 6:
    int d,e;
    cout<<"wprowadz liczbe 1: ";
    cin>>d;
    cout<<"wprowadz liczbe 2: ";
    cin>>e;

    if(d<e)
    {
        while(d<=e)
        {
            cout<<d<<endl;
            d++;
        }
    }
    break;

case 7:
    int f,g;
    cout<<"wprowadz liczbe: ";
    cin>>f;
    cout<<"wprowadz liczbe: ";
    cin>>g;

cout<<"liczba bitowa: "<<(f&g)<<endl;
cout<<"suma bitowa: "<<(f|g)<<endl;
break;

case 8:
    int start, end;
    cout<<"Podaj poczatek przedzialu: ";
    cin>> start;
    cout<<"Podaj koniec przedzialu: ";
    cin>>end;
    cout<<"Parzyste liczby przedzialu: ";
    for (int i=start;i<=end;i++) {
        if (i%2==0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;

break;

case 9:

       int number;
    while (true) {
        cout<<"Wprowadz parzysta liczba: ";
        cin>>number;
        if (number%2==0) {
            cout<<"Wprowadziles parzysta liczbe: "<<number<<endl;
            break;
        } else {
            cout<<"Prosze wprowadzic prawidlowa liczbe."<<endl;
        }

        break;

case 10:

        int count;
    cout<<"Wprowadz wartosci, z ktorych chcesz obliczyc srednia i sume: ";
    cin>>count;
    float sum=0;
    for (int i=0; i<count; i++) {
        double value;
        cout << "Wprowadz wartosc na pozycji: ";
        cin >> value;
        sum += value;
    }
    float average = sum / count;
    cout<<"suma to: "<<sum<<endl;
    cout<<"srednia to: "<<average<<endl;
}
    return 0;

}}
