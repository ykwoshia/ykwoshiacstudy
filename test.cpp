#include "global.hpp"
#include "test.hpp"

using namespace std;

// extern const int TOTAL_SITE = 16;

const int iSize = 16;  // isize must be initialized and can not be changed
int main()
{

    // cout << "hello world" << endl;
    // // template
    // int iNumber1 = 1 , iNumber2 = 2;
    // float fNumber1 = 1 , fNumber2 = 2;

    // cout << max(iNumber1, iNumber2) << endl;

    // // const local to file
    // const int i = 10;
    // const int j = i;
    // const int l = 100;
    // const int k = iNumber1;

    // cout << "i = " << i << endl;
    // cout << "j = " << j << endl;
    // cout << "k = " << k << endl;
    // cout << "l = " << l << endl;

    // cout << TOTAL_SITE << endl;



    // // top level and low level const
    // int i = 0, *p = &i;
    // cout << *p << endl;
    // const int i = 100;
    // const int*const p = &i;
    /* const int *l = p;  */
    // cout << "*p = " << *p << endl;

    /* cout << "*p = " << *p << endl; */
    // int*&l = p;
    // cout << "*l = " << l << endl;

    // // static array

    int i = 1;
    int j = 1;
    if(i)
        if(j)
        {cout << "here";}
    else
    {
        cout << "there";
    }

    return 0;
}

