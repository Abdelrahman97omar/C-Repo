#include<iostream>
#include<fstream>
using namespace std;
int main()
{
/*o for output which means i will send data to that file. and ofstream is a class*/
	ofstream myfile("my_file.txt");
	/* I also can do the following:
		ofstream read_my_file;
		read_my_file.open();

		also to check if the file is open (the file exists or not)
		if(read_my_file) or if(read_my_file.isopen())
		cout<<"the file opened";
	*/

	myfile<<"hello, my name is abdelrahman"<<endl;
	myfile<<"my age is "<<25<<endl;
	myfile.close();
	
}