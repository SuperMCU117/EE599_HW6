#include "solution.h"
#include <stack>
std::vector<int> Solution::dfs(std::map<int,std::set<int>>input,int root){
  int count =input.size();
  
  std::vector<int> visited;
  std::vector<bool> checkvisited;
  std::stack<int> neighbor;
  for (count;count>0;count--){
    checkvisited.push_back(false);
  }
  
  
  
  neighbor.push(root);
  while (!neighbor.empty()){
    int visiting = neighbor.top();
    neighbor.pop();
    if (!checkvisited[visiting])
    visited.push_back(visiting);
    checkvisited[visiting]=true;
    
    std::set<int> buffer = input.at(visiting);
    std::set<int>::reverse_iterator rit;
    for (rit = buffer.rbegin(); rit != buffer.rend(); rit++) {
        if (!checkvisited[*rit]){
        neighbor.push(*rit);
    }
  }
}
return visited;
} 


 std::vector<int> Solution::DFS_ALL(){
  /*myMap.begin()->first to get the key and
   myMap.begin()->second to get the value.  */
  int root1 = v_.begin()->first;
  std::vector<int>visited = dfs(v_,root1);
  for (auto it = v_.begin()->first;it!=v_.end()->first;it++){
    bool token = false;
    for (auto n : visited){
      if (n==it) token = true;

    }
    
    if (token == false) {
      std::vector<int> temp = dfs(v_,it);

    
      for (auto n : temp){
        visited.push_back(n);
    }
      visited.erase(unique(visited.begin(),visited.end()),visited.end());
    }
    
  }
return visited;
  }




