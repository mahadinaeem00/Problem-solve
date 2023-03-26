#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,avg,e;
    cin>>a>>b>>c>>d;
    avg=(a*2 + b*3 + c*4 + d*1)/10.0;
    cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;

    if(avg>=7)
        cout<<"Aluno aprovado."<<endl;
    else if(avg<5)
        cout<<"Aluno reprovado."<<endl;
    else
    {
        cout<<"Aluno em exame."<<endl;
        cout<<"Nota do exame: ";
        cin>>e;
        double n_avg=(avg+e)/2.0;
        if(n_avg>=5)
            cout<<"Aluno aprovado."<<endl;
        else
        {
          cout<<"Aluno reprovado."<<endl;
        }
        cout<<fixed<<setprecision(1)<<"Media final: "<<n_avg<<endl;

    }

    return 0;
}
