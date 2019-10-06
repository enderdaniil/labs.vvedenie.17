#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    int l;
    cout<<"Vvedite L"<<endl;
    cin>>l;
    
    int n;
    cout<<"Vvedite N"<<endl;
    cin>>n;
    
    cout<<"Vvedite massiv"<<endl;
    vector<float> arr(n+1);
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    arr[n]=-498241;
    
    int kolvo=1;
    int counter=0;
    int begin=counter;
    
    while (counter<arr.size()-10)
    {
        if (arr[counter]==arr[counter+1])
        {
            kolvo++;
            counter++;
        }
        else 
        {
            if (kolvo>l)
            {
                for (int i=0; i<counter-begin+1; i++)
                {
                    arr.erase(arr.begin()+begin);
                }
                counter=counter-kolvo;
                begin=counter;
                kolvo=1;
            }
            counter++;
        }
        
    }
    
    arr.erase(arr.end());
    
    copy(arr.begin(), arr.end(), ostream_iterator<float>(cout, " "));
    
    return 0;
    
}
