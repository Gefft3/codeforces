#include<iostream>

using namespace std;

int main(){

    long long t;

    cin >> t;

    while(t--){
        long long steps = 0 ; 
        long long k, a, b, x, y;

        cin >> k >> a >> b >> x >> y;

        long long minor_cost = min(x, y);
        long long major_cost = max(x, y);

        long long minor_temp;
        long long major_temp;

        if(minor_cost == x){
            minor_temp = a;
            major_temp = b;
        }else{
            minor_temp = b;
            major_temp = a;
        }
 


        if(k >= minor_temp){

            long long diff = abs(minor_temp - k);
            
            steps += (diff / minor_cost) + 1;
            k = k - steps*minor_cost;
        
        }

        if (k >= major_temp){

            long long diff = abs(major_temp - k);

            steps += (diff / major_cost) + 1;
        }     
          
        cout << steps << endl;

    }

    return 0;
}