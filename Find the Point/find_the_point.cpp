#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    int p1,p2,q1,q2,r1,r2;
    cin>>t;
    for (int i =0;i<t;i++)
    {
        cin>>p1>>p2>>q1>>q2;
        r1 = q1 +(q1 -p1);
        r2 = q2 +(q2-p2);
        cout<<r1<<" "<<r2<<"\n";
        
    }
    return 0;
}
