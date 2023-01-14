#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char comp[3]={'A','B','C'};
int main() 
{
  //Creating Bitmask and Print Combination
    for(int i=0;i<8;i++){
      for(int j=0;j<3;j++){
        if((i&(1<<j))){
          cout<<comp[j]<<" ";
        }
      }
      cout<<endl;
    }
    //cout<<((1<<2)&1);
    
}