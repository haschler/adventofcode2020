#include <iostream>
#include <fstream>
using namespace std;

// change for real input...
#define INPUTFILENAME "test_input"

// Solves part one of the puzzle (silver star)
// Correct result for test data: 514579
void part1()
{
  // step 0: data structures
  int data[1000];
    
  ifstream inputFile(INPUTFILENAME);
  int n = 0;  // counter
  int x;

  // step 1: read data
  while(inputFile >> x){
    data[n++] = x;  // uses post-increment because i know how to use it correctly ;-)
    // challenge: how to express this without using ++ ?
    // cout << x << endl;
  }
  inputFile.close();

  // step 2: process data
  int a, b;
  for(int i = 0; i != n; i += 1)
    for(int j = 0; j != n; j += 1)
    {
      if(i == j)
        continue;
      if(data[i] + data[j] == 2020)
      {
        a = data[i];
        b = data[j];
      }
    }
  
  // step 3: calculate and output result
  int result = a * b;
  cout << "Result: " << result << endl;
}

// Solves part two of the puzzle (gold star)
// Correct result for test data: 3087474
void part2()
{
  // some lines are the same as in part1 (not commented again)
  // challenge: how could you improve the code?

  // step 0: data structures
  int data[1000];
    
  ifstream inputFile("input");
  int n = 0;
  int x;

  // step 1: read data
  while(inputFile >> x){
    data[n++] = x;
    //cout << x << endl;
  }
  inputFile.close();

  // step 2: process data
  int a, b, c;
  for(int i = 0; i != n; i += 1)
    for(int j = 0; j != n; j += 1)
      for(int k = 0; k != n; k += 1)
      {
        if(i == j or i == k or j == k)
          continue;
        if(data[i] + data[j] + data[k] == 2020)
        {
          a = data[i];
          b = data[j];
          c = data[k];
        }
      }
  
  // step 3: calculate result
  int result = a * b * c;
  cout << "Result: " << result << endl;
}


int main()
{
  part1();
  part2();
 
  return 0;
}
