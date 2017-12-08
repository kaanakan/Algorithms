#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int g;
    cin >> g;    
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        cin >> n >> m >> x;
        
        vector<int> a(n);
        for(int a_i = 0; a_i <n; a_i++){
           cin >> a[a_i];
        }
        
        vector<int> b(m);
        for(int b_i =0; b_i <m; b_i++){
           cin >> b[b_i];
        }
        
        int total=0,cnt=0,qq=0,ww=0;        
        
        while(qq<n){
            if(total+a[qq] > x) break;
            total+=a[qq++];
        }
        cnt=qq;        
       
        while(ww<m and qq>=0){        
            total += b[ww++];             
            while(qq>0){
                if(total <= x) break;
                total -= a[--qq];
            }
            if(total <= x and qq+ww>cnt)
                cnt=qq+ww;
        }
        cout<<cnt<<endl;
    } 
    return 0;
}
