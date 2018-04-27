
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

template <typename Iterator>
void print_all(Iterator beg, Iterator end) {
  while (beg != end) {
	cout << *beg << endl;
	beg++;
  }
}

int main() {
  string str[] = { "aaa", "bbb", "ccc" };
  vector<string> vec{str, str + 3};
  list<string> lst{str, str + 3};

  print_all(vec.begin(), vec.end());
  print_all(lst.begin(), lst.end());
  
  return 0;
}  
