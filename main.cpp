#include <iostream>

using namespace std;
int MAX1(int a,int b,int c);
double MAX1(double a,double b,double c);
int main()
{
    int a,b,c;
    double d,e,f;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    int M1=MAX1(a,b,c);
    double M2=MAX1(d,e,f);
    cout<<M1<<endl;
    cout<<M2<<endl;
    return 0;
}
int MAX1(int a,int b,int c)
{
    int t;
    t=a>b?a:b;
    return t>c?t:c;
}
double MAX1(double a,double b,double c)
{
    double t;
    t=a>b?a:b;
    return t>c?t:c;
}
