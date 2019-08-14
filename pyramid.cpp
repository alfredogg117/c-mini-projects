#include <iostream>

using namespace std;

int main()
{
    
    int r = 0;
    int c = 0;
    cout<<"Enter the amount of rows"<<endl;
    
    cin>>r;
    if(r<0){
        cout<<"can not be lower than 0, try again"<<endl;
        return 0;
    }
    c = r*2;
    
    
    int min = 0;
    int max = 0;
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            min = (r-1)-i;
            max = (r-1)+i;
            if(j>=min and j<=max)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
