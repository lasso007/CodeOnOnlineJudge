/*
 给定一个有n个正整数的数组A和一个整数sum,求选择数组A中部分数字和为sum的方案数。
当两种选取方案有一个数字的下标不一样,我们就认为是不同的组成方案。
*/
/*
  思路:
 给定一个有n个正整数的数组A和一个整数sum,求选择数组A中部分数字和为sum的方案数。
当两种选取方案有一个数字的下标不一样,我们就认为是不同的组成方案。
   解：此题使用递归的遍历方法也可以解决，但是会超时
   dp解决：
   以每个物品作为横轴，以背包容量作为纵轴
       0 1 2 3 4 5 6..........
     0 1 0 0 0 0 0 0..........
     5 1 0 0 0 0 1 0
      
      其中1表示前n件物品放入容量为M的背包有1种方法，（5，0）表示重量为5的物品放入容量为0的背包的背包有1中方法，即不放入。0表示恰好放满背包的方法为0
      当M>weight[i]时，dp[M]=dp[M]+dp[M-weight[i]];意义是：放入物品i和不放入物品i的方法总和

*/
#include<iostream>
