#include <iostream>
using namespace std;

class game
{
    int arr[9]={9,9,9,9,9,9,9,9,9};
    public :
    bool checkwin()
    {
        int i = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[0 + i] == arr[1 + i] && arr[1 + i] == arr[2 + i]&&arr[0 + i] !=9 && arr[1 + i] !=9&& arr[2 + i]!=9)
            {
               

                return true;
                
            }
            i = i + 3;
        }
        i = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[0 + i] == arr[3 + i] && arr[3 + i] == arr[6 + i]&&arr[0 + i] !=9&& arr[3 + i]!=9 &&  arr[6 + i]!=9)
            {
               
                return true;
                
                
            }
            i = i + 1;
        }
 
        
            if (arr[0] == arr[4] && arr[4] == arr[8]&& arr[0] !=9 && arr[4] !=9 && arr[8]!=9)
            {
              
                return true;
            }
            if (arr[2] == arr[4] && arr[4] == arr[6]&& arr[2] !=9 && arr[4] !=9 && arr[6]!=9)
            {
                
                return true;
            }
            return false;

        
    }


    void print(int arr[]){
        cout<<"------game started-----------"<<endl;
        cout<<"|";
           for(int j=0;j<3;j++){
              
            if(arr[j]==9){
                cout<<" |";
            }
            if(arr[j]!=9){
                cout<<arr[j]<<"|";
            }
            


            
          } 
            cout<<endl<<"--------";
          cout<<endl;
            cout<<"|";
           for(int j=3;j<6;j++){
             if(arr[j]==9){
                cout<<" |";
            }
            if(arr[j]!=9){
                cout<<arr[j]<<"|";
            }

            
          } 
               cout<<endl<<"--------";
          cout<<endl;
            cout<<"|";
           for(int j=6;j<9;j++){
             if(arr[j]==9){
                cout<<" |";
            }
            if(arr[j]!=9){
                cout<<arr[j]<<"|";
            }
            
            

            
          } cout<<endl;
          }
        
           

          
void getuserinput(){
    for ( int i = 0; i <9; i++)
    {
        arr[i]=9;
    }
 cout<<"where you want to mark first .choose a number from 1 to 9 for diffrent option as given below\n--------\n1|2|3\n-------\n4|5|6\n---------\n7|8|9";
    int j=0;
    int k=0;
     do
    {cout <<endl;
        cin>>k;
    if(arr[k-1]==0||arr[k-1]==1){
        cout<<"cant add to that place";
        
        continue;
    }
    if((j==0)||(j==2)||(j==4)||(j==6)||(j==8)){
        arr[k-1]=0;
    }else{
        arr[k-1]=1;
    }
            print(arr);
            if(((j==0)||(j==2)||(j==4)||(j==6)||(j==8))&&checkwin()==true){
                cout<<"player 1 win";
    
    }
    if(((j==1)||(j==2)||(j==5)||(j==7))&&checkwin()==true){
                cout<<"player 2 win";
     
    }
        
  j++;
        if(j==10){
            cout<<"it is a tie";
        }
       
        
    }while (checkwin() ==false); 
    
}
    
  
    
    
};


int main()
{
int arr1[9];
game g1;

g1.getuserinput();


    return 0;
}