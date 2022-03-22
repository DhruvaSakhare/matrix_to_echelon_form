//Converting a 4x4 matrix to its echelon form

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //taking an array
    float arr[4][4];
    float temp,temp2;
    cout<<"Enter the array :\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    cout<<"\n";
    }
    
    cout<<"The array is "<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
          cout << arr[i][j] << " \n"[j == 2];
        }
          
    }
    cout<<endl;
    //Calculations
        for(int u=0;u<4;u++)
        {
            temp=arr[u][u];

            for(int v=0;v<4;v++)
            {
                if(arr[u][v]!=0)
                {
                arr[u][v]=arr[u][v]/temp; //divide to get 1
                }
            }

            for(int j=(u+1);j<4;j++)
            {
                temp2=arr[j][u];
                
                if(temp2!=0)
                {
                    for(int y=0;y<4;y++)
                    { 
                        arr[j][y]-=temp2*arr[u][y];//subtraction
                    }
                }
            }   
        }
        //printing array
    cout<<"The echelon array is "<<endl;

        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                cout<<" "<<arr[i][j];
            }
        cout<<endl;
        }
    
}