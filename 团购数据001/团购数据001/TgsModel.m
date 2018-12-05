//
//  TgsModel.m
//  团购数据001
//
//  Created by 林国强 on 15/5/24.
//  Copyright (c) 2015年 lynn. All rights reserved.
//

#import "TgsModel.h"

@implementation TgsModel

+ (instancetype) tgsWithDict:(NSDictionary *)dict{
    return [[self alloc]initWithDict:dict];
}
- (instancetype) initWithDict:(NSDictionary *)dict{
    if (self = [super init]) {
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}

@end
