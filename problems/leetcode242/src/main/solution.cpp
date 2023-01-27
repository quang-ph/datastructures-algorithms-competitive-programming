#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iostream>
#include "solution.h"

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  // get input
  string s, t;
  cin >> s >> t;

  Solution solution;
  bool output = solution.isAnagram(s, t);

  // print output
  cout << output << endl;
  
  return 0;
}