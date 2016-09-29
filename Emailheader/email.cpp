#include<fstream>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int count=0;
	ifstream fin;
	string line;
	fin.open("emailheader.txt");

	cout<<"\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";

	while(getline(fin,line))

	{

	if (line.find("Delivered-To:") != string::npos) {
		    cout << line << endl;
	cout<<"\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
		}
	if (line.find("Return-Path:") != string::npos) {
		    cout << line << endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
	}
	      
	if (line.find("DKIM-Signature:") != string::npos) {
		    cout << line << endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";

		}
	if (line.find("Sender:") != string::npos) {
		    cout << line << endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";

		}
	if (line.find("MIME-Version:") != string::npos) {
		    cout << line << endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";

		}
	if (line.find("From:") != string::npos) {
		    cout << line << endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";

		}
	if (line.find("Date:") != string::npos) {
		    cout << line << endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";

		}

	}


	 system("grep -o --color '^[A-Z].*: ' emailheader.txt");
	cout<<"Number of Tokens :"<<endl;
	 cout<<system("grep -c '^[A-Z].*: ' emailheader.txt"); 
	return 0;
}
