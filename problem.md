# A. Race Against Time!

Sanskaar and Anaswar are participating in the on-site round of **ICPC (International Collegiate Programming Contest).** The problem-set consists of ***N*** questions. An array A is given which denotes the time taken by **i<sub>th</sub>** problem to be solved by both of them (Assume they both are equally capable of solving all the problems in the same time).

But here's the catch! Since Sanskaar and Anaswar were late to the on-site round. They have only ***X*** minutes left to solve all the questions. In order to do so, they devise a plan to split problems between them so that they can complete all the problems.

Since they don't have the time to optimally split problems between themselves they ask for your help. Can you split the problems in such a way that all the problems are solved in the time left?

**Input Format**

The first line contains two space-separated integers 
**N(1≤N≤10<sup>5</sup>)** and **X(1≤X≤10<sup>5</sup>)** -number of questions in the problem-set and time left to solve all the questions.

The second line contains array **A** where **A<sub>i</sub>** denote the time taken by Sanskaar and Anaswar to solve the **i<sub>th</sub>** problem.

**Output Format**

The output shall contain **"Yes"** or **"No"**-whether all the problems can be splitted in such a way that all of them are solved in the time left.

**Examples**

**Input**

5 100

18 1 48 39 44

**Output**

Yes

**Input**

1 1

2

**Output**

No
