#include <bits/stdc++.h>
using namespace std;
int A[1000];
void sort_it(int N)
{

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N, greater<int>());
}
int main()
{
    int N;
    cin >> N;
    sort_it(N);

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
}