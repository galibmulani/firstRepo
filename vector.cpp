#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int> vector1 = {1, 2, 3, 4, 5};

for (const int &i : vector){
  cout<<i;
}
return 0;
}
