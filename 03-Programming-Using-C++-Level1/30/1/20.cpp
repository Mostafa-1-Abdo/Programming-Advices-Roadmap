#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st1="43.22"; //double,float,int
    
    int N1 = 20; //string
    
    double N2 = 33.5; //string
    
    float N3 = 55.23; //string,int
   
    
    double A1; float A2; int A3;
    A1 = stod(st1);
    A2 = stof(st1);
    A3 = stoi(st1);

    string B;
    B = to_string(N1);

    string C;
    C = to_string(N2);

    string D1; int D2;
    D1 = to_string(N3);
    D2 = N3;
    cout << A1 << endl<<A2 <<endl<< A3 <<endl<<endl<< B << endl << endl << C << endl << endl << D1 << endl << D2;
    return 0;
}