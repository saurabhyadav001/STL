#include<bits/stdc++.h>
using namespace std;
void countfrequency(int arr[], int size){
    unordered_map<int,int> mp;
    for(int i=0; i<size;i++){
         mp[arr[i]]++;
    }
    for(auto x: mp) 
    cout<<x.first<<" "<<x.second<<endl;
}
int main(){
    int arr[] = {1,1,1,2,2,2,33,3,3,3,440};
    int size = sizeof(arr)/sizeof(arr[0]);
    countfrequency(arr, size);
return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// void frequency(string str){
//     unordered_map<int,int> mp;
//     for(char i : str) {
//         mp[i]++;
//     }
//     for(char i: str){
//         if(mp[i]!=0){
//             cout<<i<<"--"<<mp[i]<<" "<<endl;
//             mp[i]=0;
//         }
//     }
// }
// int main(){
//     string str = "saurabh yadav";
//     frequency(str);

// return 0;
// }