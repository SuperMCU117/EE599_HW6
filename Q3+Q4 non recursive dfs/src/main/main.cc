#include <iostream>
#include<string>
#include<algorithm>
#include<map>
#include <string>
#include <vector>
#include <set>
#include<stack>
#include "src/lib/solution.h"




int main(){
    std::map<int, std::set<int>> vertices{
        
        {0,{1,2,5}},
        {1,{0,2,3}},
        {2,{1,3,0}},
        {3,{4,6,1,2}},
        {4,{3}},
        {5,{0}},
        {6,{3}},

    };
    Solution g(vertices);
    std::vector<int> input2 = g.dfs(vertices,2);
    std::vector<int>input =  g.DFS_ALL()  ;    //
    for(auto n : input2){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;


    return EXIT_SUCCESS;
}