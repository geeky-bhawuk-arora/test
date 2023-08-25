#include <iostream>
#include <cmath>
using namespace std;

int calc_dmt(int, int, int);

int main() {
    int a,b,c,D;
    int x1,x2,real_part,img_part;
    
    cin>>a>>b>>c;

    cout<<"Quadratic Equation : "<<a<<"x^2 + "<<b<<"x + "<<c;

    if(a==0){
        cout<<"\nInvalid Input !!";
    }
    else if(D==0){
        D = calc_dmt(a,b,c);
        x1 = (-b/(2*a));
        x2 = x1;
        cout<<"\nThe roots of the quadratic equation are real and equal i.e. "<<x1<<" and "<<x2;
    }
    else if(D>0){
        D = calc_dmt(a,b,c);
        x1 = ((-b + sqrt(D)) / (2*a));
        x2 = ((-b - sqrt(D)) / (2*a));
        cout<<"\nThe roots of the quadratic equation are real and distinct i.e. "<<x1<<" and "<<x2;
    }
    else if(D<0){
        D = calc_dmt(a,b,c);
        real_part = ((-b)/(2*a));
        img_part = ((sqrt(-(D)))/(2*a));
        cout<<"\nThe roots of the quadratic equation are imaginary i.e. "<<real_part<<" + "<<"i"<<img_part;
    }

    return 0;
}

int calc_dmt(int a, int b, int c){
        int D;
        D = ((pow(b,2)) - (4*a*c));
        cout<<"\nDiscriminant : "<<D;
        return D;
    }
