// #include "global.hpp"
// #include "test.hpp"
#include <vector>
#include <iostream>
// #include <cassert.h>
// #include <string>
#include "Sales_data.h"
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swap2(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool larger(const int &a, const int &b)
{
    return a > b;
}

int& get( int *a, int b)
{

    return a[b];
}

int fff(int val)
{
    if(val>1)
    {
        cout<<val<<endl;
        return fff(val-1)*val;
    }
    return 1;
}

bool eq1(const string& a, const string&b)
{
    return a == b;
}


void print(const string& a)
{
    cout<<a<<endl;
}
void print(double a)
{
    cout<<a<<endl;
}
void test()
{
    void print(int a);
    // print("hello");
    // print(1.2);
    print(1);
}
void print(int a)
{
    cout<<a<<endl;
}
typedef string::size_type sz;
// default arguments can not use local variable
void screen(sz h = 100, sz w=40, char b = 'a')
{
    cout << h << endl;
    cout << w << endl;
    cout << b << endl;
}

void print(const int ia[], size_t t)
{
#ifndef NDEBUG
    cerr << "Error: " << __FILE__
        << " : in function " << __func__
        << " at line " << __LINE__ << endl
        << " compiled on " __DATE__
        << " at " << __TIME__ << endl
        << __func__ << " array size is " << t << endl;
#endif
}


int main(int argc, char**argv)
{

    
    // fff(2);
    // int (*aaa)(int);
    // aaa = fff;
    // aaa(2);
    // int ia[4] = {1, 2, 3, 4};
    // print(ia, 5);

    // void (*pf)(const int ia[], size_t t);

    // pf = print;
    // print(ia,5);

    // while(cin>>word)
    // {
        // cout<<word<<endl;
    // }
    // test();
    // k
    // int ia[10];
    // for(int i=0; i<10; ++i)
    // {
        // get(ia,i) = i;
    // }
    // for(int j=0; j<10; ++j)
    // {
        // cout<<ia[j]<<endl;
    // }
    // if(0)
        // return EXIT_FAILURE;
    // else
        // return EXIT_SUCCESS;

    // int a[5];
    // bigger(a,3) = 4;
    // cout<<a[3]<<endl;

    // int n = 0, i = 42;


    // cout << n << endl;
    // cout << i << endl;
    // swap2(n,i);
    // cout << n << endl;ññ:
    // cout << i << endl;


    // if(larger(n,i))
    // {
        // cout<<"n is larger";
    // }
    // // *p = 42;
    // cout<<n<<endl;
    // p = q;
    // cout<<n<<endl;




    // signed int is size_t
    // int a = 0;
    // int b[10];
    // for(int a = 0; a < 10; a++)
    // {
        // cout<<b[a]<<endl;
    // }
    // const int a = 5;
    // int b[a] = {1,2};
    // for (int i = 0; i< 5; i++)
    // {
        // cout << b[i] << endl;
    // }
    // string a = "h";
    // vector<string> v;
    // v.push_back("1");
    // v.push_back("2");
    // v.push_back("3");
    // v.push_back("4");
    // v.push_back("5";
    // v.push_back("6");
    // v.push_back("7");
    // v.push_back("8");
    // vector<string>::iterator i;
    // i = v.end()-1

    // // i = v.begin() + 3/2;
    // cout << *i<<endl;
    // int j = v.end() - v.begin();
    // cout << j << endl;

    // for( i = v.begin(); i != v.end(); ++i )
    // {
        // *i += '1';
        // cout << *i << " ";
    // }

    // string s;
    // if(!s.empty())
    // cout<<s[100]<<endl;
    // string word = "h1 ";
    // for(uint i = 0; i < word.size(); i++)
    // {
    // if(isalnum(word[i]))
    // {
    // cout << word[i] << " is alnum" << endl;
    // }
    // if(isalpha(word[i]))
    // {
    // cout << word[i] << " is alpha" << endl;
    // }
    // if(iscntrl(word[i]))
    // {
    // cout << word[i] << " is cntrl" << endl;
    // }
    // if(isdigit(word[i]))
    // {
    // cout << word[i] << " is digit" << endl;
    // }
    // if(isgraph(word[i]))
    // {
    // cout << word[i] << " is graph" << endl;
    // }
    // if(islower(word[i]))
    // {
    // cout << word[i] << " is lower" << endl;
    // }
    // if(isprint(word[i]))
    // {
    // cout << word[i] << " is print" << endl;
    // }
    // if(ispunct(word[i]))
    // {
    // cout << word[i] << " is punct" << endl;
    // }
    // if(isspace(word[i]))
    // {
    // cout << word[i] << " is space" << endl;
    // }
    // if(isupper(word[i]))
    // {
    // cout << word[i] << " is upper" << endl;
    // }
    // if(isxdigit(word[i]))
    // {
    // cout << word[i] << " is xdigit" << endl;
    // }
    // cout <<char(tolower(word[i]))<< " to lower" << endl;
    // cout << char(toupper( word[i] )) << " to upper" << endl;
    // }
    // // while(getline(cin,word))
    // {
    // cout << word << endl;
    // }
    // string str1(10,'c'),str2;
    // cout<<str1<<endl;
    // int
    // endl
    // str1=str2;
    //cout
    // int i = 0xFF;
    // int b = 0x11;
    // int c = i & b;
    // cout<<c<<endl;
    // cout<<hex<<c<<endl;
    // char a[5] = "1234";
    // cout << a << endl;
    // string word;

    // while(cin>>word)
    // {
        // cout << word << endl;
    // }

    // while(getline(cin, word))
    // {
    // cout << word << endl;
    // }

    // word = "how old are you";
    // int i = word.size();
    // cout<< i << endl;

    // string abc("how are you");
    // cout << abc << endl;
    // cout << abc.size() << endl;

    // string def = string(10,'c');
    // cout << def << endl;
    // cout << def.size()<<endl


    // cin >> def ;
    // cout << def << endl;

    // string i;
    // cin>>i;
    // cout<<i<<endl;
    // Sales_data data1, data2;

    // double price = 0.0;
    // std::cin>>data1.bookNo>>data1.units_sold>>price;
    // data1.revenue = data1.units_sold * price;

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

    // int i = 1;
    // int j = 1;
    // if(i)
    // if(j)
    // {cout << "here";}
    // else
    // {
        // cout << "there";
    // }


    // cout<<hex<<100<<endl;

    // string a="hello world";
    // cout<<a.begin() - a.end()<<endl;

    // int a[] = { 1, 3, 5, 7, 9 };
    // cout << *(a+1) <<endl;
    // int *p = &a[3];
    // cout<<p[1]<<endl;
    // return 0;
    // vector<int> ivec(a,a+4);
    // vector<int> ivec(a,a+3);
    // vector<int>::iterator i;
    // for(i=ivec.begin(); i<ivec.end();i++)
    // {
        // cout<<*i<<endl;
    // }

    // string a("he");
    // cout<<a.size()<<endl;
    // const char *str = a.c_str();
    // cout << str << endl;
    //
    //

    // expressions




    // int ia[] = {0,2,4,6,8};
    // int *p = ia;
    // cout<<*(p+4)<<endl;
    // cout<<*(ia+4)<<endl;
    // cout << 5 + 10 * 20 / 2 << endl;

    // cout << 20 / 5 << endl;
    // cout << -20 / 5 << endl;
    // cout << 20 / -5 << endl;
    // cout << -20 / -5 << endl;

    // int i = 0, j = 0;
    // if(i==j)
    // {
        // cout<<i<<endl;
    // }
    //

    // vector<int> ia;
    // ia.push_back(1);
    // ia.push_back(2);
    // ia.push_back(3);
    // ia.push_back(4);
    // ia.push_back(5);
    // vector<int>::iterator p;
    // for(p=ia.begin();p!=ia.end();)
    // {
        // cout << *p++ << " endl"<<endl;
    // }

    // int i = 10;

    // switch(i)
    // {
        // case 1: case 2: case 3: case 10:
         // cout<<"bingo"<<endl;
         // break;
    // }

    // int a = 10, b = 0;

    // int c;
    // try
    // {
        // // throw 1;
        // c = a/b;
    // }
    // catch(int e)
    // {
        // cout<<e<<endl;
    // }
    // cout<<"done"<<endl;




}

