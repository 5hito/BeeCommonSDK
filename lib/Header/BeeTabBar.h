//
//  BeeTabBar.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/4/1.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BeeTabBarButton.h"
#import "BeeTabBarItem.h"
#import "BeeTabBarConfigure.h"

@protocol BeeTabBarDelegate;

@interface BeeTabBar : UITabBar

@property (nonatomic, strong) NSArray<BeeTabBarItem*>* itemArr;
/** 存放BeeTabBarButton数组 */
@property (nonatomic, strong) NSMutableArray *tabBarBtnArr;

@property (nonatomic, strong) BeeTabBarConfigure* configure;
/** 代理 */
@property (nonatomic, weak) id <BeeTabBarDelegate> BeeDelegate;
/** selectedIndex (默认为0) */
@property (nonatomic, assign) NSInteger selectedIndex;

- (void)createTabBarView:(NSArray<BeeTabBarItem*>*) items;

@end

@protocol BeeTabBarDelegate <NSObject>

- (void)tabBar:(BeeTabBar *)tabBar didSelectIndex:(NSInteger)selectIndex;

@end
