//
// Created by wansnow on 2021/2/20.
//
#include "primitive.h"

/**
 * 根据过滤条件匹配，对应sql的where
 * @param map
 * @param item
 * @param val
 * @return
 */
Map* filterByItem(Map* map, int item, char* val){//item属性 val过滤值
    for(List* ptr = map->vals;ptr!= nullptr;ptr = ptr->next){//遍历数据集合
        Data* temp=ptr->getStart();//初始化指针位置
        for(int i =0;i<item;i++,temp=temp->next);//获取当前数据字段
        if(strcmp(temp->val, val)!=0){//判断是否符合过滤条件
            ptr->delList();//删除不满足条件数据
        }
    }
}

/**
 * 获取表所有数据
 * @param tid
 * @return
 */
Map* myMap(int tid){
    skip_list* skipList = all_data(tid);
    Map* map = new Map();
    map->vals = new List();
    for()
}