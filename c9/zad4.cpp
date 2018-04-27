
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define contains(vec, el) (find(vec.begin(), vec.end(), el) != vec.end())

vector<int> intersect(vector<int> a, vector<int> b) {
  vector<int> re;
  
  for (int x : a) {
	if (contains(b, x) && !contains(re, x)) {
	  re.push_back(x);
	}
  }

  return re;
}
vector<int> sum(vector<int> a, vector<int> b) {
  vector<int> re;
  
  for (int x : a) {
	if (!contains(re, x)) {
	  re.push_back(x);
	}
  }
  
  for (int x : b) {
	if (!contains(re, x)) {
	  re.push_back(x);
	}
  }
  

  return re;
}

int main() {
  int a_[] = {1,2,3,3,4};
  int b_[] = {3,3,3,4,5,6};
  vector<int> a{a_, a_ + 5};
  vector<int> b{b_, b_ + 6};

  vector<int> inter = intersect(a, b);
  vector<int> su = sum(a, b);

  for (auto x : inter)
	cout << x << ' ';
  cout << endl;
  
  for (auto x : su)
	cout << x << ' ';
  cout << endl;
  
  return 0;
}  
