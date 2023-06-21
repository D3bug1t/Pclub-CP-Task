#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n = atoi("100000");
    int x=  atoi("1000000000");
    int ai= 1000000000;
    // long long n=100000;
    cout << rnd.next(1, n) << " ";
    cout << rnd.next(1, x) << endl;
    for(int i=0;i<n;i++){
        cout<<rnd.next(1,ai)<<" ";
    }
    cout<<endl;
}
