#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
using namespace std;

void print(map<string, int> data){
    for (auto &it : data){
        cout << it.first << " - " << it.second << endl;
    }
}

void print_unordered(unordered_map<string, int> a){
    for (auto &it : a){
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    // map can't accept duplicat key..it replace value after getting duplicat..and map formed sorted order..
    // map perform O(long n) for each statement..map can hold comlext data ..like vector, vector of vector, set of set.
    map<int, string> data;
    // if i don't set key value than it hold default value..like int = 0, string = "".
    data.insert(make_pair(1, "rifat"));
    data.insert(make_pair(2, "sifat"));
    data.insert(make_pair(3, "rakib"));
    data.insert(make_pair(4, "rahat"));
    data.insert(make_pair(5, "sabbir"));

    // print(data);


    // map<string, int> data_2;
    // for (int i = 0; i < 5; i++){
    //     string s;
    //     cin >> s;
    //     // data_2[s] = data_2[s] + 1;
    //     data_2[s]++;
    // }
    // // print(data_2);

    // auto ans = data_2.find("rifat");
    // cout << endl << (*ans).second;
    // cout << endl;

    map<string, vector<string>> data_3;
    vector<string> gazi = {"rifat", "sifat", "rakib", "raju"};
    vector<string> islam = {"rabbi", "siam", "hasan"};
    vector<string> cow = {"sayed", "yeamin", "jahid", "sakib"};
    
    data_3.insert(pair<string, vector<string>> ("gazi", gazi));
    data_3.insert(pair<string, vector<string>> ("islam", islam));
    data_3.insert(pair<string, vector<string>> ("cow", cow));

    for (auto &it : data_3){
        cout << it.first << " - ";
        for (auto &pt : it.second){
            cout << pt << " ";
        }
        cout << endl;
    }

    // unordered Map can't accept duplicat key..it replace key and value after getting duplicate..unordered formed random .. 
    // unordered map perform O(1) for each statement..becauge it form in random..unordered can't hold complext data..it hold basic data.like int, string, int ..

    unordered_map<string, int> data_4;
    // if i don't set key value than it hold default value..like int = 0, string = "".
    for (int i = 0; i < 5; i++){
        string s;
        cin >> s;
        data_4[s];
    } 

    print_unordered(data_4);



    return 0;
}