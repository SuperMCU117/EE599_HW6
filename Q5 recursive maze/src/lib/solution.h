#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  bool isReachable(std::vector<std::vector<int>>input,std::vector<std::vector<int>>visited,int row, int column);
  bool inRange(std::vector<std::vector<int>>input,int row, int column);
  void findPath(std::vector<std::vector<int>>input,std::vector<std::vector<int>>visited,int currentRow,int currentColumn,int row, int column,bool &answer);
};

#endif