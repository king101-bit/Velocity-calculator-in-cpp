#include <iostream>
using namespace std;
int main()
{
    float s;
    float u;
    float a;
    int t;
    // This relates to physics btw now i'm in senior high this is on project related to physics.
    cout << "Enter the value for your initial velocity" << endl;
    cin >> u;
    cout << "Enter the value for acceleration" << endl;
    cin >> t;
    s = (u * t) + (a * t * t) / 2;
    cout << "Distance is\t"
         << s << endl;
    return 0;
}