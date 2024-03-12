#include<iostream>

using namespace std;

int main(){
    // int n[] = {1,2,3,4,5,6,7,8,9,10};

    // for(int i = 0; i < 10; i++){
    //     cout << n[i] << endl;
    // }

    int A[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,0}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}