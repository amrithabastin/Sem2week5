/*quick sort*/
#include <iostream>

using namespace std;


/*//#include<iostream>
using namespace std;
void quicksort(int array[],int f,int l)
{
	//for the case its only one element left
	
	{
		int pivot=l,temp;
		
		
	}
}
void output
int main()
{
	
	return 0;
}*/

void partn(int arr [] ,int  l, int f,int pivot){

	int temp;
	for(int i=l-1;i>=f;i--)
		{
		if(arr[i]>arr[pivot])
			{
				
			
				temp=arr[i];
				for(int j=i;j<pivot;j++)
				{
					arr[j]=arr[j+1];
				}
				arr[pivot]=temp;
				pivot--;
			}
	
		}

}



void quicksort(int arr[] ,int l,int f){

	int pivot = l;
	if(f<l)
	partn(arr,l,f,pivot);
	quicksort(arr,f,pivot-1);
	quicksort(arr,pivot+1,l);
}

void output(int array[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}




int main(){


	//declaring variables
	int n;
	//taking the inputs
	cout<<"Enter the length of array:-";
	cin>>n;
	int array[n];
	cout<<"start entering elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	quicksort(array,0,n-1);
	output(array,n);







return 0;
}
