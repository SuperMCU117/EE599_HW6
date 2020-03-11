#include "solution.h"

bool Solution::isReachable(std::vector<std::vector<int>>input,std::vector<std::vector<int>>visited,int row, int column){
  if(input[row][column]==0 || visited[row][column]) return false;
  return true;
}
bool Solution::inRange(std::vector<std::vector<int>>input,int row, int column){
  if(row<input.size()&&column<input[0].size()&&row>=0&&column>=0) return true;
  return false;
}

void Solution::findPath(std::vector<std::vector<int>>input,std::vector<std::vector<int>>visited,int currentRow,int currentColumn,int row, int column,bool &answer){
  if (currentRow==row&&currentColumn==column)  answer=true;
  visited[currentRow][currentColumn]=1;
  if(inRange(input,currentRow+1,currentColumn)&&isReachable(input,visited,currentRow+1,currentColumn))
  findPath(input,visited,currentRow+1,currentColumn,row,column,answer);
  if(inRange(input,currentRow,currentColumn+1)&&isReachable(input,visited,currentRow,currentColumn+1))
  findPath(input,visited,currentRow,currentColumn+1,row,column,answer);
  if(inRange(input,currentRow-1,currentColumn)&&isReachable(input,visited,currentRow-1,currentColumn))
  findPath(input,visited,currentRow-1,currentColumn,row,column,answer);
  if(inRange(input,currentRow,currentColumn-1)&&isReachable(input,visited,currentRow,currentColumn-1))
  findPath(input,visited,currentRow,currentColumn-1,row,column,answer);

  visited[currentRow][currentColumn]=0;


}



