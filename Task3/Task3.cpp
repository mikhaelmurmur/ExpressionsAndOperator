// Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

struct ValuePair
{
	int sum, number_of_elements;
};

int main()
{
	map<string, ValuePair> values;
	int n;
	string name_value;
	int number_value;
	cin >> n;
	while(n-->0)
	{
		cin >> name_value;
		cin >> number_value;
		if(values.find(name_value)== values.end())
		{
			ValuePair vp;
			vp.number_of_elements = 1;
			vp.sum = number_value;
			values.insert(make_pair(name_value,vp));
		}
		else
		{
			values[name_value].sum += number_value;
			values[name_value].number_of_elements++;
		}
	}
	
	for(const auto& elem:values)
	{
		cout << elem.first << ": " << endl;
		cout << "Average: " << elem.second.sum / elem.second.number_of_elements << endl;
		cout << "Sum: " << elem.second.sum << endl;
	}

	cin.get();
	cin.get();
    return 0;
}

