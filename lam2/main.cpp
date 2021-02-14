#include <iostream>

using namespace std;
bool kiemTra(int n)
{
    if(n<2)
    {
        return false;
    }
    else if(n==2)
    {
        return true;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }

}
int timMax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    int *arr = new int [100];
    int *temp = new int [100];
    int itemp = 0;
    cout<<"Nhap n:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(kiemTra(arr[i]))
        {
            temp[itemp]=arr[i];
            itemp++;
        }

    }
    int max=timMax(temp,itemp);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            cout<<"vitri max="<<i<<endl;
        }
    }
    return 0;
}

