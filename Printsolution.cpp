 #include<iostream>
using namespace std;
void soln(int arr[],int start,int end,int c)
{
    if(start>end)
    {
         for(int i=0;i<=end;i++)
            cout<<arr[i]<<" ";
        cout<<endl;    
    }
    else
    {
        for(arr[start]=c;arr[start]>=0;arr[start]--)
            soln(arr,start+1,end,c-arr[start]);
    }
}
int main()
{
    int c,len;
    cout<<"Enter the length of array\n";
    cin>>len;
    cout<<"Enter the value of constant\n";
    cin>>c;
  int *arr=new int[len];
    soln(arr,0,len-1,c);
    return 0;

}