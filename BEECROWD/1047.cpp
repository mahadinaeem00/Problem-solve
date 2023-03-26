#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==c && b==d)
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;

    else if(c > a || (c == a && d >= b))
        cout<<"O JOGO DUROU "<<c-a<<" HORA(S) E "<<d-b<<" MINUTO(S)"<<endl;

    else if(a > c && d >= b)
        cout<<"O JOGO DUROU "<<24-a+c<<" HORA(S) E "<<d-b<<" MINUTO(S)"<<endl;

    else if(a >= c && b > d)
        cout<<"O JOGO DUROU "<<24-a+c-1<<" HORA(S) E "<<60-b+d<<" MINUTO(S)"<<endl;

    return 0;
}
