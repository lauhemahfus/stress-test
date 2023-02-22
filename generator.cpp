
#include <bits/stdc++.h>
using namespace std;
int upper = 1e5;
int lower =0;
ofstream testcase_file("testcase.txt");
long long int random(){
    return (rand() % (upper - lower + 1)) + lower;
}
 void type1(){
     /*
         n
         a1 a2 a3 a4 ... an
     */
     long long int n = random();
     testcase_file << n<<endl;
      for(long long int i =0; i<n; i++){
          testcase_file << random() << " ";
      }
    testcase_file <<endl;
     testcase_file.close();
 }

void type2(){
     /*
         n m
         v1 u1
         v2 u2
         v3 u3
         v4 u4
         .....
         .....
         vm um
     */
     long long int n = random();
     upper = n;
     long long int m = random();
     testcase_file << n << " " <<m <<endl;
      for(long long int i =0; i<m; i++){
          testcase_file << random() << " " << random()<<endl;;
      }
      testcase_file <<endl;
     testcase_file.close();
 }
 void type3(){
     /*
         n m
         v1 u1 k1
         v2 u2 k2
         v3 u3 k3
         v4 u4 k4
         .....
         .....
         vm um k5
     */
     long long int n = random();
     upper = n;
     long long int m = random();
     testcase_file << n << " " <<m <<endl;
      for(long long int i =0; i<m; i++){
          testcase_file << random() << " " << random() << " " << random()<<endl;;
      }
      testcase_file <<endl;
     testcase_file.close();
 }

int main(){
    srand(time(0));
    upper = 10;
    lower = 1;
    type1();
}


