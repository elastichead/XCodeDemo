//
//  XCodeDAppDelegate.h
//  XCodeDemo
//
//  Created by Joshua Saayman on 2013/01/14.
//  Copyright (c) 2013 ElasticHead. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XCodeDViewController;

@interface XCodeDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) XCodeDViewController *viewController;

@end
