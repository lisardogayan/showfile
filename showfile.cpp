/* C++ Program - Read and Display File 
   References:
   https://www.includehelp.com/cpp-programs/read-text-file.aspx
   https://codescracker.com/cpp/program/cpp-program-read-and-display-file.htm  */
		
// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	system("clear"); //clears the screen
	ifstream ifile;
	char s[100], fname[20];
	cout<<"Enter file name to read and display its content (like file.txt) : ";
	cin>>fname;
	ifile.open(fname);
	if(!ifile)
	{
		cout<<"Error in opening file..!!";
		std::cin.get();
		exit(0);
	}
	while(ifile.eof()==0)
	{
        ifile>>s;
        cout<<s<<" ";
	}
	cout<<"\n";
	ifile.close();
	std::cin.get();
    return 0;
}