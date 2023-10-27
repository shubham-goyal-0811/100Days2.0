//Create a program that allows user to manage their to do task The program should provide options to add task , mark task as completed ,display the list an remove task
#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10
class task{
    private:
        string name;
        bool isCompleted;
        int id;//This is our priority
    public:
        task(){
            id=0;
            isCompleted = false;
            name="";
        }
        task(string na,bool stat, int i){
            name=na;
            isCompleted =stat;
            id=i;
        }
        void setStatus(){
            if (isCompleted==false) {
                isCompleted=true;
            }
        }

        string getname(){
            return name;
        }
        bool iscompleted(){
            return isCompleted;
        }
        int getID(){
            return id;
        }
};
class listo{
    private:
        task arr[MAX_SIZE];
        int idx;
    public:
        listo() : idx(0) {}
        void add_task(string name,int id,bool status){
            if(idx<MAX_SIZE){
                task t(name,status,id);
                arr[idx]=t;
                idx++;
            }
            else{
                cout<<"list is full\n";
            }
        }
        void remove_task(int id){
            for(int i=0;i<idx;i++){
                if(arr[i].getID()==id){
                    for(int j=i;j<idx-1;j++){
                        arr[j]=arr[j+1];
                    }
                    cout<<"Task removed succesfully\n";
                    idx--;
                }
            }
        }
        void display_tasks(){
            cout<<"Name\tID\tStatus\n";
            for(int i=0;i<idx;i++){
                cout<<arr[i].getname()<<"\t"<<arr[i].getID()<<"\t"<<(arr[i].iscompleted()?"Completed":"Pending")<<endl;
            }
        }
        void mark(int id){
            for(int i=0;i<idx;i++){
                if(arr[i].getID()==id){
                    arr[i].setStatus();
                    cout<<"Task "<<arr[i].getname()<<" Marked as Completed Successfully\n";
                }
            }

        }

};
int main() {
    listo mylist;
    //This can be made dynamic to take user Input amd wrapping this code into an infinite while loop:)
    mylist.add_task("padhai", 1, false);
    mylist.add_task("likhai", 2, false);
    mylist.add_task("hogyi", 3, true);
    mylist.add_task("DONE", 4, false);

    mylist.mark(1);
    mylist.remove_task(1);
    mylist.mark(4);

    mylist.display_tasks();

    return 0;
}