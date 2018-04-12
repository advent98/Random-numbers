#include<iostream>
#include<random>
using namespace std;

int main()
{
        std::random_device rd;
        std::mt19937 eng1(rd());

        float mean = 40;
        float sd = 2.45;

        std::normal_distribution<float>norm(mean,sd);

        for(int n=0; n<100; n++)
      {

          cout<<norm(eng1)<<" ";
      }
}
