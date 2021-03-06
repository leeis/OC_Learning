//
//  TgModel.h
//  团购数据-002
//
//  Created by 林国强 on 15/5/24.
//  Copyright (c) 2015年 lynn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TgModel : NSObject

@property (nonatomic, copy) NSString *buyCount;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) NSString *title;

+ (instancetype) tgWithDict:(NSDictionary *)dict;
- (instancetype) initWithDict:(NSDictionary *)dict;

@end
