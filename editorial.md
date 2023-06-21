# Editorial
**1.	Brute Force**
One possible approach to the problem given is to try to split the problem set in all possible ways and obtain their sum and observe whether the maximum time taken by Anaswar or Sanskaar is less than or equal to time left.
We know that for a given set of length N. Total subsets formed are **2<sup>N</sup> . Hence iterating over all the subsets will give us a solution of order **O(2<sup>N</sup>)**.

**2.	Optimised Approach**
Let us take a closer look at the problem. Here, it seems that even though they work as a team. But on splitting the questions they are different individuals working on **DIFFERENT** problem-sets with **SAME** time remaining in the contest to be over. Hence the problem can be also be posed as that we have to split the subsets in such a way that the sum of each subset is less than or equal to X . Of course ,these two sets will be distributed between Sanskaar and Anaswar and since they both are equally capable of solving all the problems it is not necessary in which order we distribute the subsets between them. And since we are only interested whether the problems can be distributed in such a way that they are completed in the time left let us consider two variables sanskaar_time and anaswar_time which keep the track record of the total time taken by each to solve their subsets.
The logic to this problem is that we sort the array and check whether Sanskaar or Anaswar can complete it in the time left and do the same again and again over the whole loop and if both the candidates can’t solve the problems in the leftover time at any point in the iteration we break out of the loop and output 
No.
