#include <iostream>

using namespace std;
//Run PS D:\SourceCD\cpp\GoogleKickStart\2021> c++ helloworld.cpp ; .\a.exe
int main()
{
	cout << "Start: Main"<< endl;
	//defaultData();
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int i;
    //cin >>i;
    cout << "Hello World"<< endl;
    //cout << i ;
    cout << "End: Main"<< endl;
    return 0;
}

void defaultData(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
}