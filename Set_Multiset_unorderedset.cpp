#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

void print(set<int> a){

    for(auto i = a.begin(); i != a.end(); i++){
        cout << *i << " ";
    }
   
}

void print_multiset(multiset<int> a){
    for (auto i = a.begin(); i != a.end(); i++){
        cout << *i << " ";
    }
}

void print_unordered(unordered_set<int> a){
    for (auto i = a.begin(); i != a.end(); i++){
        cout << *i << " ";
    }
}

int main ()
{
    // set don't allow dublicate value and set always make asending order...
    cout << "set : ";
    set<int> data;
    data.insert(5);
    data.insert(6);
    data.insert(8);
    data.insert(5);
    data.insert(10);
    data.insert(1);
    print(data);
    // delete
    data.erase(5);// delete through value; 
    auto d = data.find(10);
    if (d != data.end()){
        data.erase(d);
    }
    cout << endl;
    print(data);

cout << endl;

    // dublicate allow and sorting form.
    cout << "multiset : ";
    multiset<int> data_2;
    data_2.insert(5);
    data_2.insert(6);
    data_2.insert(6);
    data_2.insert(5);
    data_2.insert(10);
    data_2.insert(5);
    print_multiset(data_2);
    data_2.erase(5);
    cout << endl;
    // print_multiset(data_2); // erase through value;

    // multiset<int> :: iterator p = data_2.find(5); 
    auto p = data_2.find(5); // find 5 value's add
    if (p != data_2.end()){ // erase through pointer
        data_2.erase(p);
    }
    print_multiset(data_2);

    cout << endl;
    // dublicate not allowed and unsorting form.
    cout << "Unordered set : ";
    unordered_set<int> data_3;
    data_3.insert(5);
    data_3.insert(6);
    data_3.insert(6);
    data_3.insert(5);
    data_3.insert(10);
    data_3.insert(5);
    print_unordered(data_3);
    data_3.erase(6);
    cout << endl;
    print_unordered(data_3); // erase through valu;
    auto q = data_3.find(10);
    if (q != data_3.end()){
        data_3.erase(q);
    }
    cout << endl;
    print_unordered(data_3);






    return 0;
}