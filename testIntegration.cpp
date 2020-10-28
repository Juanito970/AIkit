#include <iostream>
#include "./integrate.h"
using namespace std;

int main()
{
    float x = 1;
    integrator position;
    position.samplingTime = 1;
    for (int i = 0; i < 5; i ++)
    {
        cout << i << " " << position.integrate(x) << endl ;
    }
    position.reset();
    cout << position.integrate(0) << endl ;//Function used to reset the integrator count
    
    return 0;
}