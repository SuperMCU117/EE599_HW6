#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include<string>
#include<algorithm>
#include<map>
#include <string>
#include <vector>
#include <set>
class Solution {
public:
  Solution(std::map<int,std::set<int>> &vertices):
  v_(vertices){}
  std::map<int,std::set<int>>v_;
  std::vector<int> dfs(std::map<int,std::set<int>>input,int root);
  std::vector<int> DFS_ALL();

  //std::vector<int>dfs(std::map<int,std::set<int>> input);
};

#endif