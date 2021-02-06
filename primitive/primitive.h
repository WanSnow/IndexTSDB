//
// Created by wansnow on 2021/1/29.
//

#ifndef primitive.h
#define primitive.h

#include <cstring>

class Map{
public:
    List vals ;
};

class List{
    Data* data;
    Data* start;
    Data* end;
public:
    List* next;
    List* prev
    void appendData(Data* data){
        Data* end = this->end
        data->prev = end;
        end->next = data;
        this->end = data;
    }

    Data* getData(){
        return data
    }

    Data* getStart(){
        return start
    }

    Data* getEnd(){
        return end
    }
};

class Data{
public:
    string val;
    Data* next;
    Data* prev;
    void delData(){
        prev->next = next;
        next->prev = prev;
        delete this
    }
};

Map* filterByItem(Map* map, int item, string val){//item属性 val过滤值
    for(List* ptr = map->vals;ptr!= nullptr;ptr = ptr->next){
        Data* temp=ptr->getStart()
        for(int i =0;i<item;i++,temp=temp->next);
        if(strcmp(temp->val, val)!=0){
            temp->delData()
        }
    }
}
#endif