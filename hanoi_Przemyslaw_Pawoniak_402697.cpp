#include<iostream>
#include<string>

using namespace std;

static int ruchy=0;

int Hanoi(int A, int B, int C, int n)
{
    if(n>0)
    {
        Hanoi(A,C,B,n-2);
        cout<<A<<" "<<B<<endl;
        cout<<A<<" "<<B<<endl;
        Hanoi(C,B,A,n-2);
        ruchy=ruchy+2;
    }
}

int main()
{
    cout<<" Wieza Hanoi - Algorytm "<<endl;
    cout<<"  AUTOR: PRZEMYSLAW PAWONIAK  Grupa 25"<<endl;
    int n;
    cout<<"Podaj liczbe krazkow -wymagane jest podanie liczby parzystej-: "<<endl;
    cin>>n;
    while(n<=0)
    {
        cout<<"Zostala podana ujemna liczba krazkow, podaj liczbe jeszcze raz (musi byc to liczba dodatnia i parzysta): "<<endl;
        cin>>n;
    }
    while(n%2!=0)
    {
        cout<<"Zostala podana nieparzysta liczba krazkow, podaj parzysta liczbe krazkow jeszcze raz: "<<endl;
        cin>>n;
    }
    cout<<"Liczba krazkow: "<<n<<endl;
    cout<<"Ilosc slupow: 3"<<endl;

    int A,B,C;
    A=1;
    B=2;
    C=3;
    n=n-2;
    Hanoi(A,B,C,n);
    cout<<A<<" "<<C<<endl;
    ruchy++;
    while(n>2)
    {
        n=n-2;
        Hanoi(B,C,A,n);
        cout<<B<<" "<<A<<endl;
        ruchy++;
        Hanoi(C,A,B,n);
        cout<<B<<" "<<C<<endl;
        ruchy++;
        n=n-2;
        Hanoi(A,B,C,n);
        cout<<A<<" "<<C<<endl;
        ruchy++;

    }
    if(n>0)
    {
        cout<<B<<" "<<A<<endl;
        ruchy++;
        cout<<B<<" "<<C<<endl;
        ruchy++;
    }

    cout<<"licznik ruchow: "<<ruchy<<endl;

    return 0;
}
