//
// Created by wansnow on 2021/1/29.
//

#ifndef primitive.h
#define primitive.h
#include <cstring>
#include "../gloabl.h"
class Data{//字段数据
public:
    char* val;//值
    Data* next;//下一字段
    Data* prev;//上一字段

};
class List{//一条数据
public:
    Data* data;//当前字段数据
    Data* start;//数据起始字段
    Data* end;//数据结束字段

    List* next;//下一条数据
    List* prev;//上一条数据
    void appendData(Data* data){//追加数据
        Data* end = this->end;
        data->prev = end;
        end->next = data;
        this->end = data;
    }
    Data* getStart(){//获取起始字段
        return start;
    }

    Data* getEnd(){//获取结束字段
        return end;
    }
    void delList(){//删除当前数据
        prev->next = next;
        next->prev = prev;
        delete this;
    }
};
class Map{ //表
public:
    List* vals ;
};

Map* myMap(int tid);//获取表所有数据
Map* filterByItem(Map* map, int item, char* val);//根据过滤条件匹配，对应sql的where


#endif