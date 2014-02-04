//
//  FontAwesome.h
//  FontAwesomeTools-iOS is Copyright 2013 TapTemplate and released under the MIT license.
//  www.taptemplate.com
//

#import <Foundation/Foundation.h>

#import "font-awesome-codes.h"

@interface FontAwesome : NSObject

//================================
// Font and Label Methods
//================================

/*  Convenience method to get the FontAwesome font.
 */
+ (UIFont*)fontWithSize:(CGFloat)size;

/*  Convenience method to make a sized-to-fit UILabel containing an icon in the given font size and color.
 */
+ (UILabel*)labelWithIcon:(NSString*)fa_icon
                     size:(CGFloat)size
                    color:(UIColor*)color;

/*  Convenience method to get a custom font.
 */
+ (UIFont*)fontNamed:(NSString*)font withSize:(CGFloat)size;


//================================
// Image Methods
//================================

/* Make the image and icon the same size:
 */
+ (UIImage*)imageWithIcon:(NSString*)fa_icon
                     size:(CGFloat)size
                    color:(UIColor*)color;

/* The image and the icon inside it can be configured to different sizes:
 */
+ (UIImage*)imageWithIcon:(NSString*)fa_icon
                iconColor:(UIColor*)color
                 iconSize:(CGFloat)iconSize
                imageSize:(CGSize)imageSize;

/* The image and the icon inside it can be from a custom font:
 */
+ (UIImage*)imageWithFontNamed:(NSString*)font
                          icon:(NSString*)fa_icon
                     iconColor:(UIColor*)iconColor
                      iconSize:(CGFloat)iconSize
                     imageSize:(CGSize)imageSize;


@end
