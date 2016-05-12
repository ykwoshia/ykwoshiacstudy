#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout << "===========================================" << endl;
    cout << "hello world" << endl;

    int i;
    auto old_state = cin.rdstate();

    cout << old_state << ends;
    
    cin >> i;
    
    cout << cin.rdstate() << flush;

    cin.setstate(old_state);

    
    cout << old_state << endl;


    
    return 0;
}
