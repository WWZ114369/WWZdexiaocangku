#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class resistor
{
    string name;
    string node1;
    string node2;
    double value;
};
class source
{
    string name;
    string node1;
    string node2;
    double value;
};
class capacitor
{
    string name;
    string node1;
    string node2;
    double value;
};
int main(int argc,char* argv[])
{
	if(argc<2)
	{
		cout<<"error"<<endl;
		return 1;
	}
	ifstream file(argv[1]);
	if(!file.is_open())
	{
		cout<<"error";
		return 1;
	}
	string line;
	while(getline(file,line))
	{
		//在这里面判断 原件种类并输出 ，如果识别到元件的特征字符就进行录入 并创建一个txt文件写入 
	}
	return 0; 
}
