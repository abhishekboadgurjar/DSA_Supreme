#include <iostream>
using namespace std;
float KMtoMiles(float km)
{
    float _1kmMile = 0.621371;
    float miles = km * _1kmMile;
    return miles;
}
int main()
{
    float km;
    cout << "Tell Me Km" << endl;
    cin >> km;
    float miles = KMtoMiles(km);
    cout << "Miles=" << miles << endl;
}