//
//  CUSLayoutFrame.h
//  CUSLayout
//
//  Created by zhangyu on 13-4-9.
//  Copyright (c) 2013年 zhangyu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIView+CUSLayout.h"

/*
 布局对象基类，通过布局设置容器内子控件的位置和大小
 布局的意义:
 1、屏蔽屏幕分布率差异
 2、屏蔽客户终端字体大小的差异
 3、简化因增删控件、转动、拖动等改变大小而引起的位置大小方面的逻辑
 4、提高代码可读性、以模糊区域代替直接设置控件位置大小的抽象性
*/
@interface CUSLayoutFrame : NSObject
//左边距
@property (nonatomic,assign) CGFloat marginLeft;
//上边距
@property (nonatomic,assign) CGFloat marginTop;
//右边距
@property (nonatomic,assign) CGFloat marginRight;
//下边距
@property (nonatomic,assign) CGFloat marginBottom;
//API

-(void)setMargin:(CGFloat)margin;//同时设置上下左右边距
-(void)setMarginWidth:(CGFloat)margin;//同时设置左右边距
-(void)setMarginHeight:(CGFloat)margin;//同时设置上下边距

-(void)layout:(UIView *)view;
-(CGSize)computeSize:(UIView *)view;
-(CGSize)computeSize:(UIView *)view wHint:(CGFloat)wHint hHint:(CGFloat)hHint;
//Helper
-(NSArray *)getUsealbeChildren:(UIView *)view;
-(void)setControlFrame:(UIView *)view withFrame:(CGRect)frame;

@end