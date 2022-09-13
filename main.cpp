#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main()
{
	srand(time(NULL));
	string line;
	int line_count = 0;
	vector<string> list;
	
	while (getline(cin, line))
	{
		line_count++;
		list.push_back(line);
	}

	for (int i=0; i<line_count; i++)
	{
		int pos = rand() % (line_count - i);
		cout << list.at(pos) << endl;
		list.erase(list.begin()+pos);
	}
}
