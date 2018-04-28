//
//  BeeGuideView.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/27.
//  Copyright © 2016年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BeeGuideView : NSObject

@property (nonatomic, strong) UIWindow *window;

/**
 *  创建单例模式
 *
 *  @return 单例
 */
+ (instancetype)sharedInstance;

- (void)setPageIndicatorColor:(UIColor*)color;
- (void)setCurrentPageIndicatorColor:(UIColor*)color;

/**
 *  引导页图片,默认是标题是立即体验，颜色是白色
 *
 *  @param images      引导页图片
 */
- (void)setGuideViewWithImages:(NSArray *)images;

/**
 *  引导页图片
 *
 *  @param images      引导页图片
 *  @param titleColor  文字颜色
 *  @param borderColor 按钮边框颜色
 */
- (void)setGuideViewWithImages:(NSArray *)images
           withButtonTitleColor:(UIColor *)titleColor
          withButtonBorderColor:(UIColor *)borderColor;

/**
 *  引导页图片
 *
 *  @param images      引导页图片
 *  @param titleColor  文字颜色
 *  @param bgColor     按钮背景颜色
 *  @param borderColor 按钮边框颜色
 */
- (void)setGuideViewWithImages:(NSArray *)images
           withButtonTitleColor:(UIColor *)titleColor
              withButtonBGColor:(UIColor *)bgColor
          withButtonBorderColor:(UIColor *)borderColor;

/**
 *  引导页图片
 *
 *  @param images      引导页图片
 *  @param title       按钮文字
 *  @param titleColor  文字颜色
 *  @param bgColor     按钮背景颜色
 *  @param borderColor 按钮边框颜色
 */
- (void)setGuideViewWithImages:(NSArray *)images
                withButtonTitle:(NSString *)title
           withButtonTitleColor:(UIColor *)titleColor
              withButtonBGColor:(UIColor *)bgColor
          withButtonBorderColor:(UIColor *)borderColor;

/**
 *  引导页图片
 *
 *  @param images      引导页图片
 *  @param title       按钮文字
 *  @param titleColor  文字颜色
 *  @param titleFont   文字字体
 *  @param bgColor     按钮背景颜色
 *  @param borderColor 按钮边框颜色
 */
- (void)setGuideViewWithImages:(NSArray *)images
                withButtonTitle:(NSString *)title
           withButtonTitleColor:(UIColor *)titleColor
            withButtonTitleFont:(UIFont*)titleFont
              withButtonBGColor:(UIColor *)bgColor
          withButtonBorderColor:(UIColor *)borderColor;

/**
 *  引导页图片
 *
 *  @param images      引导页图片
 *  @param title       按钮文字
 *  @param titleColor  文字颜色
 *  @param titleFont   文字字体
 *  @param bgColor     按钮背景颜色
 *  @param borderColor 按钮边框颜色
 *  @param offset 底部pagectrl偏移量
 */
- (void)setGuideViewWithImages:(NSArray *)images
                withButtonTitle:(NSString *)title
           withButtonTitleColor:(UIColor *)titleColor
            withButtonTitleFont:(UIFont*)titleFont
              withButtonBGColor:(UIColor *)bgColor
          withButtonBorderColor:(UIColor *)borderColor
                  withBtnOffset:(CGFloat)offset;

//展示引导图
- (void)showGuide;
//展示引导图 必须展示可设置
- (void)showGuide:(BOOL)bShow;

@end
