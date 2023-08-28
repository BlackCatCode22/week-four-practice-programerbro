#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
// create a map
map <string, int> myDictionary01;
myDictionary01.insert(pair<string, int>("a" , 4));
myDictionary01.insert(pair<string, int>("b" , 3));
myDictionary01.insert(pair<string, int>("c" , 2));
myDictionary01.insert(pair<string, int>("d" , 5));

for (auto pair : myDictionary01){
    cout << pair.first << "-" << pair.second << endl;
}
    return 0;
}
