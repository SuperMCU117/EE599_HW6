#include "solution.h"
#include<algorithm>
#include<vector>
#include<iostream>
void Solution::rearrange(int num, std::vector<int>&input){
  int buffer = 0;
  int pivot = 0;
  int first = 0;
  int last = input.size();
  for (int n:input) {
    if(n==input[num]) pivot=buffer;
    buffer++;
  }
  
  int k = 0;
  for (first;first<last;first++){
    if (input[first]<input[pivot]){
        std::swap(input[first],input[k]);
        k++;
        if (first>num) pivot+=1;
        for (auto n : input){ std::cout<<n<<" ";}
        std::cout<<std::endl;
       
        

    }

  }
  std::swap(input[pivot],input[k]);
  
}

