#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<std::vector<int>>visited{{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}
    ,{0,0,0,0,0}};
    std::vector<std::vector<int>>input{{1,1,0,0,0},{1,0,1,1,1},{1,1,0,0,1},{1,1,0,0,1}
    ,{1,1,1,1,1}};
    bool answer= false;
    solution.findPath(input,visited,0,0,0,4,answer);
    std::cout<<answer<<std::endl;
    return EXIT_SUCCESS;
}