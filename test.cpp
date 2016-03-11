// #include "global.hpp"
// #include "test.hpp"
#include <vector>
#include <iostream>
// #include <string>
#include "Sales_data.h"
using namespace std;


int main()
{
    string a = "h";
    vector<string> v(10,a);
    vector<string>::iterator i;
    for( i = v.begin(); i != v.end(); ++i )
    {
        *i += '1';
        cout << *i << " ";
    }

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


    
    return 0;
}

