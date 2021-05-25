#include <iostream>

// //timenow
// #include <chrono>
// #include <ctime>

// //compare_files
// #include <fstream>
// #include <algorithm>

using namespace std;
// Run PS D:\SourceCD\cpp\GoogleKickStart\2021> c++ helloworld.cpp ; .\a.exe
// void defaultCoutAndInData();
// bool compare_files();
//string&  inputFile="input.txt";
//string&  outputFile="output.txt";
//string&  errorFile="error.txt";
//string&  expectedOutputFile="expectedOutput.txt";
int main()
{
	cout << "Start: Main"<< endl;
    // auto timenow =
    //   chrono::system_clock::to_time_t(chrono::system_clock::now());
	//defaultCoutAndInData();
	
    //cout << "FileCompare Result" << endl;
    //cout << compare_files()<< endl;
    int i;
    //cin >>i;
    cout << "Hello World" << endl;

    //cout << i ;
    //cout << "End: Main"<< endl;
    return 0;
}

// void defaultCoutAndInData(){
// 	#ifndef ONLINE_JUDGE
//     // for getting input from input.txt
//     freopen("input.txt", "r", stdin);
//     // for writing output to output.txt
//     freopen("outputActual.txt", "w", stdout);
// 	#endif
// }


// bool compare_files()
// {   
//     std::ifstream file1("input.txt", std::ifstream::ate | std::ifstream::binary); //open file at the end
//     std::ifstream file2("outputExpected.txt", std::ifstream::ate | std::ifstream::binary); //open file at the end
//     const std::ifstream::pos_type fileSize = file1.tellg();

//     if (fileSize != file2.tellg()) {
//         return false; //different file size
//     }

//     file1.seekg(0); //rewind
//     file2.seekg(0); //rewind

//     std::istreambuf_iterator<char> begin1(file1);
//     std::istreambuf_iterator<char> begin2(file2);

//     return std::equal(begin1,std::istreambuf_iterator<char>(),begin2); //Second argument is end-of-range iterator
// }

