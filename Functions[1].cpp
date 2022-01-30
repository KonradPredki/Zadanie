#include <iostream>
#include <experimental/filesystem>
#include <fstream>
#include <string>
#include "Program.h"

using namespace std;
namespace fs = experimental::filesystem;


void Program::ReadInput(const string& _name)
{
	ifstream file(_name);

	if (file.good() == false)
	{
		cout << "File was not opened" << '\n' << '\n';
	}
	else
	{
		string line;
		int line_number = 0;

		while (!file.eof())
		{
			getline(file, line);
			line_number++;
		}

		file >> line;
		cout << "File: " << _name << " has the number of lines equal to: ";
		cout << line_number << '\n' << '\n';
	}
}

size_t Program::ContentDirectory(fs::path path)
{
	return (size_t)distance(fs::directory_iterator{ path }, fs::directory_iterator{});
}

void Program::CountChar(const string& _name)
{
	int count; 
	ifstream fin(_name);
	for (count = 0; fin.get() != EOF; count++) {}
	cout << "Liczba znakow wynosi: " << count << endl;
}