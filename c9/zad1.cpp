
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
  float x, y;
};


int main() {
  vector<Point> vec{};
  vec.push_back(Point {5, 3});

  for (Point p : vec) {
	cout << &p << endl;
  }

  sort(vec.begin(), vec.end(), [](Point a, Point b) { return a.x > b.x; });
  // sort(vec.begin(), vec.end(), cmppoint);


  for (Point p : vec) {
	cout << &p << endl;
  }
  
  
  return 0;
}
