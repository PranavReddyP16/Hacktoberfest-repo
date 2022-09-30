#include<iostream>
#include"testlib.h"

// this Script uses the testlib.h library for its functions in generating random test cases.

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);
    cout<<n<<" "<<argv[2]<<endl;  // we take in the Number of points to be created as a command line argument

    int cur=0;
    int l = rnd.next(0,n/2); // the central line about which the y values are located
    int r = l+rnd.next(10,20); // the boundary between which the y values vary from the above central line
    for(int i=0;i<n;i++)
    {
        cout<<cur<<" "<<rnd.next(l,r)<<endl;
        cur += rnd.next(1,3); // each succeeding point has it x coordinate increase by a value in the specified range.
    }
}
