#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int n;
    cin >> n;

    int arr[n+3];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sereja = 0, dima = 0;
    int l = 0;
    int r = n-1;
    int z = 0;

    while(l<=r)
    {
        if(z%2 == 0)
        {
            if(arr[l] > arr[r])
            {
                sereja += arr[l];
                l++;
            }
            else{
                sereja += arr[r];
                r--;
            }

        }
        else{
            if(arr[l] > arr[r])
            {
                dima += arr[l];
                l++;
            }
            else{
                dima += arr[r];
                r--;
            }

        }
        z++;
    }
    cout << sereja << " " << dima <<endl;

    return 0;
}
















 
