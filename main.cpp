#include <iostream>
#include <list>
#include <map>
using namespace std;

int main() {

    //list
    list<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);
    list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    list<int>::iterator eraseIt = numbers.begin();
    eraseIt++;
    eraseIt = numbers.erase(eraseIt);
    cout << "Element: " << *eraseIt << endl;
    for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }

    //map
    map<string, int> ages;
    ages["Mike"] = 40;
    ages["Kevin"] = 29;
    ages["Patrick"] = 32;

    ages.insert(make_pair("Peter", 100));

    if(ages.find("Kevin") != ages.end()) {
        cout << "Found Kevin" << endl;
    }

    for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}