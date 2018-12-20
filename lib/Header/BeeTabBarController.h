//
//  BeeTabbarViewController.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/11.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BeeTabBar.h"

typedef void (^BeeCustomBtnBlock) (UIButton *btn, NSInteger index);

@protocol BeeTabBarControllerDelegate;

@interface BeeTabBarController : UITabBarController

@property(nonatomic, strong) BeeTabBarConfigure* configure;
@property(nonatomic, assign) id<BeeTabBarControllerDelegate> tabBarDelegate;

- (void)initTabBarView:(NSArray*)array;
- (void)initTabBarView:(NSArray*)array WithSelectedIndex:(NSInteger)index;

//更新tabbar相关信息
- (void)updateTabBarItems:(NSArray*)array;

/**
 对单个进行圆角设置
 @param radius 圆角值
 @param index 下标
 */
- (void)badgeRadius:(CGFloat)radius AtIndex:(NSInteger)index;

/**
 显示圆点badgevalue
 @param index 显示的下标
 */
- (void)showPointBadgeAtIndex:(NSInteger)index;

/**
 显示newBadgeValue
 @param index 下标
 */
- (void)showNewBadgeAtIndex:(NSInteger)index;

/**
 显示带数值的下标  (注意: 此方法可以全局重复调用)
 @param badgeValue 数值
 @param index 下标
 */
- (void)showNumberBadgeValue:(NSString *)badgeValue AtIndex:(NSInteger)index;

/**
 隐藏下标的badgeValue
 @param index 下标
 */
- (void)hideBadgeAtIndex:(NSInteger)index;

/******************************** 自定义按钮 基本配置 ********************************/

/** btnClickBlock */
@property (nonatomic, strong) BeeCustomBtnBlock btnClickBlock;

/**
 添加自定义按钮 (目前只支持自定义按钮, 如果需要自定义view或者对加号按钮有更多需求的请联系我)
 @param btn 自定义btn
 @param index 添加的下标位置
 @param btnClickBlock 按钮点击事件的回调
 */
- (void)addCustomBtn:(UIButton *)btn AtIndex:(NSInteger)index BtnClickBlock:(BeeCustomBtnBlock)btnClickBlock;

@end

@protocol BeeTabBarControllerDelegate <UITabBarControllerDelegate>

@optional
- (void)tabBarDidSelectItem:(BeeTabBarItem*)item;

@end

