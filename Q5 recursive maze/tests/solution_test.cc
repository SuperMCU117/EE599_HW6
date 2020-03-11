#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(case1, normalcase) {
  Solution solution;
  std::vector<std::vector<int>>visited{{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}
    ,{0,0,0,0,0}};
  std::vector<std::vector<int>>input{{1,1,0,0,0},{1,0,1,1,1},{1,1,0,0,1},{1,1,0,0,1}
    ,{1,1,1,1,1}};
  bool actual= false;
  solution.findPath(input,visited,0,0,0,4,actual);
  bool expected= false;
  EXPECT_EQ(expected, actual);
}

TEST(case2, changedestination) {
  Solution solution;
  std::vector<std::vector<int>>visited{{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}
    ,{0,0,0,0,0}};
  std::vector<std::vector<int>>input{{1,1,0,0,0},{1,0,1,1,1},{1,1,0,0,1},{1,1,0,0,1}
    ,{1,1,1,1,1}};
  bool actual= false;
  solution.findPath(input,visited,0,0,1,3,actual);
  bool expected= true;
  EXPECT_EQ(expected, actual);
}

TEST(case3, changebegin) {
  Solution solution;
  std::vector<std::vector<int>>visited{{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}
    ,{0,0,0,0,0}};
  std::vector<std::vector<int>>input{{1,1,0,0,0},{1,0,1,1,1},{1,1,0,0,1},{1,1,0,0,1}
    ,{1,1,1,1,1}};
  bool actual= false;
  solution.findPath(input,visited,2,1,4,4,actual);
  bool expected= true;
  EXPECT_EQ(expected, actual);
}