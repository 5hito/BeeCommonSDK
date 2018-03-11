//
//  BeeTabbarViewController.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/11.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BeeTabBarItem;

@protocol BeeTabBarControllerDelegate <UITabBarControllerDelegate>

@optional
- (void)tabBarDidSelectViewController:(UIViewController *)viewController didSelectItem:(BeeTabBarItem*)item;

@end

@interface BeeTabBarController : UITabBarController

@property(nonatomic, assign) id<BeeTabBarControllerDelegate> tabBarDelegate;
@property(nonatomic, assign) NSInteger defaultSelectIndex;

- (void)initTabBarView:(NSArray*)array;
- (void)addRedRemind:(NSInteger)tag;
- (void)clearRedRemind:(NSInteger)tag;

@end
