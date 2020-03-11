#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Case1, normalcase) {
  Solution solution;
  int num = 9;
  std::vector<int>actual{9,7,5,11,12,2,14,3,10,6};
  std::vector<int>expected{5,2,3,6,12,7,14,9,10,11};
  solution.rearrange(num,actual);
  EXPECT_EQ(expected, actual);
}

TEST(Case2, changevalue) {
  Solution solution;
  int num = 6;
  std::vector<int>actual{9,7,5,11,12,2,14,3,10,6};
  std::vector<int>expected{9,7,5,11,12,2,3,10,6,14};
  solution.rearrange(num,actual);
  EXPECT_EQ(expected, actual);
}

TEST(Case3, changeinput){
Solution solution;
  int num = 6;
  std::vector<int>actual{7,4,5,6,0,8,23,12,14,1};
  std::vector<int>expected{7,4,5,6,0,8,12,14,1,23};
  solution.rearrange(num,actual);
  EXPECT_EQ(expected, actual);

}