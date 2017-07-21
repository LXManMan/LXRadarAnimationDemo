//
//  UIView+RadarAnimation.h
//  LXRadarAnimationDemo
//
//  Created by zhongzhi on 2017/7/20.
//  Copyright © 2017年 漫漫. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (RadarAnimation)

@property(nonatomic,strong)UIColor *radarColor; //扩散颜色
@property(nonatomic,assign)UIColor *radarBorderColor; //扩散边界颜色
-(void)addRadarAnimation;
@end
