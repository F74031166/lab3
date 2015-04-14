#include<iostream>
#include<vector>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
	fstream filein, fileout;
	filein.open("file_in.txt",ios::in);
	fileout.open("file_out.txt",ios::out);
	int total,i,sum=0;
	filein>>total;
	vector<int> cow;
	cow.resize(total);
	int cowskg;
	for(i=0;i<total;i++)
	{
		filein>>cowskg;
		cow[i]=cowskg;
	}
	sort(cow.begin(),cow.end());
	for(i=0;i<5;i++)
		sum=sum+cow[total-i-1];
	cout<<sum<<endl;
	filein.close();
	fileout.close();
	return 0;
}
