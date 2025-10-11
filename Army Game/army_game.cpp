#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;
    if(n%2 != 0)
        n = (n+1)/2;
    else
        n = n/2;
    if(m%2 != 0)
        m = (m+1)/2;
    else
        m = m/2;
    m = m*n;
    cout<< m;
    return 0;
}
