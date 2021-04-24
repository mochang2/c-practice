#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int>assoc_map;
	assoc_map["Lee"] = 100;
	assoc_map["Kim"] = 105;

	for (map<string, int>::iterator ai = assoc_map.begin();
		ai != assoc_map.end(); ai++)
	{
		cout << ai->first << ":" << ai->second << endl;
	}
	assoc_map["Gang"] = 120;

	int v = assoc_map.find("Kim")->second;
	cout << v << endl;

	assoc_map.erase("Lee");
	
	map<string, int>::iterator itr = assoc_map.find("Lee");

	if (itr == assoc_map.end())
	{
		cout << "There seems to be no entry \"Lee\"" 
			<< endl;
	}

	return 0;
}
