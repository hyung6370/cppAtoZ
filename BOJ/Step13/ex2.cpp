#include <iostream> 
#include <set>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;
	Person(string _name, int _age) : name(_name), age(_age) {};
	bool operator< (const Person& p) const 
	{
		if (name < p.name) {
			return true;
		}
		else if (name == p.name) {
			if (age < p.age) {
				return true;
			}
		}
		return false;
	}
};


int main() {

	set<Person> myset;

	myset.insert(Person("John1", 30));
	myset.insert(Person("John2", 21));
	myset.insert(Person("John3", 31));
	myset.insert(Person("John4", 19));
	myset.insert(Person("John5", 25));

	auto pos = myset.find(Person("John5", 25));

	if (pos == myset.end()) {
		cout << "Not found" << endl;
	}
	else {
		cout << "Found" << endl;
	}

	pair <set<Person>::iterator, bool> res = myset.insert(Person("John6", 19));
	res = myset.insert(Person("John6", 99));
	if (res.second == false) {
		cout << "Already exist" << endl;
	}
	else {
		cout << "Insertion success" << endl;
	}


	for (auto& e : myset) {
		cout << e.name << " is " << e.age << "years old." << endl;
	}

	cout << endl;
	myset.erase(Person("John3", 31));

	for (auto& e : myset) {
		cout << e.name << " is " << e.age << "years old." << endl;
	}

	return 0;

}