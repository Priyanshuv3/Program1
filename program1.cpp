#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int check ,count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1;j<n; j++)
        {
            check=arr[i]+arr[j];
            for (int k = 0; k<n; k++)
            {
                if (check==arr[k])
                {
                    count++;
                }
            }
            
        }
        
    }
    cout<<count;
    
}