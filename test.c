#include <iostream>
// #include <cctype>
// #include <vector>
// #include "test.h"
// using namespace std;

using std::cin;
using std::cout;
using std::endl;
// using std::string;
// using std::vector;
using std::begin;
using std::end;


int main()
{
	// string str("hello world!!!");
	// // if (!str.empty())
	// // 	str[0] = toupper(str[0]);
	// for (decltype(str.size()) index = 0; index != str.size() && !isspace(str[index]); ++index)
	// 	str[index] = toupper(str[index]);
	// cout << str << endl;
	

	// const string hexdigits = "0123456789ABCDEF";
	// cout << "Enter a series of numbers between 0 and 15"
	// 	 << " seperated by spaces. Hit ENTER when finished: "
	// 	 << endl;
	// string result;
	// string::size_type n;
	// while(cin>>n)
	// 	result += hexdigits[n];
	// cout <<  "Your hex number is: " << result << endl;

	// vector<int> v2;
	// for (int i = 0; i!=100; ++i)
	// 	v2.push_back(i);
	// for (auto i : v2)
	// 	cout << i << " " << endl;

	// vector<unsigned> scores(11, 0);
	// unsigned grade;
	// while (cin >> grade) {
	// 	if (grade <= 100)
	// 		++scores[grade/10];
	// }
	// for (auto i : scores)
	// 	cout << i << " " << endl;
	// **********************************************
	// string s("some string");
	// if (s.begin() != s.end()){
	// 	auto it = s.begin();
	// 	*it = toupper(*it);
	// }

	// for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
	// *it = toupper(*it);

// ******************* string binary search **************************

	// string text = "abcdefghijklmnopqrstuvwxyz";
	// auto beg = text.begin(), end = text.end();
	// auto mid = text.begin() + (end - beg)/2;
	// while(mid != end && *mid != 'b'){
	// 	cout << *mid << endl;
	// 	if ('b' < *mid)
	// 		end = mid;
	// 	else
	// 		beg = mid + 1;
	// 	mid = beg + (end - beg)/2;
	// }
	// cout << *mid << endl;
	// return 0;
// ********************** Array **********************************
	// const unsigned sz = 3;
	// int ia1[sz] = {0, 1, 2};
	// int a2[] = {0, 1, 2};
	// int a3[5] = {0, 1, 2};
	// string a4[3] = {"Hi", "bye"};
	// // int a5[2] = {0, 1, 2};

	//unsigned scores[11] = {0,1,2,3,4,5,6,7,8,9,10};
	// unsigned grade;
	// while (cin >> grade) {
	// 	if (grade <= 100)
	// 		++scores[grade/10];
	// }

	// for (auto i :scores){
	// 	cout << i << endl;
	// }
	// int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	// int *s = begin(ia);
	// int *e = end(ia);
	
	// while (s != e && *s >= 0)
	// {
	// 	cout << *s << " ";
	// 	++s;
	// }
	int a[4][3] = {0,1,2,3,4,5,6,7,8,9,10,11};

	for (auto &row : a)
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}
