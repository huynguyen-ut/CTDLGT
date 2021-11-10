#include <iostream>

using namespace std;
int BinarySearch(int a[], int n, int x)
{
int mid, left=0, right=n-1;
	do
{
		mid=(left+right)/2;
		if(a[mid]==x) return 1;
		else
			if(a[mid]<x)  left = mid+1;
			else  right = mid-1;
}
   	while(left<=right);
	return 0;
}
int BinarySearch_DQ(int a[],int left,int right,int x){
    if(right>=left){
        int mid=(left+right)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return BinarySearch_DQ(a,left,mid-1,x);
        return BinarySearch_DQ(a,mid-1,right,x);

    }
    return -1;

}
int main()
{
    int A[]={1,4,6,8,12,23,45,65};
    cout<<BinarySearch_DQ(A,0,7,12);
    //cout << "Hello world!" << endl;
    return 0;
}
