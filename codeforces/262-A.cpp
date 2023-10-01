#include <bits/stdc++.h>
using namespace std;
int getLuckyDigitCount(int number)
{
   int luckyDigitCount = 0;
   while (number > 0)
   {
      int digit = number % 10;
      if (digit == 4 || digit == 7)
         luckyDigitCount++;
      number /= 10;
   }
   return luckyDigitCount;
}
int main()
{
   int n, k;
   cin >> n >> k;
   vector<int> numbers(n);
   int count = 0;
   int input;
   for (int i = 0; i < n; i++)
   {
      cin >> input;
      if (getLuckyDigitCount(input) <= k)
      {
         count++;
      }
   }

   cout << count << endl;
}