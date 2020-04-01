#include<bits/stdc++.h>
using namespace std;

int main()
{
  set<int> s;
  int sum=0;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  accumulate(0,2,sum);
}
