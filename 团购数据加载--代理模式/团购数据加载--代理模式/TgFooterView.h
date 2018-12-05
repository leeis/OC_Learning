//
//  TgFooterView.h
//  团购数据加载--代理模式
//
//  Created by 林国强 on 15/5/24.
//  Copyright (c) 2015年 lynn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TgFooterView;

@protocol TgFooterViewDelegate <NSObject>

@optional
- (void) tgFooterViewLoadMoreData: (TgFooterView *)tgFooterView;

@end

@interface TgFooterView : UIView

+ (instancetype) footerView;

@property (nonatomic, weak) id<TgFooterViewDelegate> delegate;

@end
