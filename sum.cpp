// change C program to C++; Author: Wang Xuhui

#include <iostream>

#include <cstdlib>

#include <vector>

#define N 40

using namespace std;

inline void sum(int*p, int n, vector<int> d)

{

int i;

*p = 0;

for(i = 0; i < n; ++i)

*p = *p + d[i];

}

int main()

{

int i;

int accum = 0;

vector<int> data(N);

for(i = 0; i < N; ++i)

data[i] = i;

sum(&accum, N, data);

cout<<"sum is "<<accum<<"\n";

return 0;

}