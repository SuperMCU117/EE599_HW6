#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(case1,normalcase) {
  
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
  std::vector<int> actual = g.dfs(vertices,0);
  std::vector<int> expected {0,1,2,3,4,6,5};
  EXPECT_EQ(expected, actual);
}


TEST(case2,normalcase) {
  
  std::map<int, std::set<int>> vertices{
        
        {0,{1,3,7}},
        {1,{0,2}},
        {2,{1}},
        {3,{4,0}},
        {4,{3}},
        {5,{6,8}},
        {6,{7,5}},
        {7,{0,6,8}},
        {8,{7,5}},

    };
  Solution g(vertices);
  std::vector<int> actual = g.dfs(vertices,0);
  std::vector<int> expected {0,1,2,3,4,7,6,5,8};
  EXPECT_EQ(expected, actual);
}

TEST(case3,changestartNode) {
  
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
  std::vector<int> actual = g.dfs(vertices,2);
  std::vector<int> expected {2,0,1,3,4,6,5};
  EXPECT_EQ(expected, actual);
}