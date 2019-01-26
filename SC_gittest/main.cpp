#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

void countTo(int x)
{
    for(int i = 1; i <= x; i++)
        cout<<i<<endl;
}

int main()
{
    int x;
    cout<<"Input a number: "<<endl;
    cin>> x;
    if(cin)
        countTo(x);
    return 0;
}
