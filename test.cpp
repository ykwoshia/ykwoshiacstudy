#include "global.hpp"
#include "test.hpp"


using std::cin;
using std::cout;
using std::endl;

// extern const int TOTAL_SITE = 16;


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

/*
 * 
 *     int i;
 *     int &j = i;
 *     int &k = j;
 *     cout << "i = " << i << "  j = " << j <<  "  k = " << k << endl;
 * 
 */
    // int i = 0, *p = &i;
    // cout << *p << endl;
    // const int i = 100;
    // const int*const p = &i;
    /* const int *l = p;  */
    // cout << "*p = " << *p << endl;

    /* cout << "*p = " << *p << endl; */
    // int*&l = p;
    // cout << "*l = " << l << endl;
/*
 * 
 *     int i = 100;
 *     int &j = i;
 *     cout << "i = " << i << "  j = " << j << endl;
 *     j = 200;
 *     cout << "i = " << i << "  j = " << j << endl;
 */

    typedef char *pstring;
    const pstring cstr = 0;
    const pstring *ps;
    cout << "cstr = "<< *cstr << endl;
    cout << "ps = "<< **ps << endl;

    return 0;   
}

