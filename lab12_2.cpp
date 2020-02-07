#include <iostream>
#include <cmath>
using namespace std;

const int N = 32;
const int M = 72;

void updateImage( bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{   
    bool pic[N][M]={};
   // bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(pic);
        cout<<endl;
        cout << "Input your brush size and location:";
        cin >> s >> x >> y;
        updateImage(pic,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;  
             
            
}
/*
void showImage(const bool pic[][M]){

// frame
for(int i=0;i<M;i++)
{cout<<"-";}
cout<<endl;
for(int j=0;j<N;j++)
{cout<<"|";
    for(int i=2;i<M;i++)
    {cout<<" ";}
    cout<<"|";
    cout<<endl;
}

for(int i=0;i<M;i++)
{cout<<"-";}
}
*/
void showImage(const bool pic[][M]){   

    for(int i=0; i<N;i++)
    {
        for(int j=0;j<M;j++){

            if(i==0||i==N-1)
            {
                cout<<"-";
                }
            else if (j==0||j==M-1){
            cout<<"|";}
            else if(pic[i][j]==1)
            cout<<"*";
            else
            {
               cout<<" ";
            }
            


        }
        cout<<endl;
    }
}
void updateImage(bool point[][M],int s ,int x,int y){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if((pow((pow(i-x,2)+pow(j-y,2)),0.5))<=s-1){
               point[i+1][j+1]=1; 
            }
            
        }
    }
}
// Write definition of updateImage() and showImage() here
