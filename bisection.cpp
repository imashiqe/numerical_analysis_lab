#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double func(double x)
{
    double val;
    val=pow(x,3)-x-1;
    return val;
}
int main()
{

    double a,b,c;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    int n=0;
    if(a<b)
    {
        double fa,fb;
        fa=func(a);
        fb=func(b);

        if(fa*fb<0)
        {
            cout<<"n"<<setw(20)<<"a"<<setw(20)<<"f(a)"<<setw(20)<<"b"<<setw(20)<<"f(b)"<<setw(15)<<"c"<<setw(15)<<"f(c)"<<endl;


            while(1)
            {

                 cout<<++n<<setw(20)<<a<<setw(20)<<func(a)<<setw(20)<<b<<setw(20)<<func(b);

                c=(a+b)/2;

                cout<<setw(15)<<c<<setw(15)<<func(c);
                if(func(c)==0)
                {
                    cout<<"The root is ="<<c<<endl;
                    break;
                }
                else if(func(a)*func(c)<0)
                {
                    b=c;

                }
                else if(func(c)*func(b)<0)
                {
                    a=c;
                }
                if(abs(func(c))<=0.00005)
                    break;


                cout<<endl;

            }
            cout<<endl;
             cout<<"root "<<c<<endl;


        }
        else
            cout<<"Invalid number"<<endl;
    }

    else
        cout<<"Invalid number"<<endl;

    return 0;
}
