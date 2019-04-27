#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;
vector<int> myData;
int seached_item = 7;
void bubble_sort();
void simple_search();
void binary_search();
void generate_data();
void show_data();
int main()
{
    generate_data();
    show_data();

    cout << "---------------------------"<<endl;

    bubble_sort();
    show_data();

    cout << "---------------------------"<<endl;

    simple_search();

    cout << "---------------------------"<<endl;

    binary_search();

    cout << "---------------------------"<<endl;

    return 0;
}
void bubble_sort(){
    for(int step = 0 ; step < myData.size() ; step++){ // myData.size() - 1 : no change in ORDER
        for(int i = 0 ; i < myData.size() - 1 ; i++){
            if(myData.at(i) > myData.at(i+1)){
                int tmp = myData.at(i);
                myData.at(i) = myData.at(i+1);
                myData.at(i+1) = tmp;
            }
        }
    }
}
void simple_search(){
    for(int i = 0 ; i < myData.size() ; i++){
        if(myData.at(i) == seached_item){
            cout << "item index :"<<i << endl;
            return ;
        }
    }
    cout << "item not found !"<<endl;
}
void binary_search(){
    int low_index = 0;
    int high_index = myData.size() - 1;
    while(true){
        int cur_index = (low_index + high_index)/2;

        if(myData.at(cur_index) == seached_item){
            cout << "index : "<<cur_index<<endl;
            break;
        }
        if(myData.at(cur_index) < seached_item){
            low_index = cur_index;
        }
        else{
            high_index = cur_index;
        }
        if(high_index == low_index + 1){
            break;
        }
        //cout << "here"<<endl;
    }
}
void generate_data(){
    myData.push_back(10);
    myData.push_back(-1);
    myData.push_back(5);
    myData.push_back(7);
    myData.push_back(2);
    myData.push_back(-3);
    myData.push_back(12);
    myData.push_back(-7);
    myData.push_back(12);
    myData.push_back(5);
}
void show_data(){
    for(int i = 0 ; i < myData.size() ; i++){
        cout << myData.at(i) << endl;
    }
}
