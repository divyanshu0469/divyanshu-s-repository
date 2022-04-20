#include<iostream>
using namespace std;
class numbers {
      private:
      int c1,c2;
      public:
      Rectangle()
      {
            c1=5+3i,c2=6-4i;
      }
      int add(){
            int a=(c1+c2);
            cout<<"sum is "<<a;
      }
};
int main()
{
      numbers r1;
      r1.add();
      return 0;
}