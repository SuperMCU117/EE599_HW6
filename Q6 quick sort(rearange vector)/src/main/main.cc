#include <iostream>
#include "src/lib/solution.h"
#include <vector>

int main()
{
    Solution solution;
    std::vector<int>input{7,4,5,6,0,8,23,12,14,1};
    int i = 6;
    solution.rearrange(i,input);
    for (int n : input){
          std::cout<<n<<" ";
          }
    std::cout<<std::endl;
    
    

    return EXIT_SUCCESS;
}
