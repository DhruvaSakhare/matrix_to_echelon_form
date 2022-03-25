#include <iostream>
#include<conio.h>   
 #include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{   
    // this code is for printing the lines for interface
    
    cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<">";   
        } 
        cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<"<";   
        } 
cout<<"\n";
  
cout<<"\n";

cout<<"Welcome to PBL project by group 4\n";
cout<<"The Echoleon form converter and no of solutions calculator\n";
int s=0;
cout<<"press any key to continue............\n";
 
cin>>s;
if(s){
    system("clear");
}
cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<">";   
        } 
        cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<"<";   
        } 
cout<<"\n";


// this is the code for the 3*3 matrix and arr is the 3*3 matirx

float arr[3][3];
    float temp,temp2;
    cout<<"Enter the 3x3 coefficient matrix :\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    cout<<"\n";
    }
    
 

    for(int u=0;u<3;u++){

        temp=arr[u][u];

        for(int v=0;v<3;v++){
            if(arr[u][v]!=0){

            arr[u][v]=arr[u][v]/temp;}
        }

        for(int j=(u+1);j<3;j++){
            temp2=arr[j][u];
         
            if(temp2!=0){
                for(int y=0;y<3;y++){
                    
                    arr[j][y]-=temp2*arr[u][y];
                    
                }
            }
        }
    

        
    }
 
//  this is the code for rank of 3*3 
 
    int z=0;
  for(int i=0;i<3;i++){
    int c=0;
    for(int j=0;j<3;j++){
      if(arr[i][j]==0){
        c++;
      }
    }
    if(c==3){
      z++;
    }
  }
  
  
  int rank;
    rank=3-z;
    cout<<"Rank = "<<rank<<"\n";
    
// this is the code for displaying the Echoleon form of 3*3 matirx

   cout<<"The Echoleon form matirx is here:";
             for(int i =0;i<21;i++){
            cout<<"-";
        }
        cout<<"\n";
        
        
    for(int aa=0;aa<3;aa++){

        for(int bb=0; bb<3; bb++){
            std::cout << std::setfill(' ') << std::setw(5) 
          << std::fixed << std::setprecision(1)<<arr[aa][bb]<<" |";
         
            
        }
        cout<<"\n";
        
    }
        cout<<"\n";
        for(int i =0;i<21;i++){
            cout<<"-";
        }
        cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<">";   
        } 
        cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<"<";   
        } 
cout<<"\n";
cout<<"press any key to continue............\n";
cin>>s;
if(s){
    system("clear");
}
// this is the end of code for Echoleon form of 3*3 


// this is the code for 3*4 Echoleon form of 3*4 Echoleon code and arrAug is the 3*4 matirx

  float arrAug[3][4];
    float tempAug,tempAug2;
    cout<<"Enter the 3x4 agumented matrix :\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arrAug[i][j];
        }
    cout<<"\n";
    }
    for(int u=0;u<3;u++){

        tempAug=arrAug[u][u];

        for(int v=0;v<4;v++){
            if(arrAug[u][v]!=0){
            arrAug[u][v]=arrAug[u][v]/tempAug;}
        }

        for(int j=(u+1);j<3;j++){
            tempAug2=arrAug[j][u];
            if(tempAug2!=0){
                for(int y=0;y<4;y++){
                    
                    arrAug[j][y]-=tempAug2*arrAug[u][y];
                }
            }

        }
    

        
    }
    
//   this is the code for rank of the augmented matirx     
    int z2=0;
  for(int i=0;i<3;i++){
    int c=0;
    for(int j=0;j<4;j++){
      if(arrAug[i][j]==0){
        c++;
      }
    }
    if(c==4){
      z2++;
    }

    
  }
  
  

  int rankAug;
    rankAug=3-z2;

    cout<<"Rank = "<<rankAug<<"\n";

   cout<<"The Echoleon form matirx is here:";
             for(int i =0;i<21;i++){
            cout<<"-";
        }
        cout<<"\n";
        
        
//this is the code for displaying the augmented 3*4 result  
    for(int aa=0;aa<3;aa++){

        for(int bb=0; bb<4; bb++){
            std::cout << std::setfill(' ') << std::setw(5) 
          << std::fixed << std::setprecision(1)<<arrAug[aa][bb]<<" |";
         
            
        }
        cout<<"\n";
        
    }


cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<">";   
        } 
        cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<"<";   
        } 
cout<<"\n";
int r=0;
cout<<"press any key to continue............\n";
 
cin>>r;
if(r){
    system("clear");
}

// this is the end the code for 3*4 augmented matirx

cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<">";   
        } 
        cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<"<";   
        } 
cout<<"\n";


// this is the determining the final result rank is for 3*3 and rankaug 3*4 this is it 


    int ra=rank, rab=rankAug;

    if(ra==rab && rab==3)
    {
        cout<<" System is consistent."<<endl;
        cout<<" System of quations has unique solution "<<endl;

    }

    else if (ra==rab && rab < 3)
    {
        cout<<" System is consistent "<<endl;
        cout<<" System has infintely many solutions."<<endl;
        cout<<" It has "<< 3 - rab <<" free pararmeterised solutions "<<endl;
        }

        else 
        {
            cout<<" System is inconsistent "<<endl;
            cout<<" System of equation has no solution "<<endl;
        }
    cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<">";   
        } 
        cout<<"\n";
     for(int a=0;a<134;a++){
     cout<<"<";   
        } 
cout<<"\n";
return 0;
}
