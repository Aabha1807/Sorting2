#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int jump(int A[],int N,int a)
{
     int m=pow(N,0.5);
     int l=0;
     while(A[min(N,m)-1]<a)
     {
         l=m;
         m+=sqrt(N);
         if(l>=N)
             return -1;
     }
    while (A[l] < a) 
    { 
        l++; 
        if (l == min(m, N)) 
            return -1; 
    } 
   
    if (A[l] == a) 
        return l+1; 
  
    return -1; 
} 


int main()
{
    int N,a;
    cin >> N;
    int A[N];
    for(int i =0; i<N; i++)
        cin>>A[i];
    cin>>a;
    int index = jump(A,N,a); 
    if(index==-1)
        cout<<"Item is not found in the list";
    else
        cout  << index; 
    return 0; 
   
}