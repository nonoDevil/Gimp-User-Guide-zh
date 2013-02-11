// =====================================================================================
// 
//       Filename:  sortfile.cpp
//
//    Description:  对wordMap.txt按字母顺序进行排序
//
//        Version:  1.0
//        Created:  2013年02月10日 15时07分53秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Jiajie.Chen, linux.kakit@gmail.com
//        Company:  Class 1001 of Software Engineering, XUPT
// 
// =====================================================================================

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;


#define DEBUG 0

bool ignore_case_compare(string str1, string str2);


int main(int argc, char *argv[])
{
	vector<string> word; 
	ifstream infile("wordMap.txt");
	
	
	if (!infile) 
	{
		cerr << "错误：无法打开文件:  "
		     << infile << endl;
		
		return -1;
	}
	/*
	 * 以一行一行的方式来读取文件
	 */
	string line;
	while (getline(infile, line))
	{
#if DEBUG
		cout << line << endl;
#endif
		word.push_back(line);
	}
	infile.close();
#if DEBUG	
	cout << "===========================================" << endl ;
	cout << "size = " << word.size() << endl;
#endif
	/*
	 * 对读取的文件进行排序，使用自己的compare函数，来忽略大小写
	 */
	sort(word.begin(), word.end(), ignore_case_compare);
	int i = 0;
#if DEBUG
	while (i < word.size())
	{
		cout << word[i] << endl;
		i++;
	}
#endif

	ofstream outfile("wordMap.txt", ofstream::out | ofstream::trunc);
	i = 0;
	while (i < word.size())
	{
		outfile << word[i] << endl;
		i++;
	}
	outfile.close();

	cout << "wordMap.txt 排序成功!" << endl;

	return 0;
}

bool ignore_case_compare(string str1, string str2)
{
	int len = 0;

	len = str1.length() < str2.length() ? str1.length() : str2.length();

	for (int i = 0; i < len; ++i) 
	{
		if (tolower(str1[i]) != tolower(str2[i]))
		{
			return (tolower(str1[i]) < tolower(str2[i]) ? true : false);
		}
	}

	return true;
}
