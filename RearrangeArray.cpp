#include<iostream>
#include<vector>
using namespace std;

int main(){
  int input_array[] = {3,2,0,1};
  vector<int> A(begin(input_array), end(input_array));
  for(int i=0;i<A.size();i++){
    A[i] += ((A[A[i]] % A.size()) * A.size());
  }
    
  for(int i=0;i<A.size();i++){
    A[i] = A[i]/A.size();
  }
  for(int i=0;i<A.size();i++){
    cout<<A[i]<<endl;
  }
return 0;
}
