#include<iostream>
using namespace std;

class Solution{

  public:
  int GreatestCommonDivisor(int a, int b);

};
int Solution::GreatestCommonDivisor(int a, int b) {
    while (b > 0)
    {
      int temp = a % b;
      a = b;
      b = temp;
    }
    return a;
}

  int main(){
    Solution gcd;
    cout<< gcd.GreatestCommonDivisor(82,86);
    return 0;
  }

