#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int arr[1000];
        arr[1]=1;
        arr[2]=1;
        for(int i=3;i<=1000;i++){
                arr[i]=arr[i-1]+arr[i-2];
        }

        int n;
        cin>>n;
        cout<<arr[n];
        return 0;
}
