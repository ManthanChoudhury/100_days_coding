// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

int kthlargest(int *, int, int, int);
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<kthlargest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}// } Driver Code Ends

//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthlargest(int arr[], int l, int r, int k) {
    //code here
    //! tym compexcity O(N log K)
    priority_queue<int,vector<int>,greater<int> > minheap;

    for (int i = 0; i <= r ; i++)
    {
        minheap.push(arr[i]);
        if (minheap.size()>k)
        {
            minheap.pop();
        }
        
    }
    while (minheap.size() >0)
    {
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
    
    return 0;
}