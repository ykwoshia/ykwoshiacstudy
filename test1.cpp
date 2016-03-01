#include "global.hpp"

using namespace std;

// extern const int TOTAL_SITE = 16;

void run()
{
    static  int flag_match[16];

    flag_match[10] = 1111;
    for ( int i = 0; i<16; i++ )
    {
        cout<<flag_match[i]<<endl;
    }
    
}

