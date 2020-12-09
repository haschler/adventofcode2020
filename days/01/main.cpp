#include <iostream>
#include <fstream>
using namespace std;

// change if desired; result for test_input should be 514579
#define INPUTFILENAME "test_input"

// Solves part one of the puzzle (silver star)
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

int main()
{
  part1();
 
  return 0;
}
