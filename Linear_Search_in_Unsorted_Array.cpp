//Array of size NUM....searching key element and counting steps....
#include<iostream>
using namespace std;

int main()
{
    int NUM,n;
    cout << "Enter number of test cases: ";
    cin >> n;
    
    
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter size of array: ";
        cin >> NUM;
        
        int arr[NUM];
        
        cout << "Enter elements of array: ";
        for(int i = 0; i < NUM; i++)
        {
            cin >> arr[i];
        }
    
        cout << "Entered array is: ";
        for(int i = 0; i < NUM; i++)
        {
            cout << arr[i] << " ";
        }
        
        int key, flag = 0, steps = 0;
        cout << "\nEnter element to search: ";
        cin >> key;
            for(int i = 0; i < NUM; i++)
            {
                steps++;
                if(key == arr[i])
                {
                    cout << "Present " << steps;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                cout << "Not Present " << NUM;
            }
            
    }
    return 0;
}
