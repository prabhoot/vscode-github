#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int sum_of_digits(int n) {
  int c = n;
  int a = c / 10;
  int b = n - a * 10;
  return a + b;