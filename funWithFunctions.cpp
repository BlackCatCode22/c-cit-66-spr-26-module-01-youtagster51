#include <iostream>
#include <iomanip>
using namespace std;

double getAnIntFromTheUser(){ double n; cin >> n; return n; }
double sumTwoInts(double a,double b){ return a+b; }
void compareTwoInts(double a,double b){ cout<<(a>b?"First is bigger\n":a<b?"Second is bigger\n":"They are equal\n"); }

int main(){
    double a=getAnIntFromTheUser(), b=getAnIntFromTheUser();
    cout << fixed << setprecision(1) << sumTwoInts(a,b) << endl;
    compareTwoInts(a,b);
    return 0;
}
