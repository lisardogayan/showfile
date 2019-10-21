/* C++ Program - Read and Display File 
   References:
   https://www.includehelp.com/cpp-programs/read-text-file.aspx
   https://codescracker.com/cpp/program/cpp-program-read-and-display-file.htm  
   http://timmurphy.org/2010/09/27/reading-from-a-file-in-c/  */
		
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
	cout << "Enter file name to read and display its content (like file.txt) : ";
	cin >> fname;
	ifile.open(fname);
	if(!ifile)
	{
		cout << "Error in opening file: " 
             << fname
             << ". Aborting program."
             << std::endl;
		std::cin.get();
		return 1;
	}
    // read each line and print it to the screen
    int lineCount = 0;
    std::string line;
	while(ifile.eof()==0)
	{
        std::getline (ifile, line);
        std::cout << ++lineCount 
                  << ": "
                  << line
                  << std::endl;
	}
	cout<<"\n";
	ifile.close();
	std::cin.get();
    return 0;
}