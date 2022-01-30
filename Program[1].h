#pragma once
#include <iostream>
#include <experimental/filesystem>
#include <fstream>
#include <string>
using namespace std;
namespace fs = experimental::filesystem;

class Program 
{
public:
	void ReadInput(const string& _name);
	size_t ContentDirectory(fs::path path);
	void CountChar(const string& _name);
};

