#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers: ";
    cin>>n;
    int array[n];
// input array.....
    for(int i=0; i<n; i++)
    {
        cout<<"Enter number: ";
        cin>>array[i];
    }

//sorting numbers.....
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j < n; j++)
        {
        	if(array[j] < array[i])
        	{
        	// Sawap numbers.......
            int temp;
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
			}
        }
    }

    for(int i=0; i < n; i++)
    {
        cout<<array[i]<<"\t";
    }

    return 0;
}
