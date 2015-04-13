# lab3
questionA:
  
  編譯時 g++ -o main main.cpp
  
  執行時 ./main
  
questionB:

  size=1000時 sort()=0s insertion_sort()=0s
  
  size=10000時 sort()=0s insertion_sort()=1.28s
  
  size=100000時 sort()=0.04s insertion_sort()=128.37s
  
  size=1000000時 sort()=0.51s insertion_sort()=非常久的時間
  
  

  sort()最高排列次數為n logn  insertion_sort()最高排列次數為n^2
  
  所以用sort()會比較快
  
  在size小的時候差異還比較不明顯 當size成長之後差距就變很大
