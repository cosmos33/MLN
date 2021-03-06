//
//  UIImage+mlnui_in_util.h
//  MLNUI
//
//  Created by MoMo on 2019/1/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (MLNUI_IN_UTIL)

+ (UIImage *)mlnui_in_imageWithColor:(UIColor *)color finalSize:(CGSize)size cornerRadius:(CGFloat)cornerRadius;

@end

NS_ASSUME_NONNULL_END
